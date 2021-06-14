#include "ast_decl.h"
// 
enum data_type
{
    SPL_INTEGER,
    SPL_REAL,
    SPL_CHAR,
    SPL_BOOLEAN
};

enum nodeVal
{
    NODE = 0,
    PROGRAM,
    ID,
    ROUTINE,
    ROUTINE_HEAD,
    LABEL_PART,
    CONST_EXPR_LIST,
    CONST_EXPR,
    CONST_VALUE,
    TYPE_DEFINE_LIST,
    TYPE_DEFINITION,
    TYPE_DECL,
    SIMPLE_TYPE_DECL,
    ARRAY_TYPE_DECL,
    RECORD_TYPE_DECL,
    STMT_LIST
};

// tree node
class Node
{
public:
    // node info for the visualization of AST
    //visual
    virtual ~Node(){}
};


class Expression : public Node{};

//
class Statement : public Node
{
public:
    // 用于Goto语句设置标号
    void setLabel(int label)
    {
        this->label = label;
    }
    // goto need label 
    int getLable() const
    {
        return label;
    }
    void forward(CodeGenerator & generator);
    void backword(); //?
    
private:
    int label = -1;
};


class Identifier : public Expression
{
public:
    Identifier(string *name) : name(name)
    {
    }
    string getName() {
        return *name;
    }
   //get node info
private:
    string *name;
};

// 常量
class ConstValue : public Expression
{
public:
    union Value {
        int i;
        double r;
        bool b;
        char c;
    };
    virtual data_type getType() = 0;
    virtual ConstValue::Value getValue() = 0;
    virtual ConstValue *operator-() = 0;
    virtual bool isValidConstRangeType()
    {
        data_type t = getType();
        return t == SPL_INTEGER || t == SPL_CHAR;
    }
};

class Integer : public ConstValue
{
public:
    Integer(int value) : value(value){}
    virtual data_type getType() override
    {
        return SPL_INTEGER;
    }
    virtual ConstValue::Value getValue() override
    {
        Value v;
        v.i = value;
        return v;
    }
    virtual ConstValue *operator-() override {
        return new Integer(-value);
    }
   //get node info
private:
    int value;
};

class Real : public ConstValue
{
public:
    Real(double value) : value(value)
    {
    }
    virtual data_type getType() override
    {
        return SPL_REAL;
    }
    virtual ConstValue::Value getValue() override
    {
        Value v;
        v.r = value;
        return v;
    }
    virtual ConstValue *operator-() override {
        return new Real(-value);
    }

   //get node info
private:
    double value;
};

class Char : public ConstValue
{
public:
    Char(char value) : value(value)
    {
    }
    virtual data_type getType() override
    {
        return SPL_CHAR;
    }
    virtual ConstValue::Value getValue() override {
        Value v;
        v.c = value;
        return v;
    }
    virtual ConstValue *operator-() override {
        return new Char(-value);
    }

   //get node info
private:
    char value;
};

class Boolean : public ConstValue
{
public:
    Boolean(bool value) : value(value)
    {
    }
    virtual data_type getType() override
    {
        return SPL_BOOLEAN;
    }
    virtual ConstValue::Value getValue() override {
        Value v;
        v.b = value;
        return v;
    }
    virtual ConstValue *operator-() override {
        return new Boolean(!value);
    }

   //get node info
private:
    bool value;
};

// 常量声明语句
class ConstDeclaration : public Statement
{
public:
    ConstDeclaration(Identifier *ip, ConstValue *cp) : name(ip), value(cp), globalFlag(false){}
    
   //get node info
    void setGlobal()
    {
        globalFlag = true;
    }
    
    bool isGlobal()
    {
        return globalFlag;
    }
private:
    Identifier *name;
    ConstValue *value;
    AstType *type;
    bool globalFlag;
};

class EnumType : public Statement {
public:
    EnumType(vector<Identifier *> *nl) : enumList(nl) { }
   //get node info
private:
    vector<Identifier *> *enumList;
};

class AstArrayType : public Statement {
public:
    AstArrayType(AstType *type, AstType *range) : type(type), range(range) { }
   //get node info

    AstType *range;
    AstType *type;
};

class ConstRangeType : public Statement {
public:
    ConstRangeType(ConstValue *lowBound, ConstValue *upBound) : lowBound(lowBound), upBound(upBound) { }
   //get node info
    size_t size()
    {
        int s;
        if (lowBound->getType() == upBound->getType() && lowBound->isValidConstRangeType())
        {
            if (lowBound->getType() == SPL_INTEGER)
            {
                s = upBound->getValue().i - lowBound->getValue().i + 1;
            }
            else
            {
                s = upBound->getValue().c - lowBound->getValue().c + 1;
            }
            if (s <= 0)
            {
                throw std::range_error("[ERROR]low bound > up bound.");
            }
        }
        else
        {
            throw std::domain_error("[ERROR]Invalid range type.");
        }
        return s;
    }
    
private:
    ConstValue *lowBound;
    ConstValue *upBound;
};

class EnumRangeType : public Statement {
public:
    EnumRangeType(Identifier *lowBound, Identifier *upBound) : lowBound(lowBound), upBound(upBound) { }
   //get node info
    
    
    size_t size();
private:
    Identifier *lowBound;
    Identifier *upBound;
};

class FieldDeclaration : public Statement {
public:
    FieldDeclaration(vector<Identifier *> *nameList, AstType *td) : nameList(nameList), type(td) { }
   //get node info
private:
    vector<Identifier *> *nameList;
    AstType *type;
};

class RecordType : public Statement {
public:
    RecordType(vector<FieldDeclaration *> *fl) : fieldList(fl) { }
    
   //get node info
private:
    vector<FieldDeclaration *> *fieldList;
};

// 类型
class AstType : public Statement {
public:
    enum TypeOfType {
        SPL_ARRAY,
        SPL_RECORD,
        SPL_ENUM,
        SPL_CONST_RANGE,
        SPL_ENUM_RANGE,
        SPL_BUILD_IN,
        SPL_USER_DEFINE,
        SPL_VOID
    };
    AstType(AstArrayType *at) : arrayType(at), type(SPL_ARRAY) { }
    AstType(RecordType *rt) : recordType(rt), type(SPL_RECORD) { }
    AstType(EnumType *et) : enumType(et), type(SPL_ENUM) { }
    AstType(ConstRangeType *crt) : constRangeType(crt), type(SPL_CONST_RANGE) { }
    AstType(EnumRangeType *ert) : enumRangeType(ert), type(SPL_ENUM_RANGE) { }
    AstType(data_type bt) : data_type(bt), type(SPL_BUILD_IN) { }
    AstType(Identifier *udt) : userDefineType(udt), type(SPL_USER_DEFINE) { }
    AstType() : type(SPL_VOID) { }
   //get node info
   
    

    AstArrayType *arrayType;
    RecordType *recordType;
    EnumType *enumType;
    ConstRangeType *constRangeType;
    EnumRangeType *enumRangeType;
    data_type data_type;
    Identifier *userDefineType;
    TypeOfType type;
};


class TypeDeclaration : public Statement {
public:
    TypeDeclaration(Identifier *name, AstType *type) : name(name), type(type) {

    }
   //get node info
private:
    Identifier *name;
    AstType *type;
};


class VarDeclaration : public Statement {
public:
    VarDeclaration(vector<Identifier *> *nl, AstType *td) : nameList(nl), type(td), globalFlag(false) {}

   //get node info
    
    void setGlobal()
    {
        globalFlag = true;
    }
    
    bool isGlobal()
    {
        return globalFlag;
    }
private:
    vector<Identifier *> *nameList;
    AstType *type;
    bool globalFlag;
};

class FuncDeclaration : public Statement {
public: 
    FuncDeclaration(Identifier *name, vector<Parameter *> *paraList, AstType *returnType) : name(name), paraList(paraList), returnType(returnType) {

    }
    FuncDeclaration(Identifier *name, vector<Parameter *> *paraList) : name(name), paraList(paraList) {
        returnType = new AstType();
    }
    
    void setRoutine(Routine *routine) {
        subRoutine = routine;
    }

   //get node info
private:
    Identifier *name;
    vector<Parameter *> *paraList;
    AstType *returnType;
    Routine *subRoutine;
};

class Parameter : public Statement {
public:
    Parameter(vector<Identifier *> *nl, bool isVar) : nameList(nl), isVar(isVar) { }
    void setType(AstType *type) {
        this->type = type;
    }
    AstType* getType()
    {
        return type;
    }

   //get node info

    bool isVar;
    vector<Identifier *> *nameList;
    AstType *type;
};

class Routine : public Node {
public:
    Routine(vector<ConstDeclaration *> *cd, vector<TypeDeclaration *> *tp, vector<VarDeclaration *> *vd, vector<FuncDeclaration *> *rl) 
                : constDeclList(cd), varDeclList(vd), typeDeclList(tp), routineList(rl) {

    }
    void setRoutineBody(CompoundStatement *routineBody) { this->routineBody = routineBody; }
   //get node info
    void setGlobal()
    {
        for (auto & constDecl : *constDeclList)
        {
            constDecl->setGlobal();
        }
        for (auto & varDecl : *varDeclList)
        {
            varDecl->setGlobal();
        }
    }
private:
    vector<ConstDeclaration *> *constDeclList;
    vector<VarDeclaration *> *varDeclList;
    vector<TypeDeclaration *> *typeDeclList;
    vector<FuncDeclaration *> *routineList;
    CompoundStatement *routineBody;
};

class Program : public Node {
public:
    Program(string *programID, Routine *routine) : programID(programID), routine(routine) { }
   //get node info
private:
    string *programID;
    Routine *routine;
};

class AssignStatement : public Statement {
public:
    AssignStatement(Identifier *lhs, Expression *rhs) : lhs(lhs), rhs(rhs), type(ID_ASSIGN) { }
    AssignStatement(Identifier *lhs, Expression *sub, Expression *rhs) : lhs(lhs), sub(sub), rhs(rhs), type(ARRAY_ASSIGN) { }
    AssignStatement(Identifier *lhs, Identifier *field, Expression *rhs) : lhs(lhs), field(field), rhs(rhs), type(RECORD_ASSIGN) { }
    
   //get node info
private:
    enum AssignType {
        ID_ASSIGN,
        ARRAY_ASSIGN,
        RECORD_ASSIGN
    };
    Identifier *lhs;
    Expression *rhs;
    Expression *sub;
    Identifier *field;
    AssignType type;
};

class BinaryExpression : public Expression {
public:
    enum BinaryOperator {
        SPL_PLUS,
        SPL_MINUS,
        SPL_MUL,
        SPL_DIV,
        SPL_GE,
        SPL_GT, 
        SPL_LT,
        SPL_LE,
        SPL_EQUAL,
        SPL_UNEQUAL,
        SPL_OR,
        SPL_MOD,
        SPL_AND,
        SPL_XOR,
    };
    BinaryExpression(Expression *lhs, BinaryOperator op, Expression *rhs) : lhs(lhs), op(op), rhs(rhs) {     }

   //get node info
private:
    vector<string> opString{"+", "-", "*", "/", ">=", ">", "<", "<=", "==", "!=", "or", "mod", "and", "xor"};
    Expression *lhs;
    Expression *rhs;
    BinaryOperator op;
};

class ArrayReference : public Expression {
public:
    ArrayReference(Identifier *array, Expression *index) : array(array), index(index) { }

   //get node info
    
private:
    Identifier *array;
    Expression *index;
};

class RecordReference : public Expression {
public:
    RecordReference(Identifier *record, Identifier *field) : record(record), field(field) { }

   //get node info
private:
    Identifier *record;
    Identifier *field;
};

class FunctionCall : public Expression, public Statement{
public:
    FunctionCall(Identifier *name) : function(name), args(new vector<Expression *>()) { }
    FunctionCall(Identifier *name, vector<Expression *> *args) : function(name), args(args) { }

   //get node info
private:
    Identifier *function;
    vector<Expression *> *args;
};

class ProcedureCall : public Statement {
public:
    ProcedureCall(Identifier *name) : function(name), args(new vector<Expression *>()) { }
    ProcedureCall(Identifier *name, vector<Expression *> *args) : function(name), args(args) { }

   //get node info
private:
    Identifier *function;
    vector<Expression *> *args;
};

class SysFunctionCall : public Expression, public Statement{
public:
    SysFunctionCall(string *name) : function(getFunction(name)), name(name) { }
    SysFunctionCall(string *name, vector<Expression *> *args) : function(getFunction(name)), args(args), name(name) { }

   //get node info
private:
    enum SysFunction {
        SPL_ABS, 
        SPL_CHR, 
        SPL_ODD, 
        SPL_ORD, 
        SPL_PRED, 
        SPL_SQR, 
        SPL_SQRT, 
        SPL_SUCC,
        SPL_ERROR_FUCNTION
    };
    SysFunction getFunction(string *name) {
        string &sname = *name;
        if(sname == "abs")
            return SPL_ABS;
        else if(sname == "chr")
            return SPL_CHR;
        else if(sname == "odd")
            return SPL_ODD;
        else if(sname == "ord")
            return SPL_ORD;
        else if(sname == "pred")
            return SPL_PRED;
        else if(sname == "sqr")
            return SPL_SQR;
        else if(sname == "sqrt")
            return SPL_SQRT;
        else if(sname == "succ")
            return SPL_SUCC;
        else
            return SPL_ERROR_FUCNTION;
    }
    SysFunction function;
    vector<Expression *> *args;
    string *name;
};

class SysProcedureCall : public Statement {
public:
    SysProcedureCall(string *name) : procedure(getProcedure(name)), name(name) { }
    SysProcedureCall(string *name, vector<Expression *> *args) : procedure(getProcedure(name)), args(args), name(name) { }
    SysProcedureCall(string *name, Expression *expr) : procedure(getProcedure(name)), args(new vector<Expression *>()), name(name) {
        args->push_back(expr);
    }

   //get node info

private:
    enum SysProcedure {
        SPL_WRITE,
        SPL_WRITELN,
        SPL_READ,
        SPL_ERROR_PROCEDURE
    };
    SysProcedure getProcedure(string *name) {
        string &sname = *name;
        if(sname == "write")
            return SPL_WRITE;
        else if(sname == "writeln")
            return SPL_WRITELN;
        else if(sname == "read")
            return SPL_READ;
        else
            return SPL_ERROR_PROCEDURE;
    }
    SysProcedure procedure;
    vector<Expression *> *args;
    string *name;
};

class IfStatement : public Statement {
public:
    IfStatement(Expression *condition, Statement *thenStatement, Statement *elseStatement) : 
                                        condition(condition), thenStatement(thenStatement), elseStatement(elseStatement) {

                                        }

   //get node info
private:
    Expression *condition;
    Statement *thenStatement;
    // elseStatement can be nullptr 你需要自己检测下是否是空指针
    Statement *elseStatement;
};

class RepeatStatement : public Statement {
public:
    RepeatStatement(Expression *condition, vector<Statement *> *stmtList) : condition(condition), repeatStatement(stmtList) {

    }
    
   //get node info
private:
    Expression *condition;
    vector<Statement *> *repeatStatement;
};

class WhileStatement : public Statement {
public:
    WhileStatement(Expression *condition, Statement *stmt) : condition(condition), stmt(stmt) {

    }

   //get node info
private:
    Expression *condition;
    Statement *stmt;
};

class ForStatement : public Statement {
public:
    ForStatement(Identifier *var, Expression *value, bool isAdd, Expression *step, Statement *stmt) :
                                var(var), value(value), isAdd(isAdd), step(step), stmt(stmt) {}

   //get node info   
private:
    Identifier *var;
    Expression *value;
    // increase:true decrease:false
    bool isAdd;
    Expression *step;
    Statement *stmt;
};

class CaseStatement : public Statement {
public:
    CaseStatement(Expression *value, vector<CaseExpression *> *caseExprList) : value(value), caseExprList(caseExprList) { }

   //get node info
private:
    Expression *value;
    vector<CaseExpression *> *caseExprList;
};

class CaseExpression : public Statement {
public:
    CaseExpression(Expression *value, Statement *stmt) : value(value), stmt(stmt) { }

   //get node info
    Expression *value;
private:
    // 可以与CaseStatement中的变量建立EQUAL的BinaryStatment进行条件判断
    Statement *stmt;
};

class GotoStatement : public Statement {
public:
    GotoStatement(int label) : toLabel(label) { }

   //get node info
private:
    int toLabel;
};

class CompoundStatement : public Statement {
public:
    CompoundStatement(vector<Statement *> *stmtList) : stmtList(stmtList) { }

   //get node info
private:
    vector<Statement *> *stmtList;
};
