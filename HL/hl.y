    /*
    *  Parser definition for the Homely language (HL) .
    */
%{
    #include "stdio.h"
    #include "AST.h"
    #include "lex.yy.c"

    extern int yylex();           /*  the entry point to the lexer  */
    void yyerror(char *s);        /*  defined below; called for each parse error */
        
%}
    
    /* A union of all the types that can be the result of parsing actions. */
%union {
    Exp expression;
}

    /* Declare the terminals */
%token CHAR "char"
%token INT "int"
%token FLOAT "float"
%token BOOLTRUE "true"
%token BOOLFALSE "false"
%token IF "if"
%token THEN "then"
%token ELSE "else"
%token WHILE "while"
%token CONTINUE "continue"
%token BREAK "break"
%token RETURN "return"
%token ID
%token CHAR_CONST
%token INT_CONST
%token FLOAT_CONST
%token '(' ')' '[' ']' '*' '/' '%' '+' '-' '>' '<' '='
%token SELFADD "++" 
%token SELFSUB "--"
%token GE ">="
%token LE "<="
%token EQUAL "=="
%token NOTEQUAL "!="
%token ADDASSIGN "+="
%token SUBASSIGN "-="
%token MULASSIGN "*="
%token DIVSASSIGN "/="
%token ERROR
%token ENDOFFILE

/* Declare types for the grammar's non-terminals. */
%type <expression> program

%token END 0 "end of file"

/* Precedence declarations go here. */
%nonassoc LE '<' '='
%left '+' '-'
%left '*' '/' '%'
%left '[' ']'
%left '(' ')'

    //%start program
%%
program: /*empty*/ 
       | 
       ;

/* end of grammar */
%%

/* This function is called automatically when Bison detects a parse error. */
void yyerror(char *s) {
    extern int curr_lineno;
    cerr << "\"" << curr_filename << "\", line " << curr_lineno << ": "
         << s << " at or near ";
    print_cool_token(yychar);
    cerr << endl;
    omerrs++;
    if (omerrs > 50) {
        fprintf(stdout, "More than 50 errors\n");
        exit(1);
    }
}
