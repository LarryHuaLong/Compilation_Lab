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
    END = 0,
    CHAR = 258,
    INT = 259,
    FLOAT = 260,
    BOOLTRUE = 261,
    BOOLFALSE = 262,
    IF = 263,
    THEN = 264,
    ELSE = 265,
    WHILE = 266,
    CONTINUE = 267,
    BREAK = 268,
    RETURN = 269,
    ID = 270,
    CHAR_CONST = 271,
    INT_CONST = 272,
    FLOAT_CONST = 273,
    SELFADD = 274,
    SELFSUB = 275,
    GE = 276,
    LE = 277,
    EQUAL = 278,
    NOTEQUAL = 279,
    ADDASSIGN = 280,
    SUBASSIGN = 281,
    MULASSIGN = 282,
    DIVSASSIGN = 283,
    ERROR = 284,
    ENDOFFILE = 285
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "HL.y" /* yacc.c:1909  */

    Exp expression;

#line 90 "HL.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HL_TAB_H_INCLUDED  */
