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
    #define LOG(TERMINAL) //printf("(  %s  , %s)\n", yytext,#TERMINAL);

    extern YYSTYPE yylval;
    
%} 
    /* 说明部分 */
%option noyywrap nodefault yylineno stack

symbol        [{}()\[\]!~*/%+\-><&^|=,;?:]
id            [A-Za-z_]+[A-Za-z0-9_]*
invaild_id    [0-9][a-zA-Z0-9_]*
char_const    \'(([\x00-\x7f])|(\\[0'"\\abfnrtv]))\'
string_const  \"(([\x00-\x7f])|(\\[0'"\\abfnrtv]))*\"
int_const     [+-]?(([1-9][0-9]*|0+)|(0[xX][0-9A-Fa-f]+)|(0[0-7]*)|(0[bB][01]+))
float_const   [+-]?(([0-9]+)|(([0-9]*[\.]([0-9]+))|(([0-9]+)[\.][0-9]*))[eE][+-]?([0-9]+))

%x COMMENTS 
%%
    /******规则部分******/
[ \f\r\t\v\n]+        {}/* 处理空白符 */

"//".*          {/*printf("accepted a COMMENTLIME.\n");*/}/*识别单行注释*/
"/*"                {/*printf("begin of COMMENTS.\n"); */BEGIN(COMMENTS);}/*开始识别多行注释*/
<COMMENTS>"*/"      {/*printf("begin of INITIAL.\n"); */BEGIN(INITIAL);}
<COMMENTS>([^*]|\n)+|.   {}/* eat anything that's not a '*' */
<COMMENTS><<EOF>>   {printf("error:unclosed COMMENTS!");}
    /* 关键字 */
"NULL" {yylval.type_int = 0; LOG(NULL_0) return NULL_0;}
"char" { LOG(CHAR) return CHAR;}
"int" { LOG(INT) return INT;}
"float" { LOG(FLOAT) return FLOAT;}
"true" {yylval.type_int = 0;  LOG(TRUE) return BOOLTRUE;}
"false" {yylval.type_int = 0;  LOG(FALSE) return BOOLFALSE;}
"if" { LOG(IF) return IF; }
    /*"then" { LOG(THEN) return THEN; }*/
"else" { LOG(ELSE) return ELSE; }
"while" { LOG(WHILE) return WHILE; }
"continue" { LOG(CONTINUE) return CONTINUE; }
"break" { LOG(BREAK) return BREAK; }
"return" { LOG(RETURN) return RETURN;}
"read" { LOG(READ) return READ;}
"write" { LOG(WRITE) return WRITE;}
    /* 符号 */
"++" { LOG(SELFADD) return SELFADD;}
"--" { LOG(SELFSUB) return SELFSUB;} 
"<<" { LOG(SHIFTLEFT) return SHIFTLEFT; }
">>" { LOG(SHIFTRIGHT) return SHIFTRIGHT; }
">=" { LOG(GE) return GE; }
"<=" { LOG(LE) return LE; }
"==" { LOG(EQUAL) return EQUAL;}
"!=" { LOG(NOTEQUAL) return NOTEQUAL;}
"&&" { LOG(LOGICALAND) return LOGICALAND;}
"||" { LOG(LOGICALOR) return LOGICALOR;}
"+=" { LOG(ADDASSIGN) return ADDASSIGN; }
"-=" { LOG(SUBASSIGN) return SUBASSIGN; }
"*=" { LOG(MULASSIGN) return MULASSIGN; }
"/=" { LOG(DIVASSIGN) return DIVASSIGN; }
"%=" { LOG(MODASSIGN) return MODASSIGN; }
"&=" { LOG(ANDASSIGN) return ANDASSIGN; }
"^=" { LOG(XORASSIGN) return XORASSIGN; }
"|=" { LOG(ORASSIGN) return ORASSIGN; }
"<<=" { LOG(SHIFTLEFTASSIGN) return SHIFTLEFTASSIGN; }
">>=" { LOG(SHHIFTRIGHTASSIGN) return SHHIFTRIGHTASSIGN; }
{symbol} { LOG(SYMBOL) return yytext[0];}
{char_const} {  if(yytext[1] == '\\'){
                switch(yytext[2]){
                    case 't': yylval.type_char = '\t'; break;
                    case 'r': yylval.type_char = '\r'; break;
                    case 'f': yylval.type_char = '\f'; break;
                    case 'a': yylval.type_char = '\a'; break;
                    case 'b': yylval.type_char = '\v'; break;
                    case 'n': yylval.type_char = '\n'; break;
                    case 'v': yylval.type_char = '\v'; break;
                    case '\\': yylval.type_char = '\\'; break;
                    case '\'': yylval.type_char = '\''; break;
                    case '\"': yylval.type_char = '\"'; break;
                    case '0': yylval.type_char = '\0'; break;
                    default: yylval.type_char = '\0'; break;
                }
            }
            else
                yylval.type_char = yytext[1]; \
            /*printf("\" %c \"\n",yylval.type_char);*/
            LOG(CHAR_CONST) return CHAR_CONST;\
        }
{string_const} {strcpy(yylval.type_string, yytext); LOG(STRING_CONST) return STRING_CONST;}
{int_const} { yylval.type_int = atoi(yytext); LOG(INT_CONST) return INT_CONST;}/* 整型常量 */
{float_const} { yylval.type_float = atof(yytext); LOG(FLOAT_CONST)  return FLOAT_CONST;}/* 浮点数常量 */
{id} {strcpy(yylval.type_id, yytext); LOG(ID) return ID;}/* 标识符 */
{invaild_id} { printf("invailed id at line:%d\n",yylineno);LOG(INVAILDID);}/* 标识符 */


    /*error */
. { printf("error token at line:%d\n",yylineno); LOG(ERROR) ;}
    /*<INITIAL><<EOF>> { printf("end of file\n"); LOG(ENDOFFILE) return ENDOFFILE;}*/

%%
