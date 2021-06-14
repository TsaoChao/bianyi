/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "/home/cao/bianyi-1/src/pascal_par.y"

#include "ast.h"
#include <string>
#include <iostream>

using namespace std;
void yyerror(const char *s);

int yylex(void);

Program *root;

#line 84 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 316 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ASSIGN = 3,                     /* ASSIGN  */
  YYSYMBOL_LP = 4,                         /* LP  */
  YYSYMBOL_RP = 5,                         /* RP  */
  YYSYMBOL_LB = 6,                         /* LB  */
  YYSYMBOL_RB = 7,                         /* RB  */
  YYSYMBOL_DOT = 8,                        /* DOT  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_COLON = 10,                     /* COLON  */
  YYSYMBOL_SEMI = 11,                      /* SEMI  */
  YYSYMBOL_ARRAY = 12,                     /* ARRAY  */
  YYSYMBOL_BEGIN = 13,                     /* BEGIN  */
  YYSYMBOL_SYS_TYPE = 14,                  /* SYS_TYPE  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_END = 16,                       /* END  */
  YYSYMBOL_FUNCTION = 17,                  /* FUNCTION  */
  YYSYMBOL_PROGRAM = 18,                   /* PROGRAM  */
  YYSYMBOL_PROCEDURE = 19,                 /* PROCEDURE  */
  YYSYMBOL_RECORD = 20,                    /* RECORD  */
  YYSYMBOL_VAR = 21,                       /* VAR  */
  YYSYMBOL_TYPE = 22,                      /* TYPE  */
  YYSYMBOL_EQUAL = 23,                     /* EQUAL  */
  YYSYMBOL_UNEQUAL = 24,                   /* UNEQUAL  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_GT = 26,                        /* GT  */
  YYSYMBOL_LE = 27,                        /* LE  */
  YYSYMBOL_LT = 28,                        /* LT  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_PLUS = 32,                      /* PLUS  */
  YYSYMBOL_MINUS = 33,                     /* MINUS  */
  YYSYMBOL_MUL = 34,                       /* MUL  */
  YYSYMBOL_DIV = 35,                       /* DIV  */
  YYSYMBOL_DIVI = 36,                      /* DIVI  */
  YYSYMBOL_MOD = 37,                       /* MOD  */
  YYSYMBOL_DOTDOT = 38,                    /* DOTDOT  */
  YYSYMBOL_IDENTIFIER = 39,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER = 40,                   /* INTEGER  */
  YYSYMBOL_REAL = 41,                      /* REAL  */
  YYSYMBOL_CHAR = 42,                      /* CHAR  */
  YYSYMBOL_STRING = 43,                    /* STRING  */
  YYSYMBOL_SYS_CON = 44,                   /* SYS_CON  */
  YYSYMBOL_READ = 45,                      /* READ  */
  YYSYMBOL_SYS_PROC = 46,                  /* SYS_PROC  */
  YYSYMBOL_SYS_FUNCT = 47,                 /* SYS_FUNCT  */
  YYSYMBOL_DOWNTO = 48,                    /* DOWNTO  */
  YYSYMBOL_DO = 49,                        /* DO  */
  YYSYMBOL_REPEAT = 50,                    /* REPEAT  */
  YYSYMBOL_TO = 51,                        /* TO  */
  YYSYMBOL_THEN = 52,                      /* THEN  */
  YYSYMBOL_WHILE = 53,                     /* WHILE  */
  YYSYMBOL_UNTIL = 54,                     /* UNTIL  */
  YYSYMBOL_FOR = 55,                       /* FOR  */
  YYSYMBOL_IF = 56,                        /* IF  */
  YYSYMBOL_ELSE = 57,                      /* ELSE  */
  YYSYMBOL_CASE = 58,                      /* CASE  */
  YYSYMBOL_OF = 59,                        /* OF  */
  YYSYMBOL_GOTO = 60,                      /* GOTO  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_ID = 62,                        /* ID  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_program_head = 64,              /* program_head  */
  YYSYMBOL_routine = 65,                   /* routine  */
  YYSYMBOL_routine_head = 66,              /* routine_head  */
  YYSYMBOL_const_part = 67,                /* const_part  */
  YYSYMBOL_const_expr_list = 68,           /* const_expr_list  */
  YYSYMBOL_const_value = 69,               /* const_value  */
  YYSYMBOL_type_part = 70,                 /* type_part  */
  YYSYMBOL_type_decl_list = 71,            /* type_decl_list  */
  YYSYMBOL_type_definition = 72,           /* type_definition  */
  YYSYMBOL_type_decl = 73,                 /* type_decl  */
  YYSYMBOL_simple_type_decl = 74,          /* simple_type_decl  */
  YYSYMBOL_array_type_decl = 75,           /* array_type_decl  */
  YYSYMBOL_record_type_decl = 76,          /* record_type_decl  */
  YYSYMBOL_field_decl_list = 77,           /* field_decl_list  */
  YYSYMBOL_field_decl = 78,                /* field_decl  */
  YYSYMBOL_name_list = 79,                 /* name_list  */
  YYSYMBOL_var_part = 80,                  /* var_part  */
  YYSYMBOL_var_decl_list = 81,             /* var_decl_list  */
  YYSYMBOL_var_decl = 82,                  /* var_decl  */
  YYSYMBOL_routine_part = 83,              /* routine_part  */
  YYSYMBOL_function_decl = 84,             /* function_decl  */
  YYSYMBOL_function_head = 85,             /* function_head  */
  YYSYMBOL_procedure_decl = 86,            /* procedure_decl  */
  YYSYMBOL_procedure_head = 87,            /* procedure_head  */
  YYSYMBOL_parameters = 88,                /* parameters  */
  YYSYMBOL_para_decl_list = 89,            /* para_decl_list  */
  YYSYMBOL_para_type_list = 90,            /* para_type_list  */
  YYSYMBOL_var_para_list = 91,             /* var_para_list  */
  YYSYMBOL_val_para_list = 92,             /* val_para_list  */
  YYSYMBOL_sub_routine = 93,               /* sub_routine  */
  YYSYMBOL_routine_body = 94,              /* routine_body  */
  YYSYMBOL_compound_stmt = 95,             /* compound_stmt  */
  YYSYMBOL_stmt_list = 96,                 /* stmt_list  */
  YYSYMBOL_stmt = 97,                      /* stmt  */
  YYSYMBOL_non_label_stmt = 98,            /* non_label_stmt  */
  YYSYMBOL_assign_stmt = 99,               /* assign_stmt  */
  YYSYMBOL_proc_stmt = 100,                /* proc_stmt  */
  YYSYMBOL_expression_list = 101,          /* expression_list  */
  YYSYMBOL_expression = 102,               /* expression  */
  YYSYMBOL_expr = 103,                     /* expr  */
  YYSYMBOL_term = 104,                     /* term  */
  YYSYMBOL_if_stmt = 105,                  /* if_stmt  */
  YYSYMBOL_else_clause = 106,              /* else_clause  */
  YYSYMBOL_repeat_stmt = 107,              /* repeat_stmt  */
  YYSYMBOL_while_stmt = 108,               /* while_stmt  */
  YYSYMBOL_for_stmt = 109,                 /* for_stmt  */
  YYSYMBOL_direction = 110,                /* direction  */
  YYSYMBOL_case_stmt = 111,                /* case_stmt  */
  YYSYMBOL_case_expr_list = 112,           /* case_expr_list  */
  YYSYMBOL_case_expr = 113,                /* case_expr  */
  YYSYMBOL_goto_stmt = 114,                /* goto_stmt  */
  YYSYMBOL_factor = 115,                   /* factor  */
  YYSYMBOL_args_list = 116                 /* args_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   405

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   128,   128,   131,   134,   137,   140,   144,   145,   148,
     149,   152,   153,   154,   155,   168,   169,   173,   174,   178,
     182,   183,   184,   187,   199,   200,   201,   202,   203,   204,
     207,   210,   214,   215,   218,   222,   223,   227,   228,   232,
     233,   236,   240,   241,   242,   243,   244,   247,   250,   253,
     256,   260,   261,   265,   266,   270,   271,   274,   277,   280,
     283,   286,   289,   290,   294,   295,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   311,   312,   313,   317,   318,
     319,   320,   321,   325,   326,   330,   331,   332,   333,   334,
     335,   336,   340,   341,   342,   343,   347,   348,   349,   350,
     351,   354,   358,   359,   362,   365,   369,   373,   374,   377,
     381,   382,   386,   387,   390,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   406,   407
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ASSIGN", "LP", "RP",
  "LB", "RB", "DOT", "COMMA", "COLON", "SEMI", "ARRAY", "BEGIN",
  "SYS_TYPE", "CONST", "END", "FUNCTION", "PROGRAM", "PROCEDURE", "RECORD",
  "VAR", "TYPE", "EQUAL", "UNEQUAL", "GE", "GT", "LE", "LT", "AND", "OR",
  "NOT", "PLUS", "MINUS", "MUL", "DIV", "DIVI", "MOD", "DOTDOT",
  "IDENTIFIER", "INTEGER", "REAL", "CHAR", "STRING", "SYS_CON", "READ",
  "SYS_PROC", "SYS_FUNCT", "DOWNTO", "DO", "REPEAT", "TO", "THEN", "WHILE",
  "UNTIL", "FOR", "IF", "ELSE", "CASE", "OF", "GOTO", "$accept", "ID",
  "program", "program_head", "routine", "routine_head", "const_part",
  "const_expr_list", "const_value", "type_part", "type_decl_list",
  "type_definition", "type_decl", "simple_type_decl", "array_type_decl",
  "record_type_decl", "field_decl_list", "field_decl", "name_list",
  "var_part", "var_decl_list", "var_decl", "routine_part", "function_decl",
  "function_head", "procedure_decl", "procedure_head", "parameters",
  "para_decl_list", "para_type_list", "var_para_list", "val_para_list",
  "sub_routine", "routine_body", "compound_stmt", "stmt_list", "stmt",
  "non_label_stmt", "assign_stmt", "proc_stmt", "expression_list",
  "expression", "expr", "term", "if_stmt", "else_clause", "repeat_stmt",
  "while_stmt", "for_stmt", "direction", "case_stmt", "case_expr_list",
  "case_expr", "goto_stmt", "factor", "args_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
#endif

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -33,    58,    57,    64,  -149,    48,    82,    79,    76,
    -149,  -149,    73,    48,  -149,  -149,  -149,  -149,    48,    80,
     235,    85,   122,    87,    48,  -149,    48,    25,  -149,  -149,
    -149,  -149,   107,   235,  -149,   109,   118,   128,  -149,    -1,
      48,    -1,    -1,   100,   195,  -149,   131,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,   281,  -149,  -149,    27,
      48,  -149,    48,    48,    25,  -149,   132,  -149,   135,  -149,
     139,   253,    -1,    -1,   205,    -1,    -1,    -1,   148,    17,
    -149,   315,    37,   129,  -149,   150,    54,    36,  -149,    -1,
      -1,    -1,    48,  -149,    48,   149,  -149,    48,   235,   121,
     133,   158,  -149,  -149,  -149,    48,   281,  -149,   156,   156,
    -149,  -149,    57,    57,  -149,  -149,   169,     4,   365,    -1,
     331,  -149,  -149,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,   361,   365,   365,    24,   353,   167,    26,
     293,   -12,  -149,    74,   138,    48,   235,  -149,  -149,   168,
     -11,   171,  -149,    79,   172,   174,  -149,  -149,    -1,   365,
    -149,    40,    46,   359,  -149,    37,    37,    37,    37,    37,
      37,  -149,   129,   129,   129,  -149,  -149,  -149,  -149,   165,
     147,   186,   196,   170,  -149,  -149,    -1,   204,    -1,  -149,
     208,  -149,  -149,   281,    84,  -149,  -149,  -149,    48,   211,
       3,  -149,   207,   213,   293,  -149,  -149,  -149,   365,  -149,
    -149,  -149,  -149,  -149,    -1,   228,  -149,   228,   228,  -149,
    -149,   365,    -1,   365,   166,   215,   235,  -149,   211,  -149,
     -11,   293,   293,  -149,   321,  -149,   218,   220,   365,   281,
    -149,  -149,  -149,  -149,  -149,   228,  -149,  -149,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     8,     0,     1,     0,     0,     0,    16,
       4,     2,     0,     7,     3,    63,     5,    60,     0,    38,
       0,     0,     0,     0,    15,    18,     0,    46,    11,    12,
      13,    14,     0,     0,    61,     0,     0,    80,    63,     0,
       0,     0,     0,     0,    78,    68,     0,    65,    66,    67,
      69,    70,    71,    72,    73,    74,     0,    17,    36,     0,
      37,    40,     0,     0,     6,    44,     0,    45,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   115,
     119,     0,    91,    95,   100,     0,     0,     0,   114,     0,
       0,     0,     0,    62,     0,     0,    23,     0,     0,    24,
       0,     0,    20,    21,    22,     0,     0,    39,    52,    52,
      42,    43,     8,     8,     9,    64,     0,     0,    84,     0,
       0,   121,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,   126,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,    19,    35,     0,
       0,     0,    50,     0,     0,     0,    82,    81,     0,   104,
     120,     0,     0,     0,   124,    89,    90,    85,    86,    87,
      88,   105,    94,    92,    93,    99,    96,    97,    98,     0,
     103,     0,     0,     0,   111,    79,     0,     0,     0,    25,
       0,    31,    32,     0,     0,    29,    26,    41,     0,    58,
       0,    54,     0,     0,     0,    59,    47,    49,    83,   118,
     116,   123,   108,   107,     0,     0,   101,     0,     0,   109,
     110,   125,     0,    77,     0,     0,     0,    27,    57,    51,
       0,     0,     0,    48,     0,   102,     0,     0,    76,     0,
      34,    28,    53,    55,    56,     0,   113,   112,    30,   106
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,    -6,  -149,  -149,  -149,   221,  -149,  -149,    -9,  -149,
    -149,   214,  -101,  -148,  -149,  -149,  -149,    86,   -75,  -149,
    -149,   179,  -149,   178,  -149,   182,  -149,   143,  -149,     7,
    -149,  -149,   140,    91,    -7,   210,  -116,   191,  -149,  -149,
    -149,    32,   267,    -5,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,    77,  -149,   -24,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    79,     2,     3,     7,   163,     9,    13,    80,    19,
      24,    25,   101,   102,   103,   104,   151,   152,    59,    27,
      60,    61,    64,    65,    66,    67,    68,   161,   210,   211,
     212,   213,   164,    16,    45,    22,    46,    47,    48,    49,
     117,   145,    82,    83,    50,   226,    51,    52,    53,   224,
      54,   193,   194,    55,    84,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    17,   200,    75,   201,   159,     4,    21,   239,   167,
     208,    32,    23,   168,   240,     1,    44,   181,    23,   149,
      58,   124,   153,   125,    70,   126,   190,    11,    11,   195,
      76,   199,    77,   196,    85,   105,   105,   106,    11,    28,
      29,    30,    62,    31,    63,   219,    78,   100,   116,   196,
      99,   220,   121,   122,    58,   196,   108,   109,     5,   127,
     128,   129,   130,   131,   132,    44,   243,   134,    44,   135,
     136,    81,     6,    86,    87,    10,   153,   127,   128,   129,
     130,   131,   132,   105,   203,   209,   148,    11,    58,   154,
      14,    58,    15,   253,   254,   143,    20,   100,    18,   158,
      99,    26,   235,   171,   172,   118,   142,   120,    33,   245,
      56,   246,   247,   185,   186,   187,   188,   236,    69,    71,
     174,   144,    72,   147,    28,    29,    30,    44,    31,   182,
     183,   184,    73,   238,   192,    15,    44,   191,    34,   259,
      88,   100,    93,   112,    99,    58,   113,   206,   258,   205,
     114,   169,   123,   141,    58,   150,    17,   173,   137,   155,
     160,    11,    35,   138,   139,   209,   140,    36,    37,   157,
     198,   156,    38,   189,   166,    39,   204,    40,    41,   207,
      42,   214,    43,   216,   192,   217,   229,   191,   127,   128,
     129,   130,   131,   132,   100,   237,   227,    99,    89,    90,
     218,    91,    58,    92,   225,   100,   228,   232,    99,    11,
      28,    29,    30,   222,    31,   234,   223,   241,    15,    44,
     105,    44,    44,   242,     8,   249,   250,   251,   231,   256,
     233,   257,   100,   100,    58,    99,    99,   202,    57,   107,
     100,    15,   110,    99,    11,    35,   111,   252,    74,    44,
      36,    37,   162,   165,   215,    38,   244,     0,    39,   119,
      40,    41,   115,    42,   248,    43,    15,    11,    35,     0,
     230,     0,     0,    36,    37,    28,    29,    30,    38,    31,
       0,    39,     0,    40,    41,    94,    42,     0,    43,     0,
       0,     0,    11,    95,     0,    96,     0,    94,    36,    37,
       0,    97,     0,    38,     0,     0,    39,    96,    40,    41,
       0,    42,     0,    43,    98,     0,     0,     0,     0,     0,
      11,    28,    29,    30,     0,    31,    98,     0,     0,     0,
       0,     0,    11,    28,    29,    30,   170,    31,   127,   128,
     129,   130,   131,   132,   127,   128,   129,   130,   131,   132,
       0,     0,     0,     0,   127,   128,   129,   130,   131,   132,
     197,     0,     0,     0,   133,     0,   221,     0,     0,     0,
     255,     0,     0,     0,     0,     0,   127,   128,   129,   130,
     131,   132,   127,   128,   129,   130,   131,   132,   127,   128,
     129,   130,   131,   132,   175,   176,   177,   178,   179,   180,
      11,    28,    29,    30,     0,    31
};

static const yytype_int16 yycheck[] =
{
       6,     8,   150,     4,    16,   106,    39,    13,     5,     5,
      21,    20,    18,     9,    11,    18,    22,   133,    24,    94,
      26,     4,    97,     6,    33,     8,   142,    39,    39,     5,
      31,     5,    33,     9,    40,     9,     9,    10,    39,    40,
      41,    42,    17,    44,    19,     5,    47,    56,    72,     9,
      56,     5,    76,    77,    60,     9,    62,    63,     0,    23,
      24,    25,    26,    27,    28,    71,   214,    30,    74,    32,
      33,    39,    15,    41,    42,    11,   151,    23,    24,    25,
      26,    27,    28,     9,    10,   160,    92,    39,    94,    98,
       8,    97,    13,   241,   242,    59,    23,   106,    22,   105,
     106,    21,   203,   123,   124,    73,    52,    75,    23,   225,
      23,   227,   228,   137,   138,   139,   140,    33,    11,    10,
     126,    89,     4,    91,    40,    41,    42,   133,    44,   134,
     135,   136,     4,   208,   143,    13,   142,   143,    16,   255,
      40,   150,    11,    11,   150,   151,    11,   156,   249,   155,
      11,   119,     4,     3,   160,     6,   163,   125,    29,    38,
       4,    39,    40,    34,    35,   240,    37,    45,    46,    11,
       3,    38,    50,   141,     5,    53,    38,    55,    56,    11,
      58,    10,    60,    11,   193,    11,    16,   193,    23,    24,
      25,    26,    27,    28,   203,   204,    10,   203,     3,     4,
     168,     6,   208,     8,    57,   214,    10,     3,   214,    39,
      40,    41,    42,    48,    44,     7,    51,    10,    13,   225,
       9,   227,   228,    10,     3,    59,    11,   236,   196,    11,
     198,    11,   241,   242,   240,   241,   242,   151,    24,    60,
     249,    13,    64,   249,    39,    40,    64,   240,    38,   255,
      45,    46,   109,   113,   163,    50,   224,    -1,    53,    54,
      55,    56,    71,    58,   232,    60,    13,    39,    40,    -1,
     193,    -1,    -1,    45,    46,    40,    41,    42,    50,    44,
      -1,    53,    -1,    55,    56,     4,    58,    -1,    60,    -1,
      -1,    -1,    39,    12,    -1,    14,    -1,     4,    45,    46,
      -1,    20,    -1,    50,    -1,    -1,    53,    14,    55,    56,
      -1,    58,    -1,    60,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    -1,    44,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,     5,    44,    23,    24,
      25,    26,    27,    28,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
       7,    -1,    -1,    -1,    49,    -1,     7,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    23,    24,    25,    26,    27,    28,    23,    24,
      25,    26,    27,    28,   127,   128,   129,   130,   131,   132,
      39,    40,    41,    42,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    63,    64,    39,     0,    15,    65,    66,    67,
      11,    39,    62,    68,     8,    13,    94,    95,    22,    70,
      23,    62,    96,    62,    71,    72,    21,    80,    40,    41,
      42,    44,    69,    23,    16,    40,    45,    46,    50,    53,
      55,    56,    58,    60,    62,    95,    97,    98,    99,   100,
     105,   107,   108,   109,   111,   114,    23,    72,    62,    79,
      81,    82,    17,    19,    83,    84,    85,    86,    87,    11,
      69,    10,     4,     4,    96,     4,    31,    33,    47,    62,
      69,   102,   103,   104,   115,    62,   102,   102,    40,     3,
       4,     6,     8,    11,     4,    12,    14,    20,    33,    62,
      69,    73,    74,    75,    76,     9,    10,    82,    62,    62,
      84,    86,    11,    11,    11,    98,   115,   101,   102,    54,
     102,   115,   115,     4,     4,     6,     8,    23,    24,    25,
      26,    27,    28,    49,    30,    32,    33,    29,    34,    35,
      37,     3,    52,    59,   102,   102,   116,   102,    62,    79,
       6,    77,    78,    79,    69,    38,    38,    11,    62,    73,
       4,    88,    88,    66,    93,    93,     5,     5,     9,   102,
       5,   116,   116,   102,    62,   103,   103,   103,   103,   103,
     103,    97,   104,   104,   104,   115,   115,   115,   115,   102,
      97,    62,    69,   112,   113,     5,     9,     7,     3,     5,
      74,    16,    78,    10,    38,    62,    69,    11,    21,    79,
      89,    90,    91,    92,    10,    94,    11,    11,   102,     5,
       5,     7,    48,    51,   110,    57,   106,    10,    10,    16,
     113,   102,     3,   102,     7,    73,    33,    69,    79,     5,
      11,    10,    10,    74,   102,    97,    97,    97,   102,    59,
      11,    69,    90,    74,    74,    49,    11,    11,    73,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    64,    65,    66,    67,    67,    68,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    72,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      75,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    83,    83,    83,    83,    83,    84,    85,    86,
      87,    88,    88,    89,    89,    90,    90,    91,    92,    93,
      94,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,    99,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   105,   106,   106,   107,   108,   109,   110,   110,   111,
     112,   112,   113,   113,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     3,     2,     4,     2,     0,     5,
       4,     1,     1,     1,     1,     2,     0,     2,     1,     4,
       1,     1,     1,     1,     1,     3,     3,     4,     5,     3,
       6,     3,     2,     1,     4,     3,     1,     2,     0,     2,
       1,     4,     2,     2,     1,     1,     0,     4,     5,     4,
       3,     3,     0,     3,     1,     3,     3,     2,     1,     2,
       1,     3,     3,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     6,     5,     1,     4,
       1,     4,     4,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     5,     2,     0,     4,     4,     8,     1,     1,     5,
       2,     1,     4,     4,     2,     1,     4,     1,     4,     1,
       3,     2,     2,     4,     3,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* ID: IDENTIFIER  */
#line 128 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.identifier) = new Identifier((yyvsp[0].Sval)); }
#line 1633 "y.tab.c"
    break;

  case 3: /* program: program_head routine DOT  */
#line 131 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.program) = new Program((yyvsp[-2].Sval), (yyvsp[-1].routine)); root = (yyval.program); }
#line 1639 "y.tab.c"
    break;

  case 4: /* program_head: PROGRAM IDENTIFIER SEMI  */
#line 134 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.Sval) = (yyvsp[-1].Sval); }
#line 1645 "y.tab.c"
    break;

  case 5: /* routine: routine_head routine_body  */
#line 137 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routine) = (yyvsp[-1].routine); (yyval.routine)->setRoutineBody((yyvsp[0].compoundStatement)); }
#line 1651 "y.tab.c"
    break;

  case 6: /* routine_head: const_part type_part var_part routine_part  */
#line 140 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routine) = new Routine((yyvsp[-3].constDeclList), (yyvsp[-2].typeDeclList), (yyvsp[-1].varDeclList), (yyvsp[0].routineList)); }
#line 1657 "y.tab.c"
    break;

  case 7: /* const_part: CONST const_expr_list  */
#line 144 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.constDeclList) = (yyvsp[0].constDeclList); }
#line 1663 "y.tab.c"
    break;

  case 8: /* const_part: %empty  */
#line 145 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.constDeclList) = new ConstDeclList(); }
#line 1669 "y.tab.c"
    break;

  case 9: /* const_expr_list: const_expr_list ID EQUAL const_value SEMI  */
#line 148 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.constDeclList) = (yyvsp[-4].constDeclList); (yyval.constDeclList)->push_back(new ConstDeclaration((yyvsp[-3].identifier), (yyvsp[-1].constValue))); }
#line 1675 "y.tab.c"
    break;

  case 10: /* const_expr_list: ID EQUAL const_value SEMI  */
#line 149 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.constDeclList) = new ConstDeclList(); (yyval.constDeclList)->push_back(new ConstDeclaration((yyvsp[-3].identifier), (yyvsp[-1].constValue))); }
#line 1681 "y.tab.c"
    break;

  case 11: /* const_value: INTEGER  */
#line 152 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.constValue) = new Integer((yyvsp[0].Ival)); }
#line 1687 "y.tab.c"
    break;

  case 12: /* const_value: REAL  */
#line 153 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.constValue) = new Real((yyvsp[0].Rval)); }
#line 1693 "y.tab.c"
    break;

  case 13: /* const_value: CHAR  */
#line 154 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.constValue) = new Char((yyvsp[0].Cval)); }
#line 1699 "y.tab.c"
    break;

  case 14: /* const_value: SYS_CON  */
#line 155 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     {
                                                                        if(*(yyvsp[0].Sval) == "true")
                                                                            (yyval.constValue) = new Boolean(true);
                                                                        else if(*(yyvsp[0].Sval) == "false")
                                                                            (yyval.constValue) = new Boolean(false);
                                                                        else if(*(yyvsp[0].Sval) == "maxint")
                                                                            (yyval.constValue) = new Integer(32767);
                                                                        else
                                                                            (yyval.constValue) = new Integer(0x7FFFFFFF);
                                                                     }
#line 1714 "y.tab.c"
    break;

  case 15: /* type_part: TYPE type_decl_list  */
#line 168 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.typeDeclList) = (yyvsp[0].typeDeclList); }
#line 1720 "y.tab.c"
    break;

  case 16: /* type_part: %empty  */
#line 169 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.typeDeclList) = new TypeDeclList(); }
#line 1726 "y.tab.c"
    break;

  case 17: /* type_decl_list: type_decl_list type_definition  */
#line 173 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.typeDeclList) = (yyvsp[-1].typeDeclList); (yyval.typeDeclList)->push_back((yyvsp[0].typeDeclaration)); }
#line 1732 "y.tab.c"
    break;

  case 18: /* type_decl_list: type_definition  */
#line 174 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.typeDeclList) = new TypeDeclList(); (yyval.typeDeclList)->push_back((yyvsp[0].typeDeclaration)); }
#line 1738 "y.tab.c"
    break;

  case 19: /* type_definition: ID EQUAL type_decl SEMI  */
#line 178 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.typeDeclaration) = new TypeDeclaration((yyvsp[-3].identifier), (yyvsp[-1].type)); }
#line 1744 "y.tab.c"
    break;

  case 20: /* type_decl: simple_type_decl  */
#line 182 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = (yyvsp[0].type); }
#line 1750 "y.tab.c"
    break;

  case 21: /* type_decl: array_type_decl  */
#line 183 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = (yyvsp[0].type); }
#line 1756 "y.tab.c"
    break;

  case 22: /* type_decl: record_type_decl  */
#line 184 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = (yyvsp[0].type); }
#line 1762 "y.tab.c"
    break;

  case 23: /* simple_type_decl: SYS_TYPE  */
#line 187 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     {
                                                                         if(*(yyvsp[0].Sval) == "integer")
                                                                             (yyval.type) = new AstType(SPL_INTEGER);
                                                                         else if(*(yyvsp[0].Sval) == "boolean")
                                                                             (yyval.type) = new AstType(SPL_BOOLEAN);
                                                                         else if(*(yyvsp[0].Sval) == "real")
                                                                             (yyval.type) = new AstType(SPL_REAL);
                                                                         else if(*(yyvsp[0].Sval) == "char")
                                                                             (yyval.type) = new AstType(SPL_CHAR);
                                                                         else
                                                                             cout << "UNKNOWN SYS_TYPE" << endl;
                                                                     }
#line 1779 "y.tab.c"
    break;

  case 24: /* simple_type_decl: ID  */
#line 199 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.type) = new AstType((yyvsp[0].identifier)); }
#line 1785 "y.tab.c"
    break;

  case 25: /* simple_type_decl: LP name_list RP  */
#line 200 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = new AstType(new EnumType((yyvsp[-1].nameList))); }
#line 1791 "y.tab.c"
    break;

  case 26: /* simple_type_decl: const_value DOTDOT const_value  */
#line 201 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = new AstType(new ConstRangeType((yyvsp[-2].constValue), (yyvsp[0].constValue))); }
#line 1797 "y.tab.c"
    break;

  case 27: /* simple_type_decl: MINUS const_value DOTDOT const_value  */
#line 202 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = new AstType(new ConstRangeType(-*(yyvsp[-2].constValue), (yyvsp[0].constValue))); }
#line 1803 "y.tab.c"
    break;

  case 28: /* simple_type_decl: MINUS const_value DOTDOT MINUS const_value  */
#line 203 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = new AstType(new ConstRangeType(-*(yyvsp[-3].constValue), -*(yyvsp[0].constValue))); }
#line 1809 "y.tab.c"
    break;

  case 29: /* simple_type_decl: ID DOTDOT ID  */
#line 204 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                 { (yyval.type) = new AstType(new EnumRangeType((yyvsp[-2].identifier), (yyvsp[0].identifier))); }
#line 1815 "y.tab.c"
    break;

  case 30: /* array_type_decl: ARRAY LB simple_type_decl RB OF type_decl  */
#line 207 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = new AstType(new AstArrayType((yyvsp[0].type), (yyvsp[-3].type))); }
#line 1821 "y.tab.c"
    break;

  case 31: /* record_type_decl: RECORD field_decl_list END  */
#line 210 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.type) = new AstType(new RecordType((yyvsp[-1].fieldList))); }
#line 1827 "y.tab.c"
    break;

  case 32: /* field_decl_list: field_decl_list field_decl  */
#line 214 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.fieldList) = (yyvsp[-1].fieldList); (yyval.fieldList)->push_back((yyvsp[0].fieldDeclaration)); }
#line 1833 "y.tab.c"
    break;

  case 33: /* field_decl_list: field_decl  */
#line 215 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.fieldList) = new FieldList(); (yyval.fieldList)->push_back((yyvsp[0].fieldDeclaration)); }
#line 1839 "y.tab.c"
    break;

  case 34: /* field_decl: name_list COLON type_decl SEMI  */
#line 218 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.fieldDeclaration) = new FieldDeclaration((yyvsp[-3].nameList), (yyvsp[-1].type)); }
#line 1845 "y.tab.c"
    break;

  case 35: /* name_list: name_list COMMA ID  */
#line 222 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.nameList) = (yyvsp[-2].nameList); (yyval.nameList)->push_back((yyvsp[0].identifier)); }
#line 1851 "y.tab.c"
    break;

  case 36: /* name_list: ID  */
#line 223 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.nameList) = new NameList(); (yyval.nameList)->push_back((yyvsp[0].identifier)); }
#line 1857 "y.tab.c"
    break;

  case 37: /* var_part: VAR var_decl_list  */
#line 227 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.varDeclList) = (yyvsp[0].varDeclList); }
#line 1863 "y.tab.c"
    break;

  case 38: /* var_part: %empty  */
#line 228 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.varDeclList) = new VarDeclList(); }
#line 1869 "y.tab.c"
    break;

  case 39: /* var_decl_list: var_decl_list var_decl  */
#line 232 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.varDeclList) = (yyvsp[-1].varDeclList); (yyval.varDeclList)->push_back((yyvsp[0].varDeclaration)); }
#line 1875 "y.tab.c"
    break;

  case 40: /* var_decl_list: var_decl  */
#line 233 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.varDeclList) = new VarDeclList(); (yyval.varDeclList)->push_back((yyvsp[0].varDeclaration)); }
#line 1881 "y.tab.c"
    break;

  case 41: /* var_decl: name_list COLON type_decl SEMI  */
#line 236 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.varDeclaration) = new VarDeclaration((yyvsp[-3].nameList), (yyvsp[-1].type)); }
#line 1887 "y.tab.c"
    break;

  case 42: /* routine_part: routine_part function_decl  */
#line 240 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routineList) = (yyvsp[-1].routineList); (yyval.routineList)->push_back((yyvsp[0].funcDeclaration)); }
#line 1893 "y.tab.c"
    break;

  case 43: /* routine_part: routine_part procedure_decl  */
#line 241 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routineList) = (yyvsp[-1].routineList); (yyval.routineList)->push_back((yyvsp[0].funcDeclaration)); }
#line 1899 "y.tab.c"
    break;

  case 44: /* routine_part: function_decl  */
#line 242 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routineList) = new RoutineList(); (yyval.routineList)->push_back((yyvsp[0].funcDeclaration)); }
#line 1905 "y.tab.c"
    break;

  case 45: /* routine_part: procedure_decl  */
#line 243 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routineList) = new RoutineList(); (yyval.routineList)->push_back((yyvsp[0].funcDeclaration)); }
#line 1911 "y.tab.c"
    break;

  case 46: /* routine_part: %empty  */
#line 244 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routineList) = new RoutineList(); }
#line 1917 "y.tab.c"
    break;

  case 47: /* function_decl: function_head SEMI sub_routine SEMI  */
#line 247 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.funcDeclaration) = (yyvsp[-3].funcDeclaration); (yyval.funcDeclaration)->setRoutine((yyvsp[-1].routine)); }
#line 1923 "y.tab.c"
    break;

  case 48: /* function_head: FUNCTION ID parameters COLON simple_type_decl  */
#line 250 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.funcDeclaration) = new FuncDeclaration((yyvsp[-3].identifier), (yyvsp[-2].paraList), (yyvsp[0].type)); }
#line 1929 "y.tab.c"
    break;

  case 49: /* procedure_decl: procedure_head SEMI sub_routine SEMI  */
#line 253 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.funcDeclaration) = (yyvsp[-3].funcDeclaration); (yyval.funcDeclaration)->setRoutine((yyvsp[-1].routine)); }
#line 1935 "y.tab.c"
    break;

  case 50: /* procedure_head: PROCEDURE ID parameters  */
#line 256 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.funcDeclaration) = new FuncDeclaration((yyvsp[-1].identifier), (yyvsp[0].paraList)); }
#line 1941 "y.tab.c"
    break;

  case 51: /* parameters: LP para_decl_list RP  */
#line 260 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.paraList) = (yyvsp[-1].paraList); }
#line 1947 "y.tab.c"
    break;

  case 52: /* parameters: %empty  */
#line 261 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.paraList) = new ParaList(); }
#line 1953 "y.tab.c"
    break;

  case 53: /* para_decl_list: para_decl_list SEMI para_type_list  */
#line 265 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.paraList) = (yyvsp[-2].paraList); (yyval.paraList)->push_back((yyvsp[0].parameter)); }
#line 1959 "y.tab.c"
    break;

  case 54: /* para_decl_list: para_type_list  */
#line 266 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.paraList) = new ParaList(); (yyval.paraList)->push_back((yyvsp[0].parameter)); }
#line 1965 "y.tab.c"
    break;

  case 55: /* para_type_list: var_para_list COLON simple_type_decl  */
#line 270 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.parameter) = (yyvsp[-2].parameter), (yyval.parameter)->setType((yyvsp[0].type)); }
#line 1971 "y.tab.c"
    break;

  case 56: /* para_type_list: val_para_list COLON simple_type_decl  */
#line 271 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.parameter) = (yyvsp[-2].parameter), (yyval.parameter)->setType((yyvsp[0].type)); }
#line 1977 "y.tab.c"
    break;

  case 57: /* var_para_list: VAR name_list  */
#line 274 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.parameter) = new Parameter((yyvsp[0].nameList), true); }
#line 1983 "y.tab.c"
    break;

  case 58: /* val_para_list: name_list  */
#line 277 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.parameter) = new Parameter((yyvsp[0].nameList), false); }
#line 1989 "y.tab.c"
    break;

  case 59: /* sub_routine: routine_head routine_body  */
#line 280 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.routine) = (yyvsp[-1].routine); (yyval.routine)->setRoutineBody((yyvsp[0].compoundStatement)); }
#line 1995 "y.tab.c"
    break;

  case 60: /* routine_body: compound_stmt  */
#line 283 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.compoundStatement) = (yyvsp[0].compoundStatement); }
#line 2001 "y.tab.c"
    break;

  case 61: /* compound_stmt: BEGIN stmt_list END  */
#line 286 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.compoundStatement) = new CompoundStatement((yyvsp[-1].statementList)); }
#line 2007 "y.tab.c"
    break;

  case 62: /* stmt_list: stmt_list stmt SEMI  */
#line 289 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statementList) = (yyvsp[-2].statementList); (yyval.statementList)->push_back((yyvsp[-1].statement)); }
#line 2013 "y.tab.c"
    break;

  case 63: /* stmt_list: %empty  */
#line 290 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statementList) = new StatementList(); }
#line 2019 "y.tab.c"
    break;

  case 64: /* stmt: INTEGER COLON non_label_stmt  */
#line 294 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].statement); (yyval.statement)->setLabel((yyvsp[-2].Ival)); }
#line 2025 "y.tab.c"
    break;

  case 65: /* stmt: non_label_stmt  */
#line 295 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].statement); }
#line 2031 "y.tab.c"
    break;

  case 66: /* non_label_stmt: assign_stmt  */
#line 299 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].assignStatement); }
#line 2037 "y.tab.c"
    break;

  case 67: /* non_label_stmt: proc_stmt  */
#line 300 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].statement); }
#line 2043 "y.tab.c"
    break;

  case 68: /* non_label_stmt: compound_stmt  */
#line 301 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].compoundStatement); }
#line 2049 "y.tab.c"
    break;

  case 69: /* non_label_stmt: if_stmt  */
#line 302 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].ifStatement); }
#line 2055 "y.tab.c"
    break;

  case 70: /* non_label_stmt: repeat_stmt  */
#line 303 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].repeatStatement); }
#line 2061 "y.tab.c"
    break;

  case 71: /* non_label_stmt: while_stmt  */
#line 304 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].whileStatement); }
#line 2067 "y.tab.c"
    break;

  case 72: /* non_label_stmt: for_stmt  */
#line 305 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].forStatement); }
#line 2073 "y.tab.c"
    break;

  case 73: /* non_label_stmt: case_stmt  */
#line 306 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].caseStatement); }
#line 2079 "y.tab.c"
    break;

  case 74: /* non_label_stmt: goto_stmt  */
#line 307 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].gotoStatement); }
#line 2085 "y.tab.c"
    break;

  case 75: /* assign_stmt: ID ASSIGN expression  */
#line 311 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.assignStatement) = new AssignStatement((yyvsp[-2].identifier), (yyvsp[0].expression)); }
#line 2091 "y.tab.c"
    break;

  case 76: /* assign_stmt: ID LB expression RB ASSIGN expression  */
#line 312 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.assignStatement) = new AssignStatement((yyvsp[-5].identifier), (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2097 "y.tab.c"
    break;

  case 77: /* assign_stmt: ID DOT ID ASSIGN expression  */
#line 313 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                 { (yyval.assignStatement) = new AssignStatement((yyvsp[-4].identifier), (yyvsp[-2].identifier), (yyvsp[0].expression)); }
#line 2103 "y.tab.c"
    break;

  case 78: /* proc_stmt: ID  */
#line 317 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.statement) = new ProcedureCall((yyvsp[0].identifier)); }
#line 2109 "y.tab.c"
    break;

  case 79: /* proc_stmt: ID LP args_list RP  */
#line 318 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.statement) = new ProcedureCall((yyvsp[-3].identifier), (yyvsp[-1].argsList)); }
#line 2115 "y.tab.c"
    break;

  case 80: /* proc_stmt: SYS_PROC  */
#line 319 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = new SysProcedureCall((yyvsp[0].Sval)); }
#line 2121 "y.tab.c"
    break;

  case 81: /* proc_stmt: SYS_PROC LP expression_list RP  */
#line 320 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = new SysProcedureCall((yyvsp[-3].Sval), (yyvsp[-1].expressionList)); }
#line 2127 "y.tab.c"
    break;

  case 82: /* proc_stmt: READ LP factor RP  */
#line 321 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = new SysProcedureCall((yyvsp[-3].Sval), (yyvsp[-1].expression)); }
#line 2133 "y.tab.c"
    break;

  case 83: /* expression_list: expression_list COMMA expression  */
#line 325 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expressionList) = (yyvsp[-2].expressionList); (yyval.expressionList)->push_back((yyvsp[0].expression)); }
#line 2139 "y.tab.c"
    break;

  case 84: /* expression_list: expression  */
#line 326 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expressionList) = new ExpressionList(); (yyval.expressionList)->push_back((yyvsp[0].expression)); }
#line 2145 "y.tab.c"
    break;

  case 85: /* expression: expression GE expr  */
#line 330 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_GE, (yyvsp[0].expression)); }
#line 2151 "y.tab.c"
    break;

  case 86: /* expression: expression GT expr  */
#line 331 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_GT, (yyvsp[0].expression)); }
#line 2157 "y.tab.c"
    break;

  case 87: /* expression: expression LE expr  */
#line 332 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_LE, (yyvsp[0].expression)); }
#line 2163 "y.tab.c"
    break;

  case 88: /* expression: expression LT expr  */
#line 333 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_LT, (yyvsp[0].expression)); }
#line 2169 "y.tab.c"
    break;

  case 89: /* expression: expression EQUAL expr  */
#line 334 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_EQUAL, (yyvsp[0].expression)); }
#line 2175 "y.tab.c"
    break;

  case 90: /* expression: expression UNEQUAL expr  */
#line 335 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_UNEQUAL, (yyvsp[0].expression)); }
#line 2181 "y.tab.c"
    break;

  case 91: /* expression: expr  */
#line 336 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2187 "y.tab.c"
    break;

  case 92: /* expr: expr PLUS term  */
#line 340 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_PLUS, (yyvsp[0].expression)); }
#line 2193 "y.tab.c"
    break;

  case 93: /* expr: expr MINUS term  */
#line 341 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_MINUS, (yyvsp[0].expression)); }
#line 2199 "y.tab.c"
    break;

  case 94: /* expr: expr OR term  */
#line 342 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_OR, (yyvsp[0].expression)); }
#line 2205 "y.tab.c"
    break;

  case 95: /* expr: term  */
#line 343 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2211 "y.tab.c"
    break;

  case 96: /* term: term MUL factor  */
#line 347 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_MUL, (yyvsp[0].expression)); }
#line 2217 "y.tab.c"
    break;

  case 97: /* term: term DIV factor  */
#line 348 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_DIV, (yyvsp[0].expression)); }
#line 2223 "y.tab.c"
    break;

  case 98: /* term: term MOD factor  */
#line 349 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_MOD, (yyvsp[0].expression)); }
#line 2229 "y.tab.c"
    break;

  case 99: /* term: term AND factor  */
#line 350 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression((yyvsp[-2].expression), BinaryExpression::BinaryOperator::SPL_AND, (yyvsp[0].expression)); }
#line 2235 "y.tab.c"
    break;

  case 100: /* term: factor  */
#line 351 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = (yyvsp[0].expression); }
#line 2241 "y.tab.c"
    break;

  case 101: /* if_stmt: IF expression THEN stmt else_clause  */
#line 354 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.ifStatement) = new IfStatement((yyvsp[-3].expression), (yyvsp[-1].statement), (yyvsp[0].statement)); }
#line 2247 "y.tab.c"
    break;

  case 102: /* else_clause: ELSE stmt  */
#line 358 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = (yyvsp[0].statement); }
#line 2253 "y.tab.c"
    break;

  case 103: /* else_clause: %empty  */
#line 359 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.statement) = nullptr; }
#line 2259 "y.tab.c"
    break;

  case 104: /* repeat_stmt: REPEAT stmt_list UNTIL expression  */
#line 362 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.repeatStatement) = new RepeatStatement((yyvsp[0].expression), (yyvsp[-2].statementList)); }
#line 2265 "y.tab.c"
    break;

  case 105: /* while_stmt: WHILE expression DO stmt  */
#line 365 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.whileStatement) = new WhileStatement((yyvsp[-2].expression), (yyvsp[0].statement)); }
#line 2271 "y.tab.c"
    break;

  case 106: /* for_stmt: FOR ID ASSIGN expression direction expression DO stmt  */
#line 369 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.forStatement) = new ForStatement((yyvsp[-6].identifier), (yyvsp[-4].expression), (yyvsp[-3].bVal), (yyvsp[-2].expression), (yyvsp[0].statement)); }
#line 2277 "y.tab.c"
    break;

  case 107: /* direction: TO  */
#line 373 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.bVal) = true; }
#line 2283 "y.tab.c"
    break;

  case 108: /* direction: DOWNTO  */
#line 374 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.bVal) = false; }
#line 2289 "y.tab.c"
    break;

  case 109: /* case_stmt: CASE expression OF case_expr_list END  */
#line 377 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.caseStatement) = new CaseStatement((yyvsp[-3].expression), (yyvsp[-1].caseExprList));}
#line 2295 "y.tab.c"
    break;

  case 110: /* case_expr_list: case_expr_list case_expr  */
#line 381 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.caseExprList) = (yyvsp[-1].caseExprList); (yyval.caseExprList)->push_back((yyvsp[0].caseExpression)); }
#line 2301 "y.tab.c"
    break;

  case 111: /* case_expr_list: case_expr  */
#line 382 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.caseExprList) = new CaseExprList(); (yyval.caseExprList)->push_back((yyvsp[0].caseExpression)); }
#line 2307 "y.tab.c"
    break;

  case 112: /* case_expr: const_value COLON stmt SEMI  */
#line 386 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.caseExpression) = new CaseExpression((yyvsp[-3].constValue), (yyvsp[-1].statement)); }
#line 2313 "y.tab.c"
    break;

  case 113: /* case_expr: ID COLON stmt SEMI  */
#line 387 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.caseExpression) = new CaseExpression((yyvsp[-3].identifier), (yyvsp[-1].statement)); }
#line 2319 "y.tab.c"
    break;

  case 114: /* goto_stmt: GOTO INTEGER  */
#line 390 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.gotoStatement) = new GotoStatement((yyvsp[0].Ival)); }
#line 2325 "y.tab.c"
    break;

  case 115: /* factor: ID  */
#line 394 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.expression) = (yyvsp[0].identifier); }
#line 2331 "y.tab.c"
    break;

  case 116: /* factor: ID LP args_list RP  */
#line 395 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.expression) = new FunctionCall((yyvsp[-3].identifier), (yyvsp[-1].argsList)); }
#line 2337 "y.tab.c"
    break;

  case 117: /* factor: SYS_FUNCT  */
#line 396 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new SysFunctionCall((yyvsp[0].Sval)); }
#line 2343 "y.tab.c"
    break;

  case 118: /* factor: SYS_FUNCT LP args_list RP  */
#line 397 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new SysFunctionCall((yyvsp[-3].Sval), (yyvsp[-1].argsList)); }
#line 2349 "y.tab.c"
    break;

  case 119: /* factor: const_value  */
#line 398 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = (yyvsp[0].constValue); }
#line 2355 "y.tab.c"
    break;

  case 120: /* factor: LP expression RP  */
#line 399 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = (yyvsp[-1].expression); }
#line 2361 "y.tab.c"
    break;

  case 121: /* factor: NOT factor  */
#line 400 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression(new Boolean(true), BinaryExpression::BinaryOperator::SPL_XOR, (yyvsp[0].expression)); }
#line 2367 "y.tab.c"
    break;

  case 122: /* factor: MINUS factor  */
#line 401 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.expression) = new BinaryExpression(new Integer(0), BinaryExpression::BinaryOperator::SPL_MINUS, (yyvsp[0].expression)); }
#line 2373 "y.tab.c"
    break;

  case 123: /* factor: ID LB expression RB  */
#line 402 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                   { (yyval.expression) = new ArrayReference((yyvsp[-3].identifier), (yyvsp[-1].expression)); }
#line 2379 "y.tab.c"
    break;

  case 124: /* factor: ID DOT ID  */
#line 403 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                 { (yyval.expression) = new RecordReference((yyvsp[-2].identifier), (yyvsp[0].identifier)); }
#line 2385 "y.tab.c"
    break;

  case 125: /* args_list: args_list COMMA expression  */
#line 406 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.argsList) = (yyvsp[-2].argsList); (yyval.argsList)->push_back((yyvsp[0].expression)); }
#line 2391 "y.tab.c"
    break;

  case 126: /* args_list: expression  */
#line 407 "/home/cao/bianyi-1/src/pascal_par.y"
                                                                     { (yyval.argsList) = new ArgsList(); (yyval.argsList)->push_back((yyvsp[0].expression)); }
#line 2397 "y.tab.c"
    break;


#line 2401 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 409 "/home/cao/bianyi-1/src/pascal_par.y"


void yyerror(const char *s) { 
	cout << "Error: " << s << endl; 
	exit(1); 
}
