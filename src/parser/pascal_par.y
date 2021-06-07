%{
	#include <stdio.h>
	#include <ctype.h>
	#include "lex.yy.h"
%}

%token DOT		// .
%token PROGRAM
%token ID		// 变量、函数名
%token SEMI		// ;
%token CONST
%token NAME		// 常数名 类型
%token EQUAL	// =
%token INTEGER	// 123
%token REAL		// 123.123
%token CHAR		// 'c'
%token STRING	// "abc"
%token SYS_CON  // see doc
%token TYPE
%token LP		// (
%token RP		// )
%token LB		// [
%token RB		// ]
%token DOTDOT	// ..
%token SYS_TYPE // see doc
%token ARRAY
%token OF
%token RECORD
%token COMMA	// ,
%token COLON	// :
%token ASSIGN	// :=
%token BEGIN2
%token END
%token SYS_PROC // see doc
%token READ
%token IF
%token THEN
%token ELSE
%token REPEAT
%token UNTIL
%token FOR
%token DO
%token TO
%token DOWNTO
%token CASE
%token GOTO
%token GE		// >=
%token GT		// >
%token LE		// <=
%token LT		// <
%token UNEQUAL	// <>
%token PLUS		// +
%token MINUS	// -
%token MUL		// *
%token MOD
%token DIV
%token OR
%token AND
%token SYS_FUNCT// see doc
%token VAR		
%token FUNCTION
%token PROCEDURE
%token WHILE
%token NOT
%token LABEL
%%
%nonassoc TK_IF TK_ELSE
%token TK_INT TK_CHAR TK_FLOAT TK_DOUBLE TK_LONG TK_SHORT TK_SIGNED TK_UNSIGNED TK_VOID
%token TK_RETURN
%token TK_WHILE TK_FOR
%token TK_BREAK
%token ENDIF
                      
%token TK_ID
%token TK_SC TK_CMA TK_LRB TK_LCB TK_RCB TK_LSB TK_RSB
%nonassoc TK_RRB

%token integer_constant string_constant float_constant character_constant

%right leftshift_assignment_operator rightshift_assignment_operator
%right XOR_assignment_operator OR_assignment_operator
%right AND_assignment_operator modulo_assignment_operator
%right multiplication_assignment_operator division_assignment_operator
%right addition_assignment_operator subtraction_assignment_operator
%right assignment_operator

%left OR_operator
%left AND_operator
%left pipe_operator
%left caret_operator
%left amp_operator
%left equality_operator inequality_operator
%left lessthan_assignment_operator lessthan_operator greaterthan_assignment_operator greaterthan_operator
%left leftshift_operator rightshift_operator 
%left add_operator subtract_operator
%left multiplication_operator division_operator modulo_operator

%right SIZEOF
%right tilde_operator exclamation_operator
%left increment_operator decrement_operator 