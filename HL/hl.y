    /*
    *  Parser definition for the Homely language (HL) .
    */
%{
    #include <stdio.h>
    #include "AST.h"
    #include "lex.yy.c"

    extern int yylex();         /*  the entry point to the lexer  */
    extern int yylineno;        /* from lexer */
    extern void yyerror(char *s, ...); /*  defined below; called for each parse error */
    extern FILE *yyin;
%}
    /* A union of all the types that can be the result of parsing actions. */
%union {
    struct ASTnode *ast;
    char type_id[33];  //由标识符生成的exp叶子结点
    char type_char;	//由CHAR_CONST生成的exp叶子结点
    int type_int;	  //由INT_CONST生成的exp叶子结点
    float type_float;  //由FLOAT_CONST生成的exp叶子结点
    char type_string[100]; //由STRING_CONST生成的exp叶子结点
}

    /* Declare the terminals */
%token <type_int> NULL_0 "NULL"
%token CHAR "char"
%token INT "int"
%token FLOAT "float"
%token <type_int> BOOLTRUE "true"
%token <type_int> BOOLFALSE "false"
%token IF "if"
    //%token THEN "then"
%token ELSE "else"
%token WHILE "while"
%token CONTINUE "continue"
%token BREAK "break"
%token RETURN "return"
%token READ "read"
%token WRITE "write"
%token <type_id> ID
%token <type_char> CHAR_CONST
%token <type_string> STRING_CONST
%token <type_int> INT_CONST
%token <type_float> FLOAT_CONST
%token '{' '}' '(' ')' '[' ']' '*' '/' '%' '+' '-' '>' '<' '?' ':' '='
%token SELFADD "++" 
%token SELFSUB "--"
%token SHIFTLEFT "<<"
%token SHIFTRIGHT ">>"
%token GE ">="
%token LE "<="
%token EQUAL "=="
%token NOTEQUAL "!="
%token LOGICALAND "&&"
%token LOGICALOR "||"
%token ADDASSIGN "+="
%token SUBASSIGN "-="
%token MULASSIGN "*="
%token DIVASSIGN "/="
%token MODASSIGN "%="
%token ANDASSIGN "&="
%token XORASSIGN "^="
%token ORASSIGN "|="
%token SHIFTLEFTASSIGN "<<="
%token SHHIFTRIGHTASSIGN ">>="


/* Precedence declarations go here. */
%left ADDASSIGN SUBASSIGN MULASSIGN DIVASSIGN MODASSIGN ANDASSIGN XORASSIGN ORASSIGN SHIFTLEFTASSIGN SHHIFTRIGHTASSIGN
%right '?' ':'
%left LOGICALOR
%left LOGICALAND
%left '|'
%left '^'
%left '&'
%left EQUAL NOTEQUAL
%left '<' LE GE '>'
%left SHIFTLEFT SHIFTRIGHT
%left '+' '-'
%left '*' '/' '%'
%right '!' '~' UMINUS SELFADD SELFSUB
%left '(' ')' '[' ']'
/* Declare types for the grammar's non-terminals. */
%type <ast> program
%type <ast> stmt
%type <ast> decl
%type <ast> decls
%type <ast> stmts
%type <ast> exp

%start program
%%
program: INT ID '(' ')' '{' stmts '}' {ASTnode* temp = newAST('D', $2, NULL, NULL, NULL); $$=newAST('N', "program", temp, $6, NULL); displayAST($$,0);treefree($$);}
       | error                        {printf("error program\n");} 
       ;
stmts:                                {$$=newAST('N', "empyt stmts", NULL, NULL, NULL);}
     |decls stmts                     {$$=newAST('N', "decls stmts", $1, $2, NULL);}
     |stmt stmts                      {$$=newAST('N', "stmt stmts", $1, $2, NULL);}
     ;
decls:                                {$$=newAST('N', "empyt decls", NULL, NULL, NULL);}  
     |decl decls                      {$$=newAST('N', "decl decls", $1, $2, NULL);}
     ;
decl:CHAR ID ';'                      {ASTnode* temp=newAST('D', $2, NULL, NULL, NULL);$$=newAST('N', "char ID ;",temp, NULL, NULL);}
    |CHAR ID '=' exp ';'              {ASTnode* temp=newAST('D', $2, NULL, NULL, NULL);$$=newAST('N', "char ID = exp ;",temp, $4, NULL);}
    |INT ID ';'                       {ASTnode* temp=newAST('D', $2, NULL, NULL, NULL);$$=newAST('N', "int ID ;", temp, NULL, NULL);} 
    |INT ID '=' exp ';'               {ASTnode* temp=newAST('D', $2, NULL, NULL, NULL);$$=newAST('N', "int ID = exp ;",temp, $4, NULL);}
    |FLOAT ID ';'                     {ASTnode* temp=newAST('D', $2, NULL, NULL, NULL);$$=newAST('N', "float ID ;", temp, NULL, NULL);}                 
    |FLOAT ID '=' exp ';'             {ASTnode* temp=newAST('D', $2, NULL, NULL, NULL);$$=newAST('N', "float ID = exp ;",temp, $4, NULL);}
    ;
stmt:                                 {$$=newAST('N', "empyt stmt ;", NULL, NULL, NULL);}  
    |';'                              {$$=newAST('N', "empyt stmt ;", NULL, NULL, NULL);}
    |'{' stmts '}'                    {$$=newAST('N', "{ stmts }", $2, NULL, NULL);}
    |exp ';'                          {$$=newAST('N', "exp ;", $1, NULL, NULL);}
    |IF '(' exp ')' stmt              {$$=newAST('N', "if ;", $3, $5, NULL);}
    |IF '(' exp ')' stmt ELSE stmt    {$$=newAST('N', "if-else ;", $3, $5, $7);}
    |WHILE '(' exp ')' stmt           {$$=newAST('N', "while ;", $3, $5, NULL);}
    |CONTINUE ';'                     {$$=newAST('N', "continue ;", NULL, NULL, NULL);}
    |BREAK ';'                        {$$=newAST('N', "break ;", NULL, NULL, NULL);}
    |RETURN exp';'                    {$$=newAST('N', "return exp ;", $2, NULL, NULL);}
    |READ '(' exp ',' exp ')' ';'     {$$=newAST('N', "read()", $3, $5, NULL);}
    |WRITE '(' exp ',' exp ')' ';'    {$$=newAST('N', "write()", $3, $5, NULL);}
    |error ';'                        {$$=NULL; yyerror("error stmt at line %d\n",yylineno);}
    ;
exp:'(' exp ')'                       {$$=newAST('E', "(exp)", $2, NULL, NULL);}    
   |'(' INT ')' exp                   {$$=newAST('E', "(int)exp", $4, NULL, NULL);}
   |'(' CHAR ')' exp                  {$$=newAST('E', "(char)exp", $4, NULL, NULL);}
   |'(' FLOAT ')' exp                 {$$=newAST('E', "(float)exp", $4, NULL, NULL);}
   |CHAR_CONST                        {$$=newAST('C', &($1), NULL, NULL, NULL);}
   |STRING_CONST                      {$$=newAST('S', $1, NULL, NULL, NULL);}
   |INT_CONST                         {$$=newAST('I', &($1), NULL, NULL, NULL);}
   |FLOAT_CONST                       {$$=newAST('F', &($1), NULL, NULL, NULL);}
   |BOOLTRUE                          {$$=newAST('I', &($1), NULL, NULL, NULL);}
   |BOOLFALSE                         {$$=newAST('I', &($1), NULL, NULL, NULL);}
   |NULL_0                            {$$=newAST('I', &($1), NULL, NULL, NULL);}
   |ID                                {$$=newAST('D', $1, NULL, NULL, NULL);}
   |ID '[' exp ']'                    {ASTnode* temp = newAST('D', $1, NULL, NULL, NULL); $$=newAST('N', "array", temp, $3, NULL);}
   |'!' exp                           {$$=newAST('E', "! exp", $2, NULL, NULL);}
   |'~' exp                           {$$=newAST('E', "~ exp", $2, NULL, NULL);}
   |'-' exp %prec UMINUS              {$$=newAST('E', "- exp", $2, NULL, NULL);}
   |'+' exp                           {$$=newAST('E', "+ exp", $2, NULL, NULL);}
   |"++" exp                          {$$=newAST('E', "++ exp", $2, NULL, NULL);}
   |"--" exp                          {$$=newAST('E', "-- exp", $2, NULL, NULL);}
   |exp "++"                          {$$=newAST('E', "exp ++", $1, NULL, NULL);}
   |exp "--"                          {$$=newAST('E', "exp --", $1, NULL, NULL);}
   |exp '*' exp                       {$$=newAST('E', "*", $1, $3, NULL);}
   |exp '/' exp                       {$$=newAST('E', "/", $1, $3, NULL);}
   |exp '%' exp                       {$$=newAST('E', "%", $1, $3, NULL);}
   |exp '+' exp                       {$$=newAST('E', "+", $1, $3, NULL);}  
   |exp '-' exp                       {$$=newAST('E', "-", $1, $3, NULL);}
   |exp "<<" exp                      {$$=newAST('E', "<<", $1, $3, NULL);}
   |exp ">>" exp                      {$$=newAST('E', ">>", $1, $3, NULL);}
   |exp '<' exp                       {$$=newAST('E', "<", $1, $3, NULL);}
   |exp "<=" exp                      {$$=newAST('E', "<=", $1, $3, NULL);}
   |exp '>' exp                       {$$=newAST('E', ">", $1, $3, NULL);}
   |exp ">=" exp                      {$$=newAST('E', ">=", $1, $3, NULL);}
   |exp "==" exp                      {$$=newAST('E', "==", $1, $3, NULL);}
   |exp "!=" exp                      {$$=newAST('E', "!=", $1, $3, NULL);}
   |exp '&' exp                       {$$=newAST('E', "&", $1, $3, NULL);}
   |exp '^' exp                       {$$=newAST('E', "^", $1, $3, NULL);}
   |exp '|' exp                       {$$=newAST('E', "|", $1, $3, NULL);}
   |exp "&&" exp                      {$$=newAST('E', "&&", $1, $3, NULL);}
   |exp "||" exp                      {$$=newAST('E', "||", $1, $3, NULL);}
   |exp '?' exp ':' exp               {$$=newAST('E', " ? : ", $1, $3, $5);}
   |exp '=' exp                       {$$=newAST('E', "=", $1, $3, NULL);}
   |exp "+=" exp                      {$$=newAST('E', "+=", $1, $3, NULL);}
   |exp "-=" exp                      {$$=newAST('E', "-=", $1, $3, NULL);}               
   |exp "*=" exp                      {$$=newAST('E', "*=", $1, $3, NULL);}
   |exp "/=" exp                      {$$=newAST('E', "/=", $1, $3, NULL);}
   |exp "%=" exp                      {$$=newAST('E', "%=", $1, $3, NULL);}
   |exp "&=" exp                      {$$=newAST('E', "&=", $1, $3, NULL);}
   |exp "^=" exp                      {$$=newAST('E', "^=", $1, $3, NULL);}
   |exp "|=" exp                      {$$=newAST('E', "|=", $1, $3, NULL);}
   |exp "<<=" exp                     {$$=newAST('E', "<<=", $1, $3, NULL);}
   |exp ">>=" exp                     {$$=newAST('E', ">>=", $1, $3, NULL);}
   ;

%%
/* This function is called automatically when Bison detects a parse error. */

int main(int argc, char *argv[])
{
	yyin=fopen(argv[1],"r");
	if (!yyin) return 1;
	yyparse();
	return 0;
}
	
void yyerror(char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}