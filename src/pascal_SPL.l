%{
#include <stdio.h>
#include <string>
#include <y.tab.h>
using namespace std;

%}
DECIMAL_INT	[0-9]+  
sys_type   "boolean"|"char"|"integer"|"real"
sys_funct  "abs"|"chr"|"odd"|"ord"|"pred"|"sqr"|"sqrt"|"succ"
sys_proc   "write"|"writeln" 
sys_con    "false"|"maxint"|"true" 
Identifier [a-zA-Z_][a-zA-Z0-9_]*
DECIMAL_REAL [0-9]+\.[0-9]+ {DECIMAL_INT}
space	     [ \t\r]+

%%
[\n]                                                    {yylineno++}
{space}                                                 { ; }
"("                                                     {  return LP; }
")"                                                     {  return RP; }
"["                                                     {  return LB; }
"]"                                                     {  return RB; }
","                                                     {  return COMMA; }
"."                                                     {  return DOT; }
":"                                                     {  return COLON; }
"*"                                                     {  return MUL; }
"/"                                                     {  return DIV; }
"<>"                                                    {  return UNEQUAL; }
"not"                                                   {  return NOT; }
"and"                                                   {  return AND; }
"array"                                                 {  return ARRAY; }
"begin"                                                 {  return TOKEN_BEGIN; }
"case"                                                  {  return CASE; }
"const"                                                 {  return CONST; }
"div"                                                   {  return DIV; }
"do"                                                    {  return DO; }
"downto"                                                {  return DOWNTO; }
"else"                                                  {  return ELSE; }
"end"                                                   {  return END; }
"for"                                                   {  return FOR; }
"function"                                              {  return FUNCTION; }
"goto"                                                  {  return GOTO; }
"if"                                                    {  return IF; }
"of"                                                    {  return OF; }
"or"                                                    {  return OR; }
"procedure"                                             {  return PROCEDURE; }
"program"                                               {  return PROGRAM; }
"record"                                                {  return RECORD; }
"repeat"                                                {  return REPEAT; }
"then"                                                  {  return THEN; }
"to"                                                    {  return TO; }
"type"                                                  {  return TYPE; }
"until"                                                 {  return UNTIL; }
"var"                                                   {  return VAR; }
"while"                                                 {  return WHILE; }
"+"                                                     {  return PLUS; }
"-"                                                     {  return MINUS; }
">="                                                    {  return GE; }
">"                                                     {  return GT; }
"<="                                                    {  return LE; }
"<"                                                     {  return LT; }
"="                                                     {  return EQUAL; }
":="                                                    {  return ASSIGN; }
"mod"                                                   {  return MOD; }
".."                                                    {  return DOTDOT;}
";"                                                     {  return SEMI; }

{sys_type}                      {
									yylval.Sval = new string(yytext, yyleng); 
									return SYS_TYPE; 
								}
{sys_funct}                     {
									yylval.Sval = new string(yytext, yyleng); 
									return SYS_FUNCT; 
								}
{sys_con}                     	{
									yylval.Sval = new string(yytext, yyleng);  
									return SYS_CON; 
								}
{sys_proc}                      { 
                                    yylval.Sval = new string(yytext, yyleng); 
									return SYS_PROC; 
								}
"read"                          { 
									yylval.Sval = new string(yytext, yyleng); 
									return READ; 
								}
{Identifier}                    { 
									yylval.Sval = new string(yytext, yyleng); 
									return IDENTIFIER; 
								} 
{DECIMAL_REAL}                  { 
                                    string temp(yytext);
                                    yylval.Rval =stod(temp);
                                    return REAL; 					
								}
{DECIMAL_INT}                   {
                                    string temp(yytext);
                                    yylval.Ival =stoi(temp);
                                    return INTEGER; 
								}
%%
void yyerror(const char *s) {
    fprintf(stderr, "LexError: %s (at Line %d, Column%d)\n", s, yylloc.first_line, yylloc.first_column);
}

int yywrap(void)
{
    return 1;
}
