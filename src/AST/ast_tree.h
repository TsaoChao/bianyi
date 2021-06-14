#include "ast_node.h"

enum NodeType {
    NODE = 0,
    PROGRAM_NODE,
    ID,
    ROUTINE_NODE,
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

string getJsonString(string name) {
    return "{ \"name\" : \"" + name + "\" }";
}

string getJsonString(string name, vector<string> children) {
    string result = "{ \"name\" : \"" + name + "\", \"children\" : [ ";
    int i = 0;
    for(auto &child : children) {
        if(i != children.size() - 1)
            result += child + ", ";
        else 
            result += child + " ";
        i++;
    }
    return result + " ] }";
}

string getJsonString(string name, string value) {
    return getJsonString(name, vector<string>{value});
}

string getJsonString(string name, string value, vector<string> children) {
    string result = "{ \"name\" : \"" + name + "\", \"value\" : \"" + value + "\", \"children\" : [ ";
    int i = 0;
    for(auto &child : children) {
        if(i != children.size() - 1)
            result += child + ", ";
        else 
            result += child + " ";
        i++;
    }
    return result + " ] }";
}

string Program::getJson() {
    return getJsonString("program", *program_head, vector<string>{routine->getJson()});
}

string Identifier::getJson() {
    return getJsonString("Identifier", getJsonString(*name));
}

string Integer::getJson() {
    return getJsonString("Integer", getJsonString(to_string(v.i)));
}

string Real::getJson() {
    return getJsonString("Real", getJsonString(to_string(v.r)));
}

string Char::getJson() {
    return getJsonString("Char", getJsonString(string(1, v.c)));
}

string Boolean::getJson() {
    return getJsonString("Boolean", getJsonString((v.b ? "true" : "false")));
}

string ConstDeclaration::getJson() {
    vector<string> children;
    children.push_back(name->getJson());
    children.push_back(value->getJson());
    return getJsonString("ConstDeclaration", children);
}

string EnumType::getJson() {
    vector<string> children;
    for(auto &name : *enumList) {
        children.push_back(name->getJson());
    }
    return getJsonString("EnumType", children);
}

string AstArrayType::getJson() {
    vector<string> children;
    children.push_back(getJsonString("range", range->getJson()));
    children.push_back(getJsonString("type", type->getJson()));
    return getJsonString("AstArrayType", children);
}

string ConstRangeType::getJson() {
    vector<string> children;
    children.push_back(getJsonString("lowBound", lowBound->getJson()));
    children.push_back(getJsonString("upBound", upBound->getJson()));
    return getJsonString("ConstRangeType", children);
}

string EnumRangeType::getJson() {
    vector<string> children;
    children.push_back(getJsonString("lowBound", lowBound->getJson()));
    children.push_back(getJsonString("upBound", upBound->getJson()));
    return getJsonString("EnumRangeType", children);
}

string FieldDeclaration::getJson() {
    vector<string> children;
    vector<string> nameListJson;
    for(auto &name : *nameList) {
        nameListJson.push_back(name->getJson());
    }
    children.push_back(getJsonString("nameList", nameListJson));
    children.push_back(getJsonString("type", type->getJson()));
    return getJsonString("FieldDeclaration", children);
}


string AstType::getJson() {
    switch (type)
    {
    case SPL_ARRAY:
        return ast_type.arrayType->getJson();
        break;
    case SPL_ENUM:
        return ast_type.enumType->getJson();
        break;
    case SPL_CONST_RANGE:
        return ast_type.constRangeType->getJson();
        break;
    case SPL_ENUM_RANGE:
        return ast_type.enumRangeType->getJson();
        break;
    case SPL_BUILD_IN:
        switch (ast_type.buildInType)
        {
        case SPL_INTEGER:
            return getJsonString("BuildInType", getJsonString("Integer"));
            break;
        case SPL_REAL:
            return getJsonString("BuildInType", getJsonString("Real"));
            break;
        case SPL_CHAR:
            return getJsonString("BuildInType", getJsonString("Char"));
            break;
        case SPL_BOOLEAN:
            return getJsonString("BuildInType", getJsonString("Boolean"));
            break;
        default:
            break;
        }
        break;
    case SPL_USER_DEFINE:
        return getJsonString("UserDefineType", getJsonString(ast_type.userDefineType->getName()));
        break;
    default:
        return getJsonString("ErrorType");
        break;
    }
}

string TypeDeclaration::getJson() {
    vector<string> children;
    children.push_back(name->getJson());
    children.push_back(type->getJson());
    return getJsonString("TypeDeclaration", children);
}

string VarDeclaration::getJson() {
    vector<string> children;
    vector<string> nameListJson;
    for(auto &name : *nameList) {
        nameListJson.push_back(name->getJson());
    }
    children.push_back(getJsonString("Type", type->getJson()));
    children.push_back(getJsonString("NameList", nameListJson));
    return getJsonString("VarDeclaration", children);
}

string FuncDeclaration::getJson() {
    vector<string> children;
    children.push_back(name->getJson());
    vector<string> paraListJson;
    for(auto &para : *paraList)
        paraListJson.push_back(para->getJson());
    children.push_back(getJsonString("ParaList", paraListJson));
    children.push_back(returnType->getJson());
    children.push_back(subRoutine->getJson());

    return getJsonString("FuncDeclaration", children);
}

string Parameter::getJson() {
    vector<string> children;
    vector<string> nameListJson;
    for(auto &name : *nameList) {
        nameListJson.push_back(name->getJson());
    }
    children.push_back(getJsonString("Type", type->getJson()));
    children.push_back(getJsonString("NameList", nameListJson));
    children.push_back(getJsonString("isVar", getJsonString((isVar ? "true" : "false" ))));
    return getJsonString("Parameter", children);
}

string Routine::getJson(){
    vector<string> children;
    children.push_back(routine_head->getJson());
    children.push_back(routine_body->getJson());
    return getJsonString("Routine",children);
}

string RoutineHead::getJson() {
    vector<string> children;
    vector<string> constJson, varJson, typeJson, routineJson;
    for(auto constDecl : *constDeclList)
        constJson.push_back(constDecl->getJson());
    for(auto varDecl : *varDeclList)
        varJson.push_back(varDecl->getJson());
    for(auto typeDecl : *typeDeclList)
        typeJson.push_back(typeDecl->getJson());
    for(auto routineDecl : *routineList)
        routineJson.push_back(routineDecl->getJson());
    children.push_back(getJsonString("ConstDeclList", constJson));
    children.push_back(getJsonString("VarDeclList", varJson)); 
    children.push_back(getJsonString("TypeDeclList", typeJson));
    children.push_back(getJsonString("RoutineDeclList", routineJson));
    
    return getJsonString("RoutineHead", children);
}

string RoutineBody::getJson(){
    vector<string> children;
    children.push_back(routine_body->getJson());
    return getJsonString("RoutineBody",children);
}

string AssignStatement::getJson() {
    vector<string> children;
    switch (type)
    {
    case ID_ASSIGN:
        children.push_back(lhs->getJson());
        children.push_back(rhs->getJson());
        break;
    case ARRAY_ASSIGN:
        children.push_back(lhs->getJson());
        children.push_back(sub->getJson());
        children.push_back(rhs->getJson());
        break;
    case RECORD_ASSIGN:
        children.push_back(lhs->getJson());
        children.push_back(field->getJson());
        children.push_back(rhs->getJson());
        break;
    default:
        break;
    }    

    return getJsonString("AssignStatement", children);
}

string BinaryExpression::getJson() {
    vector<string> children;
    children.push_back(lhs->getJson());
    children.push_back(getJsonString(opString[op]));
    children.push_back(rhs->getJson());

    return getJsonString("BinaryExpression", children);
}

string ArrayReference::getJson() {
    vector<string> children;
    children.push_back(array->getJson());
    children.push_back(index->getJson());

    return getJsonString("ArrayReference", children);
}

string RecordReference::getJson() {
    vector<string> children;
    children.push_back(record->getJson());
    children.push_back(field->getJson());

    return getJsonString("RecordReference", children);
}

string FunctionCall::getJson() {
    vector<string> children;
    children.push_back(function->getJson());
    vector<string> argsJson;
    for(auto &arg : *args) {
        argsJson.push_back(arg->getJson());
    }
    children.push_back(getJsonString("ArgList", argsJson));
    return getJsonString("FunctionCall", children);
}

string ProcedureCall::getJson() {
    vector<string> children;
    children.push_back(function->getJson());
    vector<string> argsJson;
    for(auto &arg : *args) {
        argsJson.push_back(arg->getJson());
    }
    children.push_back(getJsonString("ArgList", argsJson));
    return getJsonString("ProcedureCall", children);
}

string SysFunctionCall::getJson() {
    vector<string> children;
    children.push_back(getJsonString("SysFunction", getJsonString(*name)));
    vector<string> argsJson;
    for(auto &arg : *args) {
        argsJson.push_back(arg->getJson());
    }
    children.push_back(getJsonString("ArgList", argsJson));
    return getJsonString("SysFunctionCall", children);
}

string SysProcedureCall::getJson() {
    vector<string> children;
    children.push_back(getJsonString("SysProcedure", getJsonString(*name)));
    vector<string> argsJson;
    for(auto &arg : *args) {
        argsJson.push_back(arg->getJson());
    }
    children.push_back(getJsonString("ArgList", argsJson));
    return getJsonString("SysProcedureCall", children);
}

string IfStatement::getJson() {
    vector<string> children;
    children.push_back(condition->getJson());
    children.push_back(thenStatement->getJson());
    if(elseStatement != nullptr)
        children.push_back(elseStatement->getJson());

    return getJsonString("IfStatement", children);
}

string RepeatStatement::getJson() {
    vector<string> children;
    children.push_back(condition->getJson());
    vector<string> repeatStmtJson;
    for(auto &stmt : *repeatStatement)
        repeatStmtJson.push_back(stmt->getJson());
    children.push_back(getJsonString("RepeatStatement", repeatStmtJson));

    return getJsonString("RepeatStatement", children);
}

string WhileStatement::getJson() {
    vector<string> children;
    children.push_back(condition->getJson());
    children.push_back(stmt->getJson());

    return getJsonString("WhileStatement", children);
}

string ForStatement::getJson() {
    vector<string> children;
    children.push_back(var->getJson());
    children.push_back(value->getJson());
    children.push_back(getJsonString("isAdd", getJsonString((isAdd ? "true" : "false"))));
    children.push_back(step->getJson());
    children.push_back(stmt->getJson());

    return getJsonString("ForStatement", children);
}  

string CaseStatement::getJson() {
    vector<string> children;
    children.push_back(value->getJson());
    vector<string> caseExprJsonList;
    for(auto &caseExpr : *caseExprList) {
        caseExprJsonList.push_back(caseExpr->getJson());
    }
    children.push_back(getJsonString("CaseExprList", caseExprJsonList));

    return getJsonString("CaseStatement", children);
}    

string CaseExpression::getJson() {
    vector<string> children;
    children.push_back(value->getJson());
    children.push_back(stmt->getJson());

    return getJsonString("CaseExpression", children);
}

string GotoStatement::getJson() {
    return getJsonString("GotoStatement", getJsonString(to_string(toLabel)));
}    

string CompoundStatement::getJson() {
    vector<string> stmtJsonList;
    for(auto &stmt : *stmtList) {
        stmtJsonList.push_back(stmt->getJson());
    }
    return getJsonString("CompoundStatement", stmtJsonList);
}
