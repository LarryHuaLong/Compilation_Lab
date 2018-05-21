%{ 
    /******声明部分******/
    #include "stdio.h"
    #include "stdlib.h"
    #include "HL.tab.h"  /* 由bison生成 */
    //#include "AST.h"
    /*
    int yycolumn = 1;
    #define YY_USER_ACTION \
      yylloc.first_line = yylloc.last_line = yylineno; \
      yylloc.first_column = yycolumn; \
      yylloc.last_column = yycolumn + yyleng - 1; \
      yycolumn += yyleng;
    */
    
    #define LOG(TERMINAL) printf("(\"%s\", %s)\n", yytext,#TERMINAL);

%} 
    /* 说明部分 */
%option bison-bridge bison-locations debug
%option yylineno stack 

symbol        [{}()\[\]!~*/%+\-><&^|=,;]
id            [A-Za-z_]+[A-Za-z0-9_]*
invaild_id    [0-9][a-zA-Z0-9_]*
char_const    \'(([\x00-\x7f])|(\\['\"?\\abfnrtv])|(\\x[0-9A-Fa-f]+))\'
int_const     [+-]?(([1-9][0-9]*|0+)|(0[xX][0-9A-Fa-f]+)|(0[0-7]*))
float_const   [+-]?[0-9]*\.?[0-9]+
        int line_num = 1;
%x COMMENTS 
%%
    /******规则部分******/
[ \f\r\t\v]+        {}/* 处理空白符 */

"//".*          {printf("accepted a COMMENTLIME.\n");}/*识别单行注释*/
"/*"                {printf("begin of COMMENTS.\n"); BEGIN(COMMENTS);}/*开始识别多行注释*/
<COMMENTS>"*/"      {printf("begin of INITIAL.\n"); BEGIN(INITIAL);}
<COMMENTS>([^*]|\n)+|.   {}/* eat anything that's not a '*' */
<COMMENTS><<EOF>>   {printf("error:unclosed COMMENTS!");return ERROR;}
    /* 关键字 */
"char" { LOG(CHAR) return CHAR;}
"int" { LOG(INT) return INT;}
"float" { LOG(FLOAT) return FLOAT;}
"true" { LOG(TRUE) return BOOLTRUE;}
"false" { LOG(FALSE) return BOOLFALSE;}
"if" { LOG(IF) return IF; }
"then" { LOG(THEN) return THEN; }
"else" { LOG(ELSE) return ELSE; }
"while" { LOG(WHILE) return WHILE; }
"continue" { LOG(CONTINUE) return CONTINUE; }
"break" { LOG(BREAK) return BREAK; }
"return" { LOG(RETURN) return RETURN;}
    /* 符号 */
"++" { LOG(SELFADD) return SELFADD;}
"--" { LOG(SELFSUB) return SELFSUB;} 
">=" { LOG(GE) return GE; }
"<=" { LOG(LE) return LE; }
"==" { LOG(EQUAL) return EQUAL;}
"!=" { LOG(NOTEQUAL) return NOTEQUAL;}
"+=" { LOG(ADDASSIGN) return ADDASSIGN; }
"-=" { LOG(SUBASSIGN) return SUBASSIGN; }
"*=" { LOG(MULASSIGN) return MULASSIGN; }
"/=" { LOG(DIVSASSIGN) return DIVSASSIGN; }
{symbol} { LOG(SYMBOL) return yytext[0];}
{char_const} { LOG(CHAR_CONST) return CHAR_CONST;}/* 字符常量*/
{int_const} { LOG(INT_CONST) return INT_CONST;}/* 整型常量 */
{float_const} { LOG(FLOAT_CONST) return FLOAT_CONST;}/* 浮点数常量 */
{id} { LOG(ID) return ID;}/* 标识符 */
{invaild_id} { LOG(INVAILDID) printf("invailed id at line:%d\n",yylineno); return ERROR;}/* 标识符 */


    /*error */
. { LOG(ERROR) printf("error token at line:%d\n",yylineno); return ERROR;}
<INITIAL><<EOF>> { LOG(ENDOFFILE) printf("end of file\n"); return ENDOFFILE;}

%%
/*void main()
{
    while(ENDOFFILE != yylex());
    return ;
}*/
int yywrap(){
    return 1;
}