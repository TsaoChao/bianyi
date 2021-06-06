%{
	#include <stdio.h>
	#include <ctype.h>
	#include "lex.yy.h"
%}

%token DOT		// .
%token PROGRAM
%token ID		// 函数名 变量名
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