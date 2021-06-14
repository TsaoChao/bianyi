/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ASSIGN = 258,                  /* ASSIGN  */
    LP = 259,                      /* LP  */
    RP = 260,                      /* RP  */
    LB = 261,                      /* LB  */
    RB = 262,                      /* RB  */
    DOT = 263,                     /* DOT  */
    COMMA = 264,                   /* COMMA  */
    COLON = 265,                   /* COLON  */
    SEMI = 266,                    /* SEMI  */
    ARRAY = 267,                   /* ARRAY  */
    BEGIN = 268,                   /* BEGIN  */
    SYS_TYPE = 269,                /* SYS_TYPE  */
    CONST = 270,                   /* CONST  */
    END = 271,                     /* END  */
    FUNCTION = 272,                /* FUNCTION  */
    PROGRAM = 273,                 /* PROGRAM  */
    PROCEDURE = 274,               /* PROCEDURE  */
    RECORD = 275,                  /* RECORD  */
    VAR = 276,                     /* VAR  */
    TYPE = 277,                    /* TYPE  */
    EQUAL = 278,                   /* EQUAL  */
    UNEQUAL = 279,                 /* UNEQUAL  */
    GE = 280,                      /* GE  */
    GT = 281,                      /* GT  */
    LE = 282,                      /* LE  */
    LT = 283,                      /* LT  */
    AND = 284,                     /* AND  */
    OR = 285,                      /* OR  */
    NOT = 286,                     /* NOT  */
    PLUS = 287,                    /* PLUS  */
    MINUS = 288,                   /* MINUS  */
    MUL = 289,                     /* MUL  */
    DIV = 290,                     /* DIV  */
    DIVI = 291,                    /* DIVI  */
    MOD = 292,                     /* MOD  */
    DOTDOT = 293,                  /* DOTDOT  */
    IDENTIFIER = 294,              /* IDENTIFIER  */
    INTEGER = 295,                 /* INTEGER  */
    REAL = 296,                    /* REAL  */
    CHAR = 297,                    /* CHAR  */
    STRING = 298,                  /* STRING  */
    SYS_CON = 299,                 /* SYS_CON  */
    READ = 300,                    /* READ  */
    SYS_PROC = 301,                /* SYS_PROC  */
    SYS_FUNCT = 302,               /* SYS_FUNCT  */
    DOWNTO = 303,                  /* DOWNTO  */
    DO = 304,                      /* DO  */
    REPEAT = 305,                  /* REPEAT  */
    TO = 306,                      /* TO  */
    THEN = 307,                    /* THEN  */
    WHILE = 308,                   /* WHILE  */
    UNTIL = 309,                   /* UNTIL  */
    FOR = 310,                     /* FOR  */
    IF = 311,                      /* IF  */
    ELSE = 312,                    /* ELSE  */
    CASE = 313,                    /* CASE  */
    OF = 314,                      /* OF  */
    GOTO = 315                     /* GOTO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ASSIGN 258
#define LP 259
#define RP 260
#define LB 261
#define RB 262
#define DOT 263
#define COMMA 264
#define COLON 265
#define SEMI 266
#define ARRAY 267
#define BEGIN 268
#define SYS_TYPE 269
#define CONST 270
#define END 271
#define FUNCTION 272
#define PROGRAM 273
#define PROCEDURE 274
#define RECORD 275
#define VAR 276
#define TYPE 277
#define EQUAL 278
#define UNEQUAL 279
#define GE 280
#define GT 281
#define LE 282
#define LT 283
#define AND 284
#define OR 285
#define NOT 286
#define PLUS 287
#define MINUS 288
#define MUL 289
#define DIV 290
#define DIVI 291
#define MOD 292
#define DOTDOT 293
#define IDENTIFIER 294
#define INTEGER 295
#define REAL 296
#define CHAR 297
#define STRING 298
#define SYS_CON 299
#define READ 300
#define SYS_PROC 301
#define SYS_FUNCT 302
#define DOWNTO 303
#define DO 304
#define REPEAT 305
#define TO 306
#define THEN 307
#define WHILE 308
#define UNTIL 309
#define FOR 310
#define IF 311
#define ELSE 312
#define CASE 313
#define OF 314
#define GOTO 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "/home/cao/bianyi-1/src/pascal_par.y"

    int Ival;
    string *Sval;
    double Rval;
    bool bVal;
    char Cval;
    Node *node;
    Expression *expression;
    Statement *statement;
    Integer *integer;
    Real *real;
    Char *astChar;
    Boolean *boolean;
    ConstValue *constValue;
    Identifier *identifier;
    ConstDeclaration *constDeclaration;
    TypeDeclaration *typeDeclaration;
    VarDeclaration *varDeclaration;
    AstType *type;
    EnumType *enumType;
    AstArrayType *AstArrayType;
    RecordType  *recordType;
    ConstRangeType *constRangeType;
    EnumRangeType *enumRangeType;
    FieldDeclaration *fieldDeclaration;
    FuncDeclaration *funcDeclaration;
    Parameter *parameter;
    Routine *routine;
    Program *program;
    AssignStatement *assignStatement;
    BinaryExpression *binaryExpression;
    ArrayReference *arrayReference;
    RecordReference *recordReference;
    FunctionCall *functionCall;
    SysFunctionCall *sysFunctionCall;
    ProcedureCall *procedureCall;
    SysProcedureCall *sysProcedureCall;
    IfStatement *ifStatement;
    RepeatStatement *repeatStatement;
    WhileStatement *whileStatement;
    ForStatement *forStatement;
    CaseStatement *caseStatement;
    CaseExpression *caseExpression;
    GotoStatement *gotoStatement;

    ExpressionList *expressionList;
    StatementList *statementList;
    ConstDeclList *constDeclList;
    VarDeclList *varDeclList;
    TypeDeclList *typeDeclList;
    NameList *nameList;
    FieldList *fieldList;
    ParaList *paraList;
    RoutineList *routineList;
    ArgsList *argsList;
    CaseExprList *caseExprList;
    CompoundStatement *compoundStatement;

#line 246 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
