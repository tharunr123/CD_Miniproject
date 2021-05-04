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
#line 2 "parse.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YYSTYPE char *
extern YYSTYPE yylval;

int valid = 1;

void push();
int yyerror(const char *s);
extern int yylineno;


#line 82 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ID = 258,
    NUM = 259,
    T_lt = 260,
    T_gt = 261,
    COMMA = 262,
    STRC = 263,
    TERMINATOR = 264,
    RETURN = 265,
    FLT = 266,
    T_lteq = 267,
    T_gteq = 268,
    T_neq = 269,
    T_eqeq = 270,
    T_pl = 271,
    S_min = 272,
    S_add = 273,
    S_mul = 274,
    S_div = 275,
    T_min = 276,
    T_mul = 277,
    T_div = 278,
    T_and = 279,
    T_or = 280,
    T_incr = 281,
    T_decr = 282,
    T_not = 283,
    T_eq = 284,
    WHILE = 285,
    INT = 286,
    CHAR = 287,
    FLOAT = 288,
    VOID = 289,
    H = 290,
    MAINTOK = 291,
    INCLUDE = 292,
    BREAK = 293,
    DO = 294,
    CONTINUE = 295,
    IF = 296,
    ELSE = 297,
    COUT = 298,
    STRING = 299,
    OB = 300,
    CB = 301,
    OBR = 302,
    CBR = 303,
    ENDL = 304
  };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define T_lt 260
#define T_gt 261
#define COMMA 262
#define STRC 263
#define TERMINATOR 264
#define RETURN 265
#define FLT 266
#define T_lteq 267
#define T_gteq 268
#define T_neq 269
#define T_eqeq 270
#define T_pl 271
#define S_min 272
#define S_add 273
#define S_mul 274
#define S_div 275
#define T_min 276
#define T_mul 277
#define T_div 278
#define T_and 279
#define T_or 280
#define T_incr 281
#define T_decr 282
#define T_not 283
#define T_eq 284
#define WHILE 285
#define INT 286
#define CHAR 287
#define FLOAT 288
#define VOID 289
#define H 290
#define MAINTOK 291
#define INCLUDE 292
#define BREAK 293
#define DO 294
#define CONTINUE 295
#define IF 296
#define ELSE 297
#define COUT 298
#define STRING 299
#define OB 300
#define CB 301
#define OBR 302
#define CBR 303
#define ENDL 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   319

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,     2,
       2,     2,     2,    51,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    38,    45,    46,    52,    53,    59,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    75,    75,
      75,    78,    79,    82,    82,    82,    87,    88,    89,    91,
      93,    97,    98,    99,   100,   101,   102,   103,   107,   107,
     112,   115,   117,   118,   118,   119,   120,   121,   122,   127,
     128,   129,   130,   131,   131,   134,   135,   136,   136,   137,
     141,   143,   146,   149,   152,   155,   161,   166,   167,   168,
     169,   170,   171,   175,   178,   183,   184,   185,   188,   189,
     190,   191,   192,   193,   198,   199,   200,   201,   205,   206,
     210,   211,   215,   219,   220,   221,   222
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "T_lt", "T_gt", "COMMA",
  "STRC", "TERMINATOR", "RETURN", "FLT", "T_lteq", "T_gteq", "T_neq",
  "T_eqeq", "T_pl", "S_min", "S_add", "S_mul", "S_div", "T_min", "T_mul",
  "T_div", "T_and", "T_or", "T_incr", "T_decr", "T_not", "T_eq", "WHILE",
  "INT", "CHAR", "FLOAT", "VOID", "H", "MAINTOK", "INCLUDE", "BREAK", "DO",
  "CONTINUE", "IF", "ELSE", "COUT", "STRING", "OB", "CB", "OBR", "CBR",
  "ENDL", "'\"'", "'?'", "':'", "$accept", "S", "START", "MAIN", "BODY",
  "C", "SELECTION", "$@1", "$@2", "ElseBody", "LOOPS", "$@3", "$@4",
  "LOOPBODY", "statement", "SUGAR_OPS", "$@5", "COND", "$@6",
  "ASSIGN_EXPR", "$@7", "X", "$@8", "ARITH_EXPR", "TERNARY_EXPR", "PRINT",
  "LIT", "TYPE", "RELOP", "bin_arop", "bin_boolop", "un_arop", "un_boolop",
  "s_ops", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      34,    63,    58
};
# endif

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -58

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,  -127,    -1,    23,  -127,     2,     6,  -127,    22,     8,
      25,    25,    28,    32,  -127,  -127,    19,    19,   147,  -127,
    -127,    52,   178,  -127,    59,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,    43,    68,    18,    46,   173,  -127,  -127,    88,
    -127,  -127,  -127,  -127,  -127,   292,    98,   102,   102,  -127,
     102,   268,    74,  -127,  -127,   251,    18,    99,  -127,    61,
     287,     7,  -127,   147,  -127,  -127,  -127,   100,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,   102,   102,  -127,    31,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,   102,  -127,   113,  -127,
      81,   103,    72,     4,    69,  -127,  -127,  -127,  -127,  -127,
    -127,    96,    96,    96,   119,   199,  -127,  -127,  -127,   118,
     102,  -127,  -127,   225,    77,  -127,  -127,   131,  -127,   132,
     139,    -7,  -127,    30,    96,  -127,    64,  -127,   140,  -127,
      18,   251,   133,   148,   107,    96,  -127,    96,  -127,   118,
     102,   155,   109,  -127,   114,   115,   139,   119,  -127,  -127,
     161,   118,  -127,   127,  -127,  -127,  -127,    96,   135,   180,
    -127,   176,   251,  -127,  -127,  -127,   118,  -127,  -127,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     2,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     7,
       6,     0,    73,    74,     0,    90,    91,    92,    75,    76,
      77,    23,     0,     0,     0,     0,     0,    14,    12,     0,
      34,    31,    32,    33,    35,    60,     0,     0,     0,    17,
       0,     0,    73,    36,    37,     0,     0,     0,    73,     0,
      41,     0,    16,     0,     8,    13,    10,     0,    11,    84,
      85,    86,    87,    88,    89,     0,     0,    63,    51,    64,
      65,    49,    95,    94,    93,    96,     0,    27,     0,    30,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,     0,     0,    48,     0,     9,    61,    62,     0,
       0,    39,    29,     0,     0,    28,    18,    67,    69,    71,
       0,    40,    46,     0,     0,    15,    56,    52,    50,    26,
       0,     0,     0,     0,     0,     0,    47,     0,    45,     0,
       0,     0,     0,    19,     0,     0,     0,     0,    43,    55,
      59,     0,    24,    22,    68,    70,    66,     0,     0,     0,
      54,     0,     0,    20,    42,    44,     0,    25,    21,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,   182,   172,   -13,   -31,  -127,  -127,  -127,
     -35,  -127,  -127,  -115,   -36,  -127,  -127,   -47,  -127,   167,
    -127,  -126,  -127,   -21,  -127,  -127,   -22,  -127,   -90,  -127,
     -54,   163,   -32,  -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    14,    19,    36,    37,   131,   153,   163,
      38,    55,   161,    90,    39,    40,    51,    59,   158,    41,
     141,   127,   159,    42,    43,    44,    45,    46,   101,    75,
      76,    47,    48,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    66,    61,    54,     5,    65,   102,    58,    23,    92,
      58,    23,    60,   149,   124,     1,   143,    73,    74,    91,
      89,    58,    23,     7,    61,   160,    79,    80,    10,    81,
      25,    26,    27,   137,    60,    95,    96,     8,   109,   104,
     169,     9,    97,    98,    99,   100,    27,   168,   117,     6,
     105,     2,   103,   118,   107,   108,    12,   157,    11,    13,
     110,    49,    52,    23,    16,   111,    18,   135,    17,    67,
      66,   139,   119,    57,    65,   113,   136,    67,    66,   121,
     122,   123,    65,   142,   134,    25,    26,    27,    56,   128,
      28,    29,    30,   140,    62,    91,    89,    68,    61,    58,
      23,    78,   138,    50,    93,    58,    23,    94,    60,   106,
     156,   114,   115,   147,    21,   148,    22,    23,   116,   150,
     120,   126,   130,    24,    95,    96,    91,    89,    25,    26,
      27,    97,    98,    99,   100,   164,   132,   133,   144,    25,
      26,    27,    22,    23,    28,    29,    30,   -53,    21,    24,
      22,    23,    31,   145,    32,   152,    33,    24,    34,   146,
      35,   112,   151,   154,   155,    25,    26,    27,   -57,   162,
      28,    29,    30,    25,    26,    27,    22,    23,    28,    29,
      30,   165,    33,    24,    34,   167,    31,   166,    32,    20,
      33,    53,    34,    15,    35,   -38,   -38,   -38,   -38,    25,
      26,    27,    22,    23,    28,    29,    30,    50,    77,    24,
       0,     0,    31,     0,    32,     0,    33,     0,    34,     0,
      63,    64,     0,     0,     0,    25,    26,    27,    22,    23,
      28,    29,    30,     0,     0,    24,     0,     0,    31,     0,
      32,     0,    33,     0,    34,     0,    63,   125,     0,     0,
       0,    25,    26,    27,    22,    23,    28,    29,    30,     0,
      87,    24,     0,     0,    31,     0,    32,     0,    33,     0,
      34,     0,    63,   129,     0,     0,     0,    25,    26,    27,
       0,     0,    28,    29,    30,    82,    83,    84,    85,     0,
      31,     0,    95,    96,    33,     0,    34,     0,    88,    97,
      98,    99,   100,     0,     0,     0,     0,     0,    69,     0,
       0,    73,    74,    70,    71,    72,    73,    74,    25,    26
};

static const yytype_int16 yycheck[] =
{
      36,    36,    34,    24,     5,    36,    60,     3,     4,    56,
       3,     4,    34,   139,   104,     1,   131,    24,    25,    55,
      55,     3,     4,     0,    56,   151,    47,    48,     6,    50,
      26,    27,    28,   123,    56,     5,     6,    35,     7,    61,
     166,    35,    12,    13,    14,    15,    28,   162,    44,    50,
      63,    37,    45,    49,    75,    76,    31,   147,    50,    34,
      29,     9,     3,     4,    36,    86,    47,   121,    36,   105,
     105,     7,    93,     5,   105,    88,    46,   113,   113,   101,
     102,   103,   113,   130,   120,    26,    27,    28,    45,   110,
      31,    32,    33,    29,    48,   131,   131,     9,   130,     3,
       4,     3,   124,    29,     5,     3,     4,    46,   130,     9,
     146,    30,     9,   135,     1,   137,     3,     4,    46,   140,
      51,     3,    45,    10,     5,     6,   162,   162,    26,    27,
      28,    12,    13,    14,    15,   157,     5,     5,     5,    26,
      27,    28,     3,     4,    31,    32,    33,     7,     1,    10,
       3,     4,    39,     5,    41,    46,    43,    10,    45,    52,
      47,    48,     7,    49,    49,    26,    27,    28,     7,    42,
      31,    32,    33,    26,    27,    28,     3,     4,    31,    32,
      33,    46,    43,    10,    45,     9,    39,     7,    41,    17,
      43,    24,    45,    11,    47,    17,    18,    19,    20,    26,
      27,    28,     3,     4,    31,    32,    33,    29,    45,    10,
      -1,    -1,    39,    -1,    41,    -1,    43,    -1,    45,    -1,
      47,    48,    -1,    -1,    -1,    26,    27,    28,     3,     4,
      31,    32,    33,    -1,    -1,    10,    -1,    -1,    39,    -1,
      41,    -1,    43,    -1,    45,    -1,    47,    48,    -1,    -1,
      -1,    26,    27,    28,     3,     4,    31,    32,    33,    -1,
       9,    10,    -1,    -1,    39,    -1,    41,    -1,    43,    -1,
      45,    -1,    47,    48,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    31,    32,    33,    17,    18,    19,    20,    -1,
      39,    -1,     5,     6,    43,    -1,    45,    -1,    47,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    24,    25,    21,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    37,    54,    55,     5,    50,     0,    35,    35,
       6,    50,    31,    34,    56,    56,    36,    36,    47,    57,
      57,     1,     3,     4,    10,    26,    27,    28,    31,    32,
      33,    39,    41,    43,    45,    47,    58,    59,    63,    67,
      68,    72,    76,    77,    78,    79,    80,    84,    85,     9,
      29,    69,     3,    72,    76,    64,    45,     5,     3,    70,
      79,    85,    48,    47,    48,    59,    63,    67,     9,    16,
      21,    22,    23,    24,    25,    82,    83,    84,     3,    76,
      76,    76,    17,    18,    19,    20,    86,     9,    47,    63,
      66,    67,    70,     5,    46,     5,     6,    12,    13,    14,
      15,    81,    83,    45,    79,    58,     9,    76,    76,     7,
      29,    76,    48,    58,    30,     9,    46,    44,    49,    76,
      51,    79,    79,    79,    81,    48,     3,    74,    76,    48,
      45,    60,     5,     5,    67,    83,    46,    81,    79,     7,
      29,    73,    70,    66,     5,     5,    52,    79,    79,    74,
      76,     7,    46,    61,    49,    49,    67,    81,    71,    75,
      74,    65,    42,    62,    79,    46,     7,     9,    66,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    60,    61,
      59,    62,    62,    64,    65,    63,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    69,    68,
      70,    70,    70,    71,    70,    70,    70,    70,    70,    72,
      72,    72,    72,    73,    72,    74,    74,    75,    74,    74,
      76,    76,    76,    76,    76,    76,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    83,    83,
      84,    84,    85,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     5,     5,     3,     3,     3,     3,
       2,     2,     1,     2,     1,     4,     2,     2,     0,     0,
       8,     2,     0,     0,     0,     9,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     4,
       3,     1,     7,     0,     7,     4,     3,     4,     2,     3,
       4,     2,     4,     0,     7,     3,     1,     0,     6,     3,
       1,     3,     3,     2,     2,     2,     7,     4,     7,     4,
       7,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 34 "parse.y" /* yacc.c:1646  */
    {
        printf("Successful parsing.\n");
        //exit(0);
      }
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "parse.y" /* yacc.c:1646  */
    {
         yyerrok;
         yyclearin;
       }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "parse.y" /* yacc.c:1646  */
    {
        // showSt();
      }
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "parse.y" /* yacc.c:1646  */
    {
      }
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 75 "parse.y" /* yacc.c:1646  */
    {lab1();}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "parse.y" /* yacc.c:1646  */
    {lab2();}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "parse.y" /* yacc.c:1646  */
    {lab3();}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "parse.y" /* yacc.c:1646  */
    { codegen_while1(); }
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 82 "parse.y" /* yacc.c:1646  */
    {codegen_while2();}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "parse.y" /* yacc.c:1646  */
    {codegen_while3(); }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "parse.y" /* yacc.c:1646  */
    {}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 89 "parse.y" /* yacc.c:1646  */
    {
    }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 91 "parse.y" /* yacc.c:1646  */
    {
    }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 107 "parse.y" /* yacc.c:1646  */
    {codegen_syns();}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 112 "parse.y" /* yacc.c:1646  */
    {
        codegen_bool();
        }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 115 "parse.y" /* yacc.c:1646  */
    {
      }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 118 "parse.y" /* yacc.c:1646  */
    {codegen_bool();}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "parse.y" /* yacc.c:1646  */
    {codgen_un();}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "parse.y" /* yacc.c:1646  */
    {codegen_bool();}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 121 "parse.y" /* yacc.c:1646  */
    {codgen_un();}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 122 "parse.y" /* yacc.c:1646  */
    {codgen_un();}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 127 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[-2]));codegen_assign();}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 128 "parse.y" /* yacc.c:1646  */
    { push((yyvsp[-2])); codegen_assign();}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 131 "parse.y" /* yacc.c:1646  */
    { push((yyvsp[-2])); codegen_assign();}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 136 "parse.y" /* yacc.c:1646  */
    { push((yyvsp[-2])); codegen_assign();}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 137 "parse.y" /* yacc.c:1646  */
    { push((yyvsp[-2])); codegen_assign();}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "parse.y" /* yacc.c:1646  */
    {
        codegen_bool();
      }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 146 "parse.y" /* yacc.c:1646  */
    {
        codegen_bool();
      }
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 149 "parse.y" /* yacc.c:1646  */
    {
         codgen_un();
      }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 152 "parse.y" /* yacc.c:1646  */
    {
         codgen_un();
      }
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 155 "parse.y" /* yacc.c:1646  */
    {
         codgen_un();
      }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 175 "parse.y" /* yacc.c:1646  */
    {
            push((yyvsp[0]));
        }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 178 "parse.y" /* yacc.c:1646  */
    {
        push((yyvsp[0]));
      }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 188 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 189 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 190 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 191 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 192 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 193 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 198 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 199 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 200 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 201 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 205 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 206 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 210 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 211 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 215 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 219 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 220 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 221 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 222 "parse.y" /* yacc.c:1646  */
    {push((yyvsp[0]));}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1803 "y.tab.c" /* yacc.c:1646  */
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
#line 224 "parse.y" /* yacc.c:1906  */



#include <ctype.h>


int yyerror(const char *s)
{
  	extern int yylineno;
    valid = 0;
  	printf("\n\nERROR: line number: %d - error: %s\n\n",yylineno,s);
}

char st[100][20];
int top = 0;
int lnum = 0;
int ltop = 0;
int label[25];
char i_[3]="00";
char temp[2]="t";

typedef struct quadruples
  	{
  	  char *op;
  	  char *arg1;
  	  char *arg2;
  	  char *res;
  	}quad;
  	int quadindex = 0;			//current index of Q to store the quadruple in.
	quad Q[100];

void push(char* val){
  strcpy(st[top++], val);
}

void showSt(){
  printf("\nprinting the stack contents\n");
  while(top != -1){
    printf("%s ", st[top]);
    top--;
  }
  printf("\nstack over\n");
}

void codegen_bool()
{
	strcpy(temp,"t");
	strcat(temp,i_);
	printf("%s = %s %s %s\n",temp,st[top-3],st[top-2],st[top-1]);
	Q[quadindex].op = (char*)malloc(sizeof(char)*strlen(st[top-2]));
	    Q[quadindex].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
	    Q[quadindex].arg2 = (char*)malloc(sizeof(char)*strlen(st[top - 1]));
	    Q[quadindex].res = (char*)malloc(sizeof(char)*strlen(temp));
	    strcpy(Q[quadindex].op,st[top-2]);
	    strcpy(Q[quadindex].arg1,st[top-3]);
	    strcpy(Q[quadindex].arg2,st[top - 1]);
	    strcpy(Q[quadindex].res,temp);
	    quadindex++;
	top-=2;
	strcpy(st[top-1],temp);
	if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}
}

void codgen_un()
{
	strcpy(temp,"t");
	strcat(temp,i_);
      
  if((!strcmp(st[top - 2],"++")) || (!strcmp(st[top - 2],"--"))){
    printf(" %s = %s %c %d\n", temp, st[top-1], st[top-2][0], 1);

    printf("%s = %s\n", st[top - 1], temp);

  }
  else if((!strcmp(st[top - 1],"++")) || (!strcmp(st[top - 1],"--"))){
    printf(" %s = %s %c %d\n", temp, st[top-2], st[top-1][0], 1);

    printf("%s = %s\n", st[top - 2], temp);

  }
  else
    printf(" %s = %s%s\n", temp, st[top-2], st[top-1]);
  top = top - 1;
  strcpy(st[top - 1], temp);
  if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}
}

void codegen_syns(){
  printf("%s %c %s %c %s\n", st[top-3], st[top-2][1], st[top-3], st[top-2][0], st[top - 1]);
  top = top - 2;
}

void codegen_assign(){
  printf("%s = %s\n", st[top-1],st[top-2]);
Q[quadindex].op = (char*)malloc(sizeof(char));
	    Q[quadindex].arg1 = (char*)malloc(sizeof(char)*strlen(st[top - 2]));
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*strlen(st[top-1]));
	    strcpy(Q[quadindex].op,"=");
	    strcpy(Q[quadindex].arg1,st[top - 2]);
	    strcpy(Q[quadindex].res,st[top-1]);
	    quadindex++;
  top = top - 2;
}


void codegen_while1(){

  label[ltop++] = ++lnum;
  printf("L%d :\n", label[ltop - 1]);
  
  label[ltop++] = ++lnum;
Q[quadindex].op = (char*)malloc(sizeof(char)*6);		//a label's quad 	
	    Q[quadindex].arg1 = NULL;
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(lnum + 2));   //lum + 2 is a safe way to have enough space for L0, L1, ... etc. 
	    strcpy(Q[quadindex].op,"Label");
	    char x[10];
		x[0] = '0' + label[ltop - 2];
	    char l[]="L";
	    strcpy(Q[quadindex].res,strcat(l,x));
	    quadindex++;
//   printf("%d %d\n", label[ltop - 1], label[ltop - 2]);
}

void codegen_while2()
{
  strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = not %s\n",temp,st[top - 1]);
Q[quadindex].op = (char*)malloc(sizeof(char)*4);
	    Q[quadindex].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*strlen(temp));
	    strcpy(Q[quadindex].op,"not");
	    strcpy(Q[quadindex].arg1,st[top-1]);
	    strcpy(Q[quadindex].res,temp);
	    quadindex++;
 printf("if %s goto L%d\n",temp,lnum);
Q[quadindex].op = (char*)malloc(sizeof(char)*3);
	    Q[quadindex].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(lnum+2));
	    strcpy(Q[quadindex].op,"if");
	    strcpy(Q[quadindex].arg1,temp);
	    char x[10];
	    sprintf(x,"%d",lnum);
	    char l[]="L";
	    strcpy(Q[quadindex].res,strcat(l,x));
	    quadindex++;
 i_[0]++;
 label[++ltop]=lnum;
}


void codegen_while3(){
      strcpy(temp,"t");
	strcat(temp,i_);
	Q[quadindex].op = (char*)malloc(sizeof(char)*6);		//a label's quad 	
	    Q[quadindex].arg1 = NULL;
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(lnum + 2));   //lum + 2 is a safe way to have enough space for L0, L1, ... etc. 
	    strcpy(Q[quadindex].op,"goto");
	    char x[10];
		x[0] = '0' + label[ltop-3];
	    char l[]="L";
	    strcpy(Q[quadindex].res,strcat(l,x));
	    quadindex++;
      ltop = ltop - 2;
	if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}

	printf("goto L%d\n",label[ltop - 1]);
	printf("L%d :\n",label[ltop ]);
	Q[quadindex].op = (char*)malloc(sizeof(char)*6);		//a label's quad 	
	    Q[quadindex].arg1 = NULL;
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(lnum + 2));   //lum + 2 is a safe way to have enough space for L0, L1, ... etc. 
	    strcpy(Q[quadindex].op,"Label");
	    char y[10];
		y[0] = '0' + label[ltop];
	    char m[]="L";
	    strcpy(Q[quadindex].res,strcat(m,y));
	    quadindex++;
}

void lab1()
{
 lnum++;
 strcpy(temp,"t");
 strcat(temp,i_);
 printf("%s = not %s\n",temp,st[top - 1]);
Q[quadindex].op = (char*)malloc(sizeof(char)*4);
	    Q[quadindex].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*strlen(temp));
	    strcpy(Q[quadindex].op,"not");
	    strcpy(Q[quadindex].arg1,st[top-1]);
	    strcpy(Q[quadindex].res,temp);
	    quadindex++;
 printf("if %s goto L%d\n",temp,lnum);
Q[quadindex].op = (char*)malloc(sizeof(char)*3);
	    Q[quadindex].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(lnum+2));
	    strcpy(Q[quadindex].op,"if");
	    strcpy(Q[quadindex].arg1,temp);
	    char x[10];
	    sprintf(x,"%d",lnum);
	    char l[]="L";
	    strcpy(Q[quadindex].res,strcat(l,x));
	    quadindex++;
 i_[0]++;
 label[++ltop]=lnum;
 
}
void lab2()
{
int x;
lnum++;
x=label[ltop--];
strcpy(temp,"t");
	strcat(temp,i_);
	Q[quadindex].op = (char*)malloc(sizeof(char)*6);		//a label's quad 	
	    Q[quadindex].arg1 = NULL;
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(lnum + 2));   //lum + 2 is a safe way to have enough space for L0, L1, ... etc. 
	    strcpy(Q[quadindex].op,"goto");
	    char p[10];
		p[0] = '0' + lnum;
	    char l[]="L";
	    strcpy(Q[quadindex].res,strcat(l,p));
	    quadindex++;
      ltop = ltop - 2;
	if(i_[1]!='9')
		i_[1]++;
	else
	{
		i_[1] = '0';
		i_[0]++;
	}
printf("goto L%d\n",lnum);
printf("L%d : \n",x);
Q[quadindex].op = (char*)malloc(sizeof(char)*6);		//a label's quad 	
	    Q[quadindex].arg1 = NULL;
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(lnum + 2));   //lum + 2 is a safe way to have enough space for L0, L1, ... etc. 
	    strcpy(Q[quadindex].op,"Label");
	    char y[10];
		y[0] = '0' + x;
	    char m[]="L";
	    strcpy(Q[quadindex].res,strcat(m,y));
	    quadindex++;
label[++ltop]=lnum;
}

void lab3()
{
int y;
y=label[ltop--];
printf("L%d : \n",y);
Q[quadindex].op = (char*)malloc(sizeof(char)*6);
	    Q[quadindex].arg1 = NULL;
	    Q[quadindex].arg2 = NULL;
	    Q[quadindex].res = (char*)malloc(sizeof(char)*(y+2));
	    strcpy(Q[quadindex].op,"Label");
	    char x[10];
	    sprintf(x,"%d",y);
	    char l[]="L";
	    strcpy(Q[quadindex].res,strcat(l,x));
	    quadindex++;
}

int main()
{
	yyparse();
	
	if(valid)
  		
	{
		//printf("Parsing successful\n\n\n");
		FILE *filePointer = fopen("icg_output.txt", "w") ;
	if ( filePointer == NULL )
    	{
        	printf( "File failed to open." ) ;
		return;
    	}
	printf("Quadruples\n");
		for(int i=0;i<quadindex;i++)
	{	
	
	if(Q[i].arg1 == NULL)
	{
		Q[i].arg1 = "NULL";
	}
	if(Q[i].arg2 == NULL)
	{
		Q[i].arg2 = "NULL";
	}
        printf("%-8s %-8s %-8s %-6s\n",Q[i].op,Q[i].arg1,Q[i].arg2,Q[i].res);
	char str[100]= "";
	snprintf(str,sizeof(str),"%s %s %s %s",Q[i].op,Q[i].arg1,Q[i].arg2,Q[i].res);
	if ( strlen (  str  ) > 0 )
        {
              
            // writing in the file using fputs()
            fputs(str, filePointer) ;   
            fputs("\n", filePointer) ;
        }
	
    }
//	printf("%s",LineBreaker);
	fclose(filePointer) ;

	/*char str[100]= "";
	snprintf(str,sizeof(str),"%s %s %s %s",Q[i].op,Q[i].arg1,Q[i].arg2,Q[i].res);
	if ( strlen (  str  ) > 0 )
        {
              
            // writing in the file using fputs()
            fputs(str, filePointer) ;   
            fputs("\n", filePointer) ;
        }
	
    }*/
}	
	else
	{
  		printf("Parsing unsuccessful\n\n\n");
	}

	return 0;
}
