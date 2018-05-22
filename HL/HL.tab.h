/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_HL_TAB_H_INCLUDED
# define YY_YY_HL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NULL_0 = 258,
    CHAR = 259,
    INT = 260,
    FLOAT = 261,
    BOOLTRUE = 262,
    BOOLFALSE = 263,
    IF = 264,
    ELSE = 265,
    WHILE = 266,
    CONTINUE = 267,
    BREAK = 268,
    RETURN = 269,
    READ = 270,
    WRITE = 271,
    ID = 272,
    CHAR_CONST = 273,
    STRING_CONST = 274,
    INT_CONST = 275,
    FLOAT_CONST = 276,
    SELFADD = 277,
    SELFSUB = 278,
    SHIFTLEFT = 279,
    SHIFTRIGHT = 280,
    GE = 281,
    LE = 282,
    EQUAL = 283,
    NOTEQUAL = 284,
    LOGICALAND = 285,
    LOGICALOR = 286,
    ADDASSIGN = 287,
    SUBASSIGN = 288,
    MULASSIGN = 289,
    DIVASSIGN = 290,
    MODASSIGN = 291,
    ANDASSIGN = 292,
    XORASSIGN = 293,
    ORASSIGN = 294,
    SHIFTLEFTASSIGN = 295,
    SHHIFTRIGHTASSIGN = 296,
    UMINUS = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "HL.y" /* yacc.c:1909  */

    struct ASTnode *ast;
    char type_id[33];  //由标识符生成的exp叶子结点
    char type_char;	//由CHAR_CONST生成的exp叶子结点
    int type_int;	  //由INT_CONST生成的exp叶子结点
    float type_float;  //由FLOAT_CONST生成的exp叶子结点
    char type_string[100]; //由STRING_CONST生成的exp叶子结点

#line 106 "HL.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HL_TAB_H_INCLUDED  */
