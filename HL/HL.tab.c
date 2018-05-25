/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "HL.y" /* yacc.c:339  */

    #include <stdio.h>
    #include "AST.h"
    #include "lex.yy.c"

    extern int yylex();         /*  the entry point to the lexer  */
    extern int yylineno;        /* from lexer */
    extern void yyerror(char *s, ...); /*  defined below; called for each parse error */
    extern FILE *yyin;

#line 77 "HL.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "HL.tab.h".  */
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
#line 15 "HL.y" /* yacc.c:355  */

    struct ASTnode *ast;
    char type_id[33];  //由标识符生成的exp叶子结点
    char type_char;	//由CHAR_CONST生成的exp叶子结点
    int type_int;	  //由INT_CONST生成的exp叶子结点
    float type_float;  //由FLOAT_CONST生成的exp叶子结点
    char type_string[100]; //由STRING_CONST生成的exp叶子结点

#line 169 "HL.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 186 "HL.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   981

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,     2,     2,    30,    60,     2,
      24,    25,    28,    31,    65,    32,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    64,
      34,    37,    33,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    26,     2,    27,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,    58,    23,    62,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    93,    93,    94,    96,    97,    98,   100,   101,   103,
     104,   105,   106,   107,   108,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"NULL\"", "\"char\"", "\"int\"",
  "\"float\"", "\"true\"", "\"false\"", "\"if\"", "\"else\"", "\"while\"",
  "\"continue\"", "\"break\"", "\"return\"", "\"read\"", "\"write\"", "ID",
  "CHAR_CONST", "STRING_CONST", "INT_CONST", "FLOAT_CONST", "'{'", "'}'",
  "'('", "')'", "'['", "']'", "'*'", "'/'", "'%'", "'+'", "'-'", "'>'",
  "'<'", "'?'", "':'", "'='", "\"++\"", "\"--\"", "\"<<\"", "\">>\"",
  "\">=\"", "\"<=\"", "\"==\"", "\"!=\"", "\"&&\"", "\"||\"", "\"+=\"",
  "\"-=\"", "\"*=\"", "\"/=\"", "\"%=\"", "\"&=\"", "\"^=\"", "\"|=\"",
  "\"<<=\"", "\">>=\"", "'|'", "'^'", "'&'", "'!'", "'~'", "UMINUS", "';'",
  "','", "$accept", "program", "stmts", "decls", "decl", "stmt", "exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   123,   125,    40,    41,    91,    93,    42,    47,
      37,    43,    45,    62,    60,    63,    58,    61,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   124,    94,
      38,    33,   126,   297,    59,    44
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,  -149,   -10,     8,    -7,  -149,    -5,     0,   160,   -40,
    -149,    25,    31,    41,  -149,  -149,     1,    57,    19,    21,
     225,    66,    67,    33,  -149,  -149,  -149,  -149,   160,   199,
     225,   225,   225,   225,   225,   225,  -149,    69,   160,    35,
     160,   336,  -149,   -36,   -35,   -34,   225,   225,  -149,  -149,
     373,   225,   225,   225,    70,    73,    75,    99,   521,   197,
      50,    50,    50,    50,    50,  -149,  -149,  -149,  -149,   225,
     225,   225,   225,   225,   225,   225,   225,   225,  -149,  -149,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,  -149,   225,  -149,   225,  -149,   225,  -149,   557,   593,
    -149,   260,   298,   699,  -149,   225,   225,   225,  -149,    50,
      50,    50,   197,   197,     6,     6,   732,   765,   157,   157,
       6,     6,   237,   237,   864,   831,   798,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   897,   921,   113,   410,
     447,   484,    98,    98,   225,   225,  -149,    86,    86,    86,
     225,  -149,  -149,  -149,    84,  -149,   629,   665,   798,    98,
      61,    62,  -149,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     1,     0,     0,     0,     0,
      38,     0,     0,     0,    36,    37,     0,     0,     0,     0,
       0,     0,     0,    39,    32,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     7,
       0,     0,    27,     0,     0,     0,     0,     0,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      43,    45,    46,    41,    42,     2,     5,     8,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     9,     0,    11,     0,    13,     0,     0,
      24,     0,     0,     0,    17,     0,     0,     0,    28,    49,
      50,    51,    52,    53,    58,    56,     0,    68,    54,    55,
      59,    57,    60,    61,    65,    66,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    64,    63,    62,     0,
       0,     0,     0,     0,     0,     0,    40,    30,    29,    31,
       0,    10,    12,    14,    19,    21,     0,     0,    67,     0,
       0,     0,    20,    25,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   -22,    88,  -149,  -148,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    37,    38,    39,    40,    41
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   102,   104,   106,   164,   165,    54,     4,     5,    58,
      59,    60,    61,    62,    63,    64,    66,     6,    68,     1,
       7,   172,     8,     2,    42,    46,   108,   109,   103,   105,
     107,   111,   112,   113,    69,    70,    71,    72,    73,    11,
      12,    13,    43,    77,    78,    79,    80,    81,    44,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    45,    53,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    47,   149,    48,   150,    49,   151,    77,    78,    79,
      51,    52,    65,   114,   169,   157,   158,   159,   115,     9,
     116,    10,   -15,   -15,   -15,    14,    15,    16,   -15,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   -15,    29,    77,   117,   173,   174,    67,     0,    30,
      31,     0,     0,     0,   166,   167,    32,    33,     0,     0,
     168,    69,    70,    71,    72,    73,    74,    75,     0,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    34,
      35,     9,    36,    10,    11,    12,    13,    14,    15,    16,
       0,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -4,    29,    69,    70,    71,    72,    73,
       0,    30,    31,     0,    77,    78,    79,     0,    32,    33,
       0,     0,    10,    55,    56,    57,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    34,    35,    29,    36,    69,    70,    71,    10,     0,
      30,    31,    14,    15,    77,    78,    79,    32,    33,     0,
       0,     0,    23,    24,    25,    26,    27,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
      34,    35,     0,    32,    33,    69,    70,    71,    72,    73,
      74,    75,     0,     0,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,    34,    35,    69,    70,
      71,    72,    73,    74,    75,    76,     0,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     0,     0,     0,     0,   154,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     0,
       0,     0,     0,   155,    69,    70,    71,    72,    73,    74,
      75,    76,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     0,     0,     0,
     101,    69,    70,    71,    72,    73,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     0,     0,     0,   110,    69,    70,
      71,    72,    73,    74,    75,    76,     0,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     0,     0,     0,   161,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     0,     0,
       0,   162,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,   118,     0,   163,    69,
      70,    71,    72,    73,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   152,     0,     0,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   153,     0,
       0,    69,    70,    71,    72,    73,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   170,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     171,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   156,    69,    70,    71,
      72,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      69,    70,    71,    72,    73,    74,    75,    76,   160,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    69,    70,    71,    72,    73,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,    69,
      70,    71,    72,    73,    74,    75,     0,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,    69,    70,    71,    72,    73,    74,    75,     0,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,    69,    70,    71,    72,    73,
      74,    75,     0,     0,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    99,   100,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100
};

static const yytype_int16 yycheck[] =
{
      20,    37,    37,    37,   152,   153,    28,    17,     0,    29,
      30,    31,    32,    33,    34,    35,    38,    24,    40,     1,
      25,   169,    22,     5,    64,    24,    46,    47,    64,    64,
      64,    51,    52,    53,    28,    29,    30,    31,    32,     4,
       5,     6,    17,    37,    38,    39,    40,    41,    17,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    17,    26,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    24,   102,    64,   104,    64,   106,    37,    38,    39,
      24,    24,    23,    23,    10,   115,   116,   117,    25,     1,
      25,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    37,    25,    64,    64,    39,    -1,    31,
      32,    -1,    -1,    -1,   154,   155,    38,    39,    -1,    -1,
     160,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    61,
      62,     1,    64,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    28,    29,    30,    31,    32,
      -1,    31,    32,    -1,    37,    38,    39,    -1,    38,    39,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    61,    62,    24,    64,    28,    29,    30,     3,    -1,
      31,    32,     7,     8,    37,    38,    39,    38,    39,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      61,    62,    -1,    38,    39,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    61,    62,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    65,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    -1,    -1,
      64,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    64,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    -1,    -1,    64,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    -1,
      -1,    64,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    25,    -1,    64,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    25,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    25,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    25,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      25,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    59,    60,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    67,    17,     0,    24,    25,    22,     1,
       3,     4,     5,     6,     7,     8,     9,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    24,
      31,    32,    38,    39,    61,    62,    64,    68,    69,    70,
      71,    72,    64,    17,    17,    17,    24,    24,    64,    64,
      72,    24,    24,    26,    68,     4,     5,     6,    72,    72,
      72,    72,    72,    72,    72,    23,    68,    69,    68,    28,
      29,    30,    31,    32,    33,    34,    35,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    64,    37,    64,    37,    64,    37,    64,    72,    72,
      64,    72,    72,    72,    23,    25,    25,    25,    25,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    25,    25,    65,    65,    27,    72,    72,    72,
      36,    64,    64,    64,    71,    71,    72,    72,    72,    10,
      25,    25,    71,    64,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     1,     0,     2,     2,     0,     2,     3,
       5,     3,     5,     3,     5,     0,     1,     3,     2,     5,
       7,     5,     2,     2,     3,     7,     7,     2,     3,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 93 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp = newAST('D', (yyvsp[-5].type_id), NULL, NULL, NULL); (yyval.ast)=newAST('N', "program", temp, (yyvsp[-1].ast), NULL); displayAST((yyval.ast),0);treefree((yyval.ast));}
#line 1537 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 94 "HL.y" /* yacc.c:1646  */
    {printf("error program\n");}
#line 1543 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "empyt stmts", NULL, NULL, NULL);}
#line 1549 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "decls stmts", (yyvsp[-1].ast), (yyvsp[0].ast), NULL);}
#line 1555 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "stmt stmts", (yyvsp[-1].ast), (yyvsp[0].ast), NULL);}
#line 1561 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "empyt decls", NULL, NULL, NULL);}
#line 1567 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 101 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "decl decls", (yyvsp[-1].ast), (yyvsp[0].ast), NULL);}
#line 1573 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 103 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp=newAST('D', (yyvsp[-1].type_id), NULL, NULL, NULL);(yyval.ast)=newAST('N', "char ID ;",temp, NULL, NULL);}
#line 1579 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp=newAST('D', (yyvsp[-3].type_id), NULL, NULL, NULL);(yyval.ast)=newAST('N', "char ID = exp ;",temp, (yyvsp[-1].ast), NULL);}
#line 1585 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp=newAST('D', (yyvsp[-1].type_id), NULL, NULL, NULL);(yyval.ast)=newAST('N', "int ID ;", temp, NULL, NULL);}
#line 1591 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp=newAST('D', (yyvsp[-3].type_id), NULL, NULL, NULL);(yyval.ast)=newAST('N', "int ID = exp ;",temp, (yyvsp[-1].ast), NULL);}
#line 1597 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 107 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp=newAST('D', (yyvsp[-1].type_id), NULL, NULL, NULL);(yyval.ast)=newAST('N', "float ID ;", temp, NULL, NULL);}
#line 1603 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 108 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp=newAST('D', (yyvsp[-3].type_id), NULL, NULL, NULL);(yyval.ast)=newAST('N', "float ID = exp ;",temp, (yyvsp[-1].ast), NULL);}
#line 1609 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "empyt stmt ;", NULL, NULL, NULL);}
#line 1615 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 111 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "empyt stmt ;", NULL, NULL, NULL);}
#line 1621 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 112 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "{ stmts }", (yyvsp[-1].ast), NULL, NULL);}
#line 1627 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 113 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "exp ;", (yyvsp[-1].ast), NULL, NULL);}
#line 1633 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 114 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "if ;", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1639 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 115 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "if-else ;", (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1645 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 116 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "while ;", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1651 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 117 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "continue ;", NULL, NULL, NULL);}
#line 1657 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "break ;", NULL, NULL, NULL);}
#line 1663 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 119 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "return exp ;", (yyvsp[-1].ast), NULL, NULL);}
#line 1669 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 120 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "read()", (yyvsp[-4].ast), (yyvsp[-2].ast), NULL);}
#line 1675 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "write()", (yyvsp[-4].ast), (yyvsp[-2].ast), NULL);}
#line 1681 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=NULL; yyerror("error stmt at line %d\n",yylineno);}
#line 1687 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 124 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "(exp)", (yyvsp[-1].ast), NULL, NULL);}
#line 1693 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "(int)exp", (yyvsp[0].ast), NULL, NULL);}
#line 1699 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "(char)exp", (yyvsp[0].ast), NULL, NULL);}
#line 1705 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 127 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('N', "(float)exp", (yyvsp[0].ast), NULL, NULL);}
#line 1711 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('C', &((yyvsp[0].type_char)), NULL, NULL, NULL);}
#line 1717 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('S', (yyvsp[0].type_string), NULL, NULL, NULL);}
#line 1723 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 130 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('I', &((yyvsp[0].type_int)), NULL, NULL, NULL);}
#line 1729 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 131 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('F', &((yyvsp[0].type_float)), NULL, NULL, NULL);}
#line 1735 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 132 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('I', &((yyvsp[0].type_int)), NULL, NULL, NULL);}
#line 1741 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 133 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('I', &((yyvsp[0].type_int)), NULL, NULL, NULL);}
#line 1747 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 134 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('I', &((yyvsp[0].type_int)), NULL, NULL, NULL);}
#line 1753 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 135 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('D', (yyvsp[0].type_id), NULL, NULL, NULL);}
#line 1759 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 136 "HL.y" /* yacc.c:1646  */
    {ASTnode* temp = newAST('D', (yyvsp[-3].type_id), NULL, NULL, NULL); (yyval.ast)=newAST('N', "array", temp, (yyvsp[-1].ast), NULL);}
#line 1765 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 137 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "! exp", (yyvsp[0].ast), NULL, NULL);}
#line 1771 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "~ exp", (yyvsp[0].ast), NULL, NULL);}
#line 1777 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 139 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "- exp", (yyvsp[0].ast), NULL, NULL);}
#line 1783 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 140 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "+ exp", (yyvsp[0].ast), NULL, NULL);}
#line 1789 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 141 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "++ exp", (yyvsp[0].ast), NULL, NULL);}
#line 1795 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 142 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "-- exp", (yyvsp[0].ast), NULL, NULL);}
#line 1801 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "exp ++", (yyvsp[-1].ast), NULL, NULL);}
#line 1807 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "exp --", (yyvsp[-1].ast), NULL, NULL);}
#line 1813 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "*", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1819 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "/", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1825 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 147 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "%", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1831 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 148 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "+", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1837 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 149 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "-", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1843 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 150 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "<<", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1849 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 151 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', ">>", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1855 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 152 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "<", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1861 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 153 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "<=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1867 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 154 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', ">", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1873 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 155 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', ">=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1879 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 156 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "==", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1885 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 157 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "!=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1891 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 158 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "&", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1897 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 159 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "^", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1903 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 160 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "|", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1909 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 161 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "&&", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1915 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 162 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "||", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1921 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 163 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', " ? : ", (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1927 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 164 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1933 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 165 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "+=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1939 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 166 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "-=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1945 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 167 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "*=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1951 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 168 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "/=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1957 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 169 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "%=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1963 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 170 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "&=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1969 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 171 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "^=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1975 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 172 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "|=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1981 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 173 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', "<<=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1987 "HL.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 174 "HL.y" /* yacc.c:1646  */
    {(yyval.ast)=newAST('E', ">>=", (yyvsp[-2].ast), (yyvsp[0].ast), NULL);}
#line 1993 "HL.tab.c" /* yacc.c:1646  */
    break;


#line 1997 "HL.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 177 "HL.y" /* yacc.c:1906  */

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
