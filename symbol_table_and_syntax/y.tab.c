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


typedef struct node{
      int scope;
      int value;
      char name[100];
      char dtype[50];
      int line_num;
      int valid;
}node;

typedef struct table{
      node* head;
}table;
// int count = 0;
extern node symTable[1000];


extern int yylineno;
int valid=1;
int yylex();
int yyerror(const char *s);
extern int SymTable[100];
extern char tdType[50];
extern int t_scope;
extern int dflag;
extern int count;
extern void displaySymTable();
extern int find(int  t_scope, char *yytext);
extern void update(char* name, int value, int scope);
extern int insert(int* idx, int scope, char* dtype, char* val, int line_num);
extern void decrScope();


#line 106 "y.tab.c" /* yacc.c:339  */

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
    T_min = 272,
    T_mul = 273,
    T_div = 274,
    T_and = 275,
    T_or = 276,
    T_incr = 277,
    T_decr = 278,
    T_not = 279,
    T_eq = 280,
    WHILE = 281,
    INT = 282,
    CHAR = 283,
    FLOAT = 284,
    BOOL = 285,
    True = 286,
    False = 287,
    VOID = 288,
    H = 289,
    MAINTOK = 290,
    INCLUDE = 291,
    BREAK = 292,
    CONTINUE = 293,
    IF = 294,
    ELSE = 295,
    COUT = 296,
    STRING = 297,
    FOR = 298,
    DO = 299,
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
#define T_min 272
#define T_mul 273
#define T_div 274
#define T_and 275
#define T_or 276
#define T_incr 277
#define T_decr 278
#define T_not 279
#define T_eq 280
#define WHILE 281
#define INT 282
#define CHAR 283
#define FLOAT 284
#define BOOL 285
#define True 286
#define False 287
#define VOID 288
#define H 289
#define MAINTOK 290
#define INCLUDE 291
#define BREAK 292
#define CONTINUE 293
#define IF 294
#define ELSE 295
#define COUT 296
#define STRING 297
#define FOR 298
#define DO 299
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

#line 255 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   654

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

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
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    54,    55,    61,    62,    66,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    83,    84,
      85,    86,    87,    92,    93,    94,    95,    99,   100,   101,
     102,   103,   104,   109,   110,   111,   112,   113,   114,   115,
     116,   121,   129,   147,   157,   166,   174,   182,   189,   197,
     207,   220,   221,   222,   235,   247,   251,   264,   267,   270,
     273,   279,   284,   285,   286,   287,   288,   289,   293,   298,
     299,   300,   301,   302,   305,   306,   307,   308,   311,   312,
     313,   314,   315,   316,   336,   337,   341,   344,   350
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "T_lt", "T_gt", "COMMA",
  "STRC", "TERMINATOR", "RETURN", "FLT", "T_lteq", "T_gteq", "T_neq",
  "T_eqeq", "T_pl", "T_min", "T_mul", "T_div", "T_and", "T_or", "T_incr",
  "T_decr", "T_not", "T_eq", "WHILE", "INT", "CHAR", "FLOAT", "BOOL",
  "True", "False", "VOID", "H", "MAINTOK", "INCLUDE", "BREAK", "CONTINUE",
  "IF", "ELSE", "COUT", "STRING", "FOR", "DO", "OB", "CB", "OBR", "CBR",
  "ENDL", "'\"'", "'?'", "':'", "$accept", "S", "START", "MAIN", "BODY",
  "C", "LOOPS", "LOOPBODY", "statement", "COND", "ASSIGN_EXPR", "X",
  "ARITH_EXPR", "ARITH_NEW", "TERNARY_EXPR", "PRINT", "LIT", "TYPE",
  "RELOP", "bin_boolop", "un_arop", "un_boolop", YY_NULLPTR
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

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,  -127,     2,    12,  -127,   -20,    -7,  -127,    10,   -21,
     -12,   -12,     3,     7,  -127,  -127,    -3,    -3,   219,  -127,
    -127,    40,    26,  -127,   582,  -127,  -127,  -127,  -127,     8,
    -127,  -127,  -127,  -127,  -127,  -127,    16,    50,  -127,    27,
     517,   612,   123,   288,  -127,    68,  -127,   236,  -127,  -127,
    -127,   261,    71,   596,   596,  -127,   596,  -127,   236,   612,
     612,    83,   160,  -127,   171,    55,    82,  -127,    52,   108,
     552,  -127,   334,    93,   219,  -127,  -127,    98,  -127,   596,
     596,   596,   596,  -127,  -127,   596,  -127,    59,   236,   236,
     236,    63,    69,   264,    26,   102,  -127,   380,    73,  -127,
      74,  -127,  -127,  -127,  -127,  -127,  -127,   175,   175,   175,
     265,   219,    87,   426,  -127,    22,    22,  -127,  -127,   236,
     113,   596,   517,   517,    30,  -127,   216,   612,  -127,   612,
     550,    65,  -127,    91,   175,   472,  -127,  -127,    76,  -127,
     141,  -127,    79,   125,   131,   129,    95,    92,   175,  -127,
     175,  -127,   113,   596,   113,   517,    90,    94,   550,   147,
     550,   265,   115,  -127,   220,  -127,  -127,  -127,  -127,   127,
    -127,  -127,   175,  -127,   113,   517,  -127,  -127,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     2,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     7,
       6,     0,    68,    69,     0,    70,    86,    87,    88,     0,
      74,    75,    76,    77,    72,    73,     0,     0,    71,     0,
       0,     0,     0,     0,    12,     0,    27,    28,    51,    29,
      30,    50,     0,     0,     0,    17,     0,    31,    32,     0,
       0,     0,     0,    24,     0,     0,     0,    68,     0,    34,
       0,    15,     0,     0,     0,     8,    10,     0,    11,     0,
       0,     0,     0,    84,    85,     0,    53,    43,    54,    55,
      41,     0,     0,     0,     0,     0,    26,     0,     0,    25,
       0,    78,    79,    80,    81,    82,    83,     0,     0,     0,
      40,     0,    11,     0,     9,    57,    58,    59,    60,    52,
       0,     0,     0,     0,    71,    64,    66,     0,    23,     0,
       0,    33,    38,     0,     0,    14,    16,    13,    47,    44,
      42,    18,    21,     0,     0,     0,     0,     0,     0,    39,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    49,    45,    22,    63,    65,     0,
      20,    61,     0,    36,     0,     0,    35,    48,    19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,   158,   159,   -31,   -35,  -105,   -18,   -54,
     -15,  -126,   -22,  -127,  -127,  -127,   -40,  -127,   -97,   -66,
     126,   -37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    14,    19,    43,    44,    65,    66,    68,
      46,   139,    47,    48,    49,    50,    51,    52,   107,    85,
      53,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    69,    58,   108,    70,    91,    92,     5,    76,    57,
       1,    72,     7,   134,     8,    12,    10,   141,   142,    69,
      69,    13,    70,    70,    73,    77,   163,     9,   165,    11,
     110,    88,    89,    97,    90,   143,   150,    76,    16,   -62,
      81,    82,    17,   113,    18,     2,    45,    95,   177,    55,
     166,    56,     6,    59,    77,    61,    45,   115,   116,   117,
     118,    60,    76,   119,   172,   148,   120,   131,   132,   133,
     178,   126,    62,   145,    87,   146,   -62,    78,    76,    77,
     135,    98,   -62,   152,   121,    83,    84,    69,    93,    69,
      70,    99,    70,    45,   151,    77,   101,   102,   100,   140,
      76,   153,   112,   103,   104,   105,   106,   114,   161,   122,
     162,   127,   147,   101,   102,   123,   138,    77,   129,   155,
     103,   104,   105,   106,    21,   130,    22,    23,    83,    84,
     156,   164,   176,    24,    25,   136,   157,   149,   158,   167,
     169,   159,   171,   168,   160,    26,    27,    28,   154,    29,
      30,    31,    32,    33,    34,    35,   170,    79,    80,    81,
      82,   173,    36,    94,    37,    38,    39,    40,    41,    15,
      42,    71,    21,   175,    22,    23,    20,    86,    67,    23,
       0,    24,    25,     0,     0,     0,    25,    30,    31,    32,
      33,     0,     0,    26,    27,    28,     0,    29,    30,    31,
      32,    33,    34,    35,     0,     0,    34,    35,     0,     0,
      36,     0,    37,    38,    39,    40,    41,    38,    42,    96,
      21,   144,    22,    23,     0,     0,     0,   174,     0,    24,
      25,     0,    79,    80,    81,    82,    79,    80,    81,    82,
       0,    26,    27,    28,     0,    29,    30,    31,    32,    33,
      34,    35,    79,    80,    81,    82,     0,     0,    36,     0,
      37,    38,    39,    40,    41,     0,    42,    67,    23,     0,
     101,   102,     0,     0,     0,    25,     0,   103,   104,   105,
     106,    83,    84,    26,    27,     0,    26,    27,    28,     0,
       0,    22,    23,     0,     0,    34,    35,     0,    24,    25,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
      26,    27,    28,   125,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,    36,     0,    37,
      38,    39,    40,    41,     0,    74,    75,    22,    23,     0,
       0,     0,     0,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,     0,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    36,     0,    37,    38,    39,    40,    41,
       0,    74,   111,    22,    23,     0,     0,     0,     0,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,     0,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,    39,    40,    41,     0,    74,   128,    22,
      23,     0,     0,     0,     0,     0,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,     0,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,    36,     0,    37,    38,    39,
      40,    41,     0,    74,   137,    22,    23,     0,     0,     0,
       0,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,    28,     0,    29,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,    39,    40,    41,     0,    74,
      22,    23,     0,     0,     0,     0,    63,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,     0,     0,    30,    31,    32,    33,    34,    35,
       0,     0,     0,    22,    23,    67,    23,     0,    37,    38,
      24,    25,    41,    25,    64,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,     0,     0,    30,    31,    32,
      33,    34,    35,    34,    35,    22,    23,     0,     0,     0,
       0,    37,    38,    25,    38,    41,     0,   109,     0,    67,
      23,     0,     0,     0,    26,    27,    28,    25,     0,    30,
      31,    32,    33,    34,    35,    67,    23,     0,    26,    27,
      28,     0,     0,    25,    38,     0,     0,    34,    35,     0,
       0,     0,     0,     0,     0,     0,    28,     0,    38,     0,
       0,     0,     0,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38
};

static const yytype_int16 yycheck[] =
{
      18,    41,    24,    69,    41,    59,    60,     5,    43,    24,
       1,    42,     0,   110,    34,    27,     6,   122,   123,    59,
      60,    33,    59,    60,    42,    43,   152,    34,   154,    50,
      70,    53,    54,    64,    56,     5,   133,    72,    35,     9,
      18,    19,    35,    74,    47,    36,    64,    62,   174,     9,
     155,    25,    50,    45,    72,     5,    74,    79,    80,    81,
      82,    45,    97,    85,   161,   131,     7,   107,   108,   109,
     175,    93,    45,   127,     3,   129,    46,     9,   113,    97,
     111,    26,    52,     7,    25,    20,    21,   127,     5,   129,
     127,     9,   129,   111,   134,   113,     5,     6,    46,   121,
     135,    25,     9,    12,    13,    14,    15,     9,   148,    46,
     150,     9,   130,     5,     6,    46,     3,   135,    45,    40,
      12,    13,    14,    15,     1,    51,     3,     4,    20,    21,
       5,   153,   172,    10,    11,    48,     5,    46,     9,    49,
     158,    46,   160,    49,    52,    22,    23,    24,     7,    26,
      27,    28,    29,    30,    31,    32,     9,    16,    17,    18,
      19,    46,    39,     3,    41,    42,    43,    44,    45,    11,
      47,    48,     1,    46,     3,     4,    17,    51,     3,     4,
      -1,    10,    11,    -1,    -1,    -1,    11,    27,    28,    29,
      30,    -1,    -1,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    31,    32,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    42,    47,    48,
       1,     5,     3,     4,    -1,    -1,    -1,     7,    -1,    10,
      11,    -1,    16,    17,    18,    19,    16,    17,    18,    19,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    32,    16,    17,    18,    19,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    47,     3,     4,    -1,
       5,     6,    -1,    -1,    -1,    11,    -1,    12,    13,    14,
      15,    20,    21,    22,    23,    -1,    22,    23,    24,    -1,
      -1,     3,     4,    -1,    -1,    31,    32,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      22,    23,    24,    49,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    -1,    47,    48,     3,     4,    -1,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    47,    48,     3,     4,    -1,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,    47,    48,     3,
       4,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,    -1,    47,    48,     3,     4,    -1,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    47,
       3,     4,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    -1,     3,     4,     3,     4,    -1,    41,    42,
      10,    11,    45,    11,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,    32,    31,    32,     3,     4,    -1,    -1,    -1,
      -1,    41,    42,    11,    42,    45,    -1,    45,    -1,     3,
       4,    -1,    -1,    -1,    22,    23,    24,    11,    -1,    27,
      28,    29,    30,    31,    32,     3,     4,    -1,    22,    23,
      24,    -1,    -1,    11,    42,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    42,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    36,    54,    55,     5,    50,     0,    34,    34,
       6,    50,    27,    33,    56,    56,    35,    35,    47,    57,
      57,     1,     3,     4,    10,    11,    22,    23,    24,    26,
      27,    28,    29,    30,    31,    32,    39,    41,    42,    43,
      44,    45,    47,    58,    59,    61,    63,    65,    66,    67,
      68,    69,    70,    73,    74,     9,    25,    63,    65,    45,
      45,     5,    45,     9,    47,    60,    61,     3,    62,    69,
      74,    48,    58,    61,    47,    48,    59,    61,     9,    16,
      17,    18,    19,    20,    21,    72,    73,     3,    65,    65,
      65,    62,    62,     5,     3,    63,    48,    58,    26,     9,
      46,     5,     6,    12,    13,    14,    15,    71,    72,    45,
      69,    48,     9,    58,     9,    65,    65,    65,    65,    65,
       7,    25,    46,    46,    42,    49,    65,     9,    48,    45,
      51,    69,    69,    69,    71,    58,    48,    48,     3,    64,
      65,    60,    60,     5,     5,    62,    62,    61,    72,    46,
      71,    69,     7,    25,     7,    40,     5,     5,     9,    46,
      52,    69,    69,    64,    65,    64,    60,    49,    49,    61,
       9,    61,    71,    46,     7,    46,    69,    64,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    67,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    71,    72,    72,    73,    73,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     5,     5,     3,     3,     3,     3,
       2,     2,     1,     4,     4,     2,     4,     2,     5,     9,
       7,     5,     7,     3,     1,     2,     2,     1,     1,     1,
       1,     2,     2,     3,     1,     7,     6,     4,     3,     4,
       2,     3,     4,     2,     4,     6,     3,     1,     5,     3,
       1,     1,     3,     2,     2,     2,     1,     3,     3,     3,
       3,     7,     4,     7,     4,     7,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 49 "parse.y" /* yacc.c:1646  */
    {printf("Successful parsing.\n");displaySymTable();exit(0);}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "parse.y" /* yacc.c:1646  */
    { yyerrok; yyclearin;}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 121 "parse.y" /* yacc.c:1646  */
    {
      //printf("sadfasdfd\n");
        if (find(t_scope, (yyvsp[-2])) == -1) {
          yyerror("variable not declared");
        }
      update((yyvsp[-2]), (yyvsp[0]), t_scope);
    }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 129 "parse.y" /* yacc.c:1646  */
    {
	if(find(t_scope,(yyvsp[-2])) > 0)
{
	yyerror("Variable redeclared");
}

        else if((find(t_scope, (yyvsp[-2])) == -1) && !insert(&count, t_scope, (yyvsp[-3]), (yyvsp[-2]), yylineno))
	{	//printf("Hel");
              yyerror("Variable declared");
}
       
	else
	{ 	update((yyvsp[-2]), (yyvsp[0]), t_scope);
		//printf("Helo");
	}	
      }
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "parse.y" /* yacc.c:1646  */
    {
	if(find(t_scope,(yyvsp[0])) > 0)
	{
		yyerror("Variable redeclared");
	}	

         else if(!insert(&count, t_scope, (yyvsp[-1]), (yyvsp[0]), yylineno)) {
          yyerror("variable declared");
        }
	}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 157 "parse.y" /* yacc.c:1646  */
    {
        strcpy(tdType, (yyvsp[-3]));
        dflag = 1;

       if (!insert(&count, t_scope, (yyvsp[-3]), (yyvsp[-2]), yylineno)) {
          yyerror("Variable redeclared");
        }
}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 166 "parse.y" /* yacc.c:1646  */
    {
        strcpy(tdType, (yyvsp[-5]));
        dflag = 1;
        if (!insert(&count, t_scope, (yyvsp[-5]), (yyvsp[-4]), yylineno)){
          yyerror("Variable redeclared");
        }}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 174 "parse.y" /* yacc.c:1646  */
    {
 if (!insert(&count, t_scope, (yyvsp[-2]), (yyvsp[-1]), yylineno)) {
          yyerror("Variable redeclared");
        }
    //yyerror("Variable redeclared");
  }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 182 "parse.y" /* yacc.c:1646  */
    {
    if(!insert(&count, t_scope, tdType, (yyvsp[0]), yylineno)){
          yyerror("Variable redeclared");
        }
      //yyerror("Variable redeclared");
    }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 189 "parse.y" /* yacc.c:1646  */
    {
    if(!insert(&count, t_scope, (yyvsp[-4]), (yyvsp[-3]), yylineno)) {
          yyerror("Variable redeclared");
        }
      //yyerror("Variable redeclared");
    
    update((yyvsp[-4]), atoi((yyvsp[-2])), t_scope);
  }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 197 "parse.y" /* yacc.c:1646  */
    {
    if (!insert(&count, t_scope, (yyvsp[-2]), (yyvsp[-1]), yylineno)) {
          yyerror("Variable redeclared");
        }
      //yyerror("Variable redeclared");
    
    update((yyvsp[-2]), atoi((yyvsp[0])), t_scope);
  }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 207 "parse.y" /* yacc.c:1646  */
    {
            int val;
            if(atoi((yyvsp[0]))){
                  val = atoi((yyvsp[0]));
            }
            else{
                  int idx = find(t_scope, (yyvsp[0]));
                  val = symTable[idx].value;
                  
            } 
            (yyval) = val;
          
      }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 220 "parse.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "parse.y" /* yacc.c:1646  */
    {
            int val;
            if(atoi((yyvsp[-1]))){
                  yyerror("needs an lvalue");
            }
            else{
                  int idx = find(t_scope, (yyvsp[-1]));
                  val = symTable[idx].value;
                  update((yyvsp[-1]), val+1, t_scope);                  
            } 
            (yyval) = val;
            
      }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 235 "parse.y" /* yacc.c:1646  */
    {
            int val;
            if(atoi((yyvsp[0]))){
                  yyerror("needs an lvalue");
            }
            else{
                  int idx = find(t_scope, (yyvsp[0]));
                  val = symTable[idx].value + 1;
                  update((yyvsp[0]), val+1, t_scope);                  
            } 
            (yyval) = val;
      }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 251 "parse.y" /* yacc.c:1646  */
    {
            int val;
            if(atoi((yyvsp[0]))){
                  val = atoi((yyvsp[0]));
            }
		else
            {
                  int idx = find(t_scope, (yyvsp[0]));
                  val = symTable[idx].value;
                  
            } 
            (yyval) = val; 
      }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 264 "parse.y" /* yacc.c:1646  */
    {
            (yyval) = (int)(yyvsp[-2]) + (int)(yyvsp[0]);
      }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 267 "parse.y" /* yacc.c:1646  */
    {
            (yyval) = (int)(yyvsp[-2]) - (int)(yyvsp[0]);
      }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 270 "parse.y" /* yacc.c:1646  */
    {
            (yyval) = (int)(yyvsp[-2]) * (int)(yyvsp[0]);
      }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 273 "parse.y" /* yacc.c:1646  */
    {
            (yyval) = (int)(yyvsp[-2]) / (int)(yyvsp[0]);
      }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 293 "parse.y" /* yacc.c:1646  */
    {
        if (find(t_scope, (yyvsp[0])) == -1) {
            yyerror("variable not declared");
        }
      }
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 341 "parse.y" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
      }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 344 "parse.y" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
      }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1812 "y.tab.c" /* yacc.c:1646  */
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
#line 352 "parse.y" /* yacc.c:1906  */


#include <ctype.h>
int yyerror(const char *s)
{
  	extern int yylineno;
  	valid =0;
  	printf("\n\nERROR: line number: %d - error: %s\n\n",yylineno,s);

}

int main()
{
	t_scope=0;
	count=0;
	yyparse();
	if(valid)
  		printf("Parsing successful\n\n\n");
	else
	{
  		printf("Parsing unsuccessful\n\n\n");
	}
	displaySymTable();
	return 0;
}
