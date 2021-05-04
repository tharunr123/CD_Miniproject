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

typedef struct astnode{
  int isID;
  int scope;
  int entry;
  char *name;
  int numChildren;
  struct astnode** children;
}astnode;

#define YYSTYPE struct astnode*
extern YYSTYPE yylval;

int valid = 1;

astnode* addToTree(char *op, astnode *left,astnode *right, astnode** siblings, int lenSiblings);
void setScopeAndPtr(astnode* node, int scope, int ptr);

void printTree(astnode *tree);

int yyerror(const char *s);
extern int yylineno;

extern node symTable[100];
extern char tdType[50];
extern int t_scope;
extern int dflag;
extern int count;
extern void displaySymTable();
extern int find(int  t_scope, char *yytext);
extern void update(char* name, int value, int scope);
extern int insert(int* idx, int scope, char* dtype, char* val, int line_num);
extern void decrScope();

#line 118 "y.tab.c" /* yacc.c:339  */

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
    S_mul = 273,
    S_add = 274,
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
    DO = 286,
    INT = 287,
    CHAR = 288,
    FLOAT = 289,
    VOID = 290,
    H = 291,
    MAINTOK = 292,
    INCLUDE = 293,
    BREAK = 294,
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
#define S_mul 273
#define S_add 274
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
#define DO 286
#define INT 287
#define CHAR 288
#define FLOAT 289
#define VOID 290
#define H 291
#define MAINTOK 292
#define INCLUDE 293
#define BREAK 294
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

#line 267 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   373

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

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
       0,    59,    59,    64,    71,    72,    78,    79,    86,    93,
      99,   105,   111,   117,   122,   123,   127,   132,   135,   145,
     159,   163,   164,   168,   174,   175,   176,   177,   178,   179,
     180,   184,   203,   206,   209,   210,   211,   212,   213,   214,
     219,   231,   245,   256,   270,   284,   296,   307,   319,   333,
     334,   337,   340,   343,   346,   353,   358,   362,   368,   373,
     378,   384,   393,   398,   399,   400,   403,   404,   405,   406,
     407,   408,   413,   414,   415,   416,   420,   421,   425,   426,
     430,   434,   435,   436,   437
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "T_lt", "T_gt", "COMMA",
  "STRC", "TERMINATOR", "RETURN", "FLT", "T_lteq", "T_gteq", "T_neq",
  "T_eqeq", "T_pl", "S_min", "S_mul", "S_add", "S_div", "T_min", "T_mul",
  "T_div", "T_and", "T_or", "T_incr", "T_decr", "T_not", "T_eq", "WHILE",
  "DO", "INT", "CHAR", "FLOAT", "VOID", "H", "MAINTOK", "INCLUDE", "BREAK",
  "CONTINUE", "IF", "ELSE", "COUT", "STRING", "OB", "CB", "OBR", "CBR",
  "ENDL", "'\"'", "'?'", "':'", "$accept", "S", "START", "MAIN", "BODY",
  "C", "LOOPS", "LOOPBODY", "statement", "SUGAR_OPS", "COND",
  "ASSIGN_EXPR", "X", "ARITH_EXPR", "TERNARY_EXPR", "PRINT", "LIT", "TYPE",
  "RELOP", "bin_arop", "bin_boolop", "un_arop", "un_boolop", "s_ops", YY_NULLPTR
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

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -95,     1,    16,   -95,    -6,     8,   -95,    48,    12,
      13,    13,    36,    40,   -95,   -95,    37,    37,   134,   -95,
     -95,    76,   154,   -95,    79,   -95,   -95,   -95,   290,   -95,
     -95,   -95,    41,    82,    31,   134,   160,   -95,    81,   -95,
     -95,   -95,   -95,   -95,   346,    89,   126,   126,   -95,   -95,
     -95,   -95,   -95,   126,   126,    65,   -95,   -95,   -95,   100,
      67,    86,    31,    94,   -95,    56,   340,     4,   186,   134,
     -95,   -95,   105,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     126,   126,   -95,    17,   -95,   -95,   -95,   -95,   -95,   212,
      64,   -95,    70,    14,    66,   -95,   -95,   -95,   -95,   -95,
     -95,    11,    11,    11,   144,   -95,   238,   -95,   -95,   -95,
     116,   126,   -95,    31,   290,   115,   -95,   118,   316,    51,
     -95,     7,    11,   -95,    18,   -95,   117,    90,    83,   135,
     137,    87,    11,   -95,    11,   -95,   116,   126,   116,   142,
     264,    97,   106,   316,   144,   123,   -95,   169,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,    11,   -95,   116,   -95,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     2,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     7,
       6,     0,    61,    62,     0,    78,    79,    80,     0,    63,
      64,    65,     0,     0,     0,     0,     0,    12,     0,    27,
      24,    25,    26,    28,    49,     0,     0,     0,    15,    83,
      81,    82,    84,     0,     0,    61,    29,    30,    21,     0,
       0,     0,     0,     0,    61,     0,    33,     0,     0,     0,
       8,    10,     0,    11,    72,    73,    74,    75,    76,    77,
       0,     0,    52,    42,    53,    54,    40,    31,    23,     0,
       0,    22,     0,     0,     0,    66,    67,    68,    69,    70,
      71,     0,     0,     0,    39,    14,     0,     9,    50,    51,
       0,     0,    20,     0,     0,    56,    58,    60,     0,    32,
      37,     0,     0,    13,    46,    43,    41,     0,    17,     0,
       0,     0,     0,    38,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    48,    44,    16,
      19,    18,    57,    59,    55,     0,    35,     0,    34,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   167,   163,     2,   -32,   -88,   -25,   -95,
     -57,   158,   -66,   -15,   -95,   -95,   -34,   -95,   -94,   -95,
     -64,   140,   -33,   -95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    14,    19,    36,    37,    60,    38,    39,
      65,    40,   125,    41,    42,    43,    44,    45,   101,    80,
      81,    46,    47,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      66,    67,   102,    61,    71,    92,     5,    64,    23,    57,
     122,    72,    95,    96,    64,    23,     7,    64,    23,    97,
      98,    99,   100,     1,   110,   136,   128,   134,    66,    67,
       8,    84,    85,   104,    64,    23,    71,    68,    86,    87,
      25,    26,    27,    72,     9,    12,   111,   137,    13,   103,
     155,     6,   151,   133,    10,   132,   127,    71,   115,    27,
       2,    89,    11,   116,    72,   108,   109,   119,   120,   121,
     146,   106,   148,    16,    71,    78,    79,    17,   117,    66,
      67,    72,    55,    23,    18,    48,    62,    63,   135,    61,
      73,   159,    83,   131,    53,    91,   126,    90,   144,    93,
     145,    21,    94,    22,    23,    25,    26,    27,   150,   113,
      24,    29,    30,    31,   107,    61,   114,   118,   154,   124,
     129,   158,   147,   130,   138,   140,    25,    26,    27,    64,
      23,    28,    29,    30,    31,    21,   139,    22,    23,   143,
     141,    32,   142,    33,    24,    34,   152,    35,    88,    95,
      96,   149,    25,    26,    27,   153,    97,    98,    99,   100,
      25,    26,    27,    22,    23,    28,    29,    30,    31,   156,
      24,    49,    50,    51,    52,    32,   157,    33,    15,    34,
      20,    35,    56,    53,    82,     0,    25,    26,    27,    22,
      23,    28,    29,    30,    31,     0,    24,     0,     0,     0,
       0,    32,     0,    33,     0,    34,     0,    69,    70,     0,
       0,     0,    25,    26,    27,    22,    23,    28,    29,    30,
      31,     0,    24,     0,     0,     0,     0,    32,     0,    33,
       0,    34,     0,    69,   105,     0,     0,     0,    25,    26,
      27,    22,    23,    28,    29,    30,    31,     0,    24,     0,
       0,     0,     0,    32,     0,    33,     0,    34,     0,    69,
     112,     0,     0,     0,    25,    26,    27,    22,    23,    28,
      29,    30,    31,    58,    24,     0,     0,     0,     0,    32,
       0,    33,     0,    34,     0,    69,   123,     0,     0,     0,
      25,    26,    27,    22,    23,    28,    29,    30,    31,    58,
      24,     0,     0,     0,     0,    32,     0,    33,     0,    34,
       0,    59,     0,     0,     0,     0,    25,    26,    27,    22,
      23,     0,    29,    30,    31,     0,    24,     0,     0,     0,
       0,     0,     0,    33,     0,    34,     0,    59,     0,     0,
       0,     0,    25,    26,    27,    95,    96,     0,    29,    30,
      31,     0,    97,    98,    99,   100,     0,     0,     0,    33,
       0,    34,    74,     0,    78,    79,     0,    75,    76,    77,
      78,    79,    25,    26
};

static const yytype_int16 yycheck[] =
{
      34,    34,    66,    28,    36,    62,     5,     3,     4,    24,
     104,    36,     5,     6,     3,     4,     0,     3,     4,    12,
      13,    14,    15,     1,     7,     7,   114,   121,    62,    62,
      36,    46,    47,    67,     3,     4,    68,    35,    53,    54,
      26,    27,    28,    68,    36,    32,    29,    29,    35,    45,
     144,    50,   140,    46,     6,   119,   113,    89,    44,    28,
      38,    59,    50,    49,    89,    80,    81,   101,   102,   103,
     136,    69,   138,    37,   106,    24,    25,    37,    93,   113,
     113,   106,     3,     4,    47,     9,    45,     5,   122,   114,
       9,   157,     3,   118,    29,     9,   111,    30,   132,     5,
     134,     1,    46,     3,     4,    26,    27,    28,   140,    45,
      10,    32,    33,    34,     9,   140,    46,    51,   143,     3,
       5,   155,   137,     5,     7,    42,    26,    27,    28,     3,
       4,    31,    32,    33,    34,     1,    46,     3,     4,    52,
       5,    41,     5,    43,    10,    45,    49,    47,    48,     5,
       6,     9,    26,    27,    28,    49,    12,    13,    14,    15,
      26,    27,    28,     3,     4,    31,    32,    33,    34,    46,
      10,    17,    18,    19,    20,    41,     7,    43,    11,    45,
      17,    47,    24,    29,    44,    -1,    26,    27,    28,     3,
       4,    31,    32,    33,    34,    -1,    10,    -1,    -1,    -1,
      -1,    41,    -1,    43,    -1,    45,    -1,    47,    48,    -1,
      -1,    -1,    26,    27,    28,     3,     4,    31,    32,    33,
      34,    -1,    10,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    48,    -1,    -1,    -1,    26,    27,
      28,     3,     4,    31,    32,    33,    34,    -1,    10,    -1,
      -1,    -1,    -1,    41,    -1,    43,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    26,    27,    28,     3,     4,    31,
      32,    33,    34,     9,    10,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      26,    27,    28,     3,     4,    31,    32,    33,    34,     9,
      10,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,    26,    27,    28,     3,
       4,    -1,    32,    33,    34,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    26,    27,    28,     5,     6,    -1,    32,    33,
      34,    -1,    12,    13,    14,    15,    -1,    -1,    -1,    43,
      -1,    45,    16,    -1,    24,    25,    -1,    21,    22,    23,
      24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    38,    54,    55,     5,    50,     0,    36,    36,
       6,    50,    32,    35,    56,    56,    37,    37,    47,    57,
      57,     1,     3,     4,    10,    26,    27,    28,    31,    32,
      33,    34,    41,    43,    45,    47,    58,    59,    61,    62,
      64,    66,    67,    68,    69,    70,    74,    75,     9,    17,
      18,    19,    20,    29,    76,     3,    64,    66,     9,    47,
      60,    61,    45,     5,     3,    63,    69,    75,    58,    47,
      48,    59,    61,     9,    16,    21,    22,    23,    24,    25,
      72,    73,    74,     3,    66,    66,    66,    66,    48,    58,
      30,     9,    63,     5,    46,     5,     6,    12,    13,    14,
      15,    71,    73,    45,    69,    48,    58,     9,    66,    66,
       7,    29,    48,    45,    46,    44,    49,    66,    51,    69,
      69,    69,    71,    48,     3,    65,    66,    63,    60,     5,
       5,    61,    73,    46,    71,    69,     7,    29,     7,    46,
      42,     5,     5,    52,    69,    69,    65,    66,    65,     9,
      59,    60,    49,    49,    61,    71,    46,     7,    69,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    57,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    59,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    67,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    70,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     5,     5,     3,     3,     3,     3,
       2,     2,     1,     4,     3,     2,     7,     5,     7,     7,
       3,     1,     2,     2,     1,     1,     1,     1,     1,     2,
       2,     3,     3,     1,     7,     6,     4,     3,     4,     2,
       3,     4,     2,     4,     6,     3,     1,     5,     3,     1,
       3,     3,     2,     2,     2,     7,     4,     7,     4,     7,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 59 "parse.y" /* yacc.c:1646  */
    {
        printf("\nSuccessful parsing.\n");
        displaySymTable();
        exit(0);
      }
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 64 "parse.y" /* yacc.c:1646  */
    {
         yyerrok;
         yyclearin;
       }
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 79 "parse.y" /* yacc.c:1646  */
    {
        astnode* masternode = addToTree("main", (yyvsp[0]), NULL, NULL, 0);
        printTree(masternode);
      }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 86 "parse.y" /* yacc.c:1646  */
    {
        (yyval) = (yyvsp[-1]);
      }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 93 "parse.y" /* yacc.c:1646  */
    {
        (yyval) = addToTree("", (yyvsp[-2]), (yyvsp[-1]), NULL, 0);
        printTree((yyvsp[-1]));
        printf("\n");
        printf("------------------------------------------------------------------\n");
      }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 99 "parse.y" /* yacc.c:1646  */
    {
        (yyval) = addToTree("", (yyvsp[-1]), (yyvsp[0]), NULL, 0);
        printTree((yyvsp[0]));
        printf("\n");
        printf("----------------------------------------------------------------\n");
      }
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "parse.y" /* yacc.c:1646  */
    {
        (yyval) = addToTree("", (yyvsp[-1]), NULL, NULL, 0);
        printTree((yyvsp[-1]));
        printf("\n");
        printf("--------------------------------------------------------------------\n");
      }
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 111 "parse.y" /* yacc.c:1646  */
    {
        (yyval) = addToTree("", (yyvsp[0]), NULL, NULL, 0);
        printTree((yyvsp[0]));
        printf("\n");
        printf("----------------------------------------------------------------\n");
      }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 117 "parse.y" /* yacc.c:1646  */
    {
        printTree((yyvsp[-1]));
        printf("\n");
        printf("----------------------------------------------------------------\n");
      }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 127 "parse.y" /* yacc.c:1646  */
    {
        (yyval) = addToTree("do-while", (yyvsp[-5]), (yyvsp[-2]), NULL, 0);
	
      }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 132 "parse.y" /* yacc.c:1646  */
    {
         (yyval) = addToTree("if", (yyvsp[-2]), (yyvsp[0]), NULL, 0);
      }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 135 "parse.y" /* yacc.c:1646  */
    {

            astnode* elsePart = addToTree("else", (yyvsp[0]), NULL, NULL, 0);
            astnode* ifPart = addToTree("if", (yyvsp[-2]), NULL, NULL, 0);

            astnode** siblings = (astnode**) malloc(sizeof(astnode*) * 1);
            siblings[0] = elsePart;

            (yyval) = addToTree("condition", (yyvsp[-4]), ifPart, siblings, 2);
          }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "parse.y" /* yacc.c:1646  */
    {

              astnode* elsePart = addToTree("else", (yyvsp[0]), NULL, NULL, 0);
              astnode* ifPart = addToTree("if", (yyvsp[-2]), NULL, NULL, 0);

              astnode** siblings = (astnode**) malloc(sizeof(astnode*) * 2);
              siblings[0] = elsePart;

              (yyval) = addToTree("condition", (yyvsp[-4]), ifPart, siblings, 2);
        }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "parse.y" /* yacc.c:1646  */
    {
      // printTree($2);
      (yyval) = (yyvsp[-1]);
    }
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 164 "parse.y" /* yacc.c:1646  */
    {
      // printTree($1);
      (yyval) = (yyvsp[-1]);
    }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 168 "parse.y" /* yacc.c:1646  */
    {
      (yyval) = (astnode *) malloc(sizeof(astnode));
    }
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 174 "parse.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 177 "parse.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 184 "parse.y" /* yacc.c:1646  */
    {
          int id =  insert(&count, t_scope, tdType, (yyvsp[-2]), yylineno);
          if(id == -1){
            printf("redeclared: %s\n", (yyvsp[-2]));
            yyerror("Variable redeclared");
          }

          astnode* newnode =addToTree((char*) (yyvsp[-2]), NULL, NULL, NULL, 0);
          setScopeAndPtr(newnode, t_scope, id);
          char temp[] = "";
          char ch = ((char*)(yyvsp[-1]))[0];
          strncat(temp, &ch, 1);
          astnode* rhs = addToTree((char*)temp, newnode, (yyvsp[0]), NULL, 0);
          (yyval) = addToTree("=", newnode, rhs, NULL, 0);
       }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 203 "parse.y" /* yacc.c:1646  */
    {
        (yyval)=addToTree((char *)(yyvsp[-1]),(yyvsp[-2]),(yyvsp[0]), NULL, 0);
      }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 206 "parse.y" /* yacc.c:1646  */
    {
        (yyval)=(yyvsp[0]);
      }
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 220 "parse.y" /* yacc.c:1646  */
    {
        int id = find(t_scope, (yyvsp[-2]));
        if (id == -1) {
          yyerror("variable not declared");
        }
        update((yyvsp[-2]), atoi((yyvsp[0]) -> name), t_scope);

        astnode* newnode =addToTree((char*) (yyvsp[-2]), NULL, NULL, NULL, 0);
        setScopeAndPtr(newnode, -1, id);
        (yyval)=addToTree("=", newnode, (yyvsp[0]), NULL, 0);
      }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 232 "parse.y" /* yacc.c:1646  */
    {
        int id = insert(&count, t_scope, (yyvsp[-3]), (yyvsp[-2]), yylineno);
        if(id == -1)
              yyerror("Variable redeclared");

        update((char *) (yyvsp[-2]), atoi((yyvsp[0]) -> name), t_scope);

        astnode* newnode =addToTree((char*) (yyvsp[-2]), NULL, NULL, NULL, 0);
        setScopeAndPtr(newnode, t_scope, id);
        (yyval) = addToTree("=", newnode , (yyvsp[0]), NULL, 0);
      }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 245 "parse.y" /* yacc.c:1646  */
    {
          int id = insert(&count, t_scope, (yyvsp[-1]), (yyvsp[0]), yylineno);

          if(id == -1)
                yyerror("Variable redeclared");

          astnode* newnode =addToTree((char*) (yyvsp[0]), NULL, NULL, NULL, 0);
          setScopeAndPtr(newnode, t_scope, id);
          (yyval)= addToTree("init", newnode, NULL, NULL, 0);
      }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 256 "parse.y" /* yacc.c:1646  */
    {
          strcpy(tdType, (yyvsp[-3]));
          dflag = 1;

          int id = insert(&count, t_scope, (yyvsp[-3]), (yyvsp[-2]), yylineno);
          if(id == -1)
                yyerror("Variable redeclared");


          astnode* newnode =addToTree((char*) (yyvsp[-2]), NULL, NULL, NULL, 0);
          setScopeAndPtr(newnode, t_scope, id);
          (yyval)= addToTree("init", newnode, NULL, NULL, 0);
        }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 270 "parse.y" /* yacc.c:1646  */
    {
        strcpy(tdType, (yyvsp[-5]));
        dflag = 1;
        int id = insert(&count, t_scope, (yyvsp[-5]), (yyvsp[-4]), yylineno);
        if(id == -1)
              yyerror("Variable redeclared");
        update((yyvsp[-4]), atoi((yyvsp[-2]) -> name), t_scope);

        astnode* newnode =addToTree((char*) (yyvsp[-4]), NULL, NULL, NULL, 0);
        setScopeAndPtr(newnode, t_scope, id);
        (yyval)= addToTree("=", newnode, NULL, NULL, 0);
      }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 284 "parse.y" /* yacc.c:1646  */
    {
    int id = insert(&count, t_scope, tdType, (yyvsp[-2]), yylineno);
    if(id == -1){
      printf("redeclared: %s\n", (yyvsp[-2]));
      yyerror("Variable redeclared");
    }

    astnode* newnode =addToTree((char*) (yyvsp[-2]), NULL, NULL, NULL, 0);
    setScopeAndPtr(newnode, t_scope, id);
    (yyval)= addToTree("init", newnode, NULL, NULL, 0);
}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 296 "parse.y" /* yacc.c:1646  */
    {
      int id =  insert(&count, t_scope, tdType, (yyvsp[0]), yylineno);
      if(id == -1){
        printf("redeclared: %s\n", (yyvsp[0]));
        yyerror("Variable redeclared");
      }

      astnode* newnode =addToTree((char*) (yyvsp[0]), NULL, NULL, NULL, 0);
      setScopeAndPtr(newnode, t_scope, id);
      (yyval)= addToTree("init", newnode, NULL, NULL, 0);
  }
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 307 "parse.y" /* yacc.c:1646  */
    {
    int id = insert(&count, t_scope, tdType, (yyvsp[-4]), yylineno);
    if(id == -1){
      printf("redeclared: %s\n", (yyvsp[-4]));
      yyerror("Variable redeclared");
    }
    update((yyvsp[-4]), atoi((yyvsp[-2]) -> name), t_scope);

    astnode* newnode =addToTree((char*) (yyvsp[-4]), NULL, NULL, NULL, 0);
    setScopeAndPtr(newnode, t_scope, id);
    (yyval)= addToTree("=", newnode, (yyvsp[-3]), NULL, 0);
  }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 319 "parse.y" /* yacc.c:1646  */
    {
    int id = insert(&count, t_scope, tdType, (yyvsp[-2]), yylineno);
    if(id == -1){
      printf("redeclared: %s\n", (yyvsp[-2]));
      yyerror("Variable redeclared");
    }
    update((yyvsp[-2]), atoi((yyvsp[0]) -> name), t_scope);

    astnode* newnode =addToTree((char*) (yyvsp[-2]), NULL, NULL, NULL, 0);
    setScopeAndPtr(newnode, t_scope, id);
    (yyval)= addToTree("=", newnode, (yyvsp[-1]), NULL, 0);
  }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 334 "parse.y" /* yacc.c:1646  */
    {
        (yyval)=addToTree((char *) (yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), NULL, 0);
      }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 337 "parse.y" /* yacc.c:1646  */
    {
        (yyval)=addToTree((char *) (yyvsp[-1]), (yyvsp[-2]), (yyvsp[0]), NULL, 0);
      }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 340 "parse.y" /* yacc.c:1646  */
    {
        (yyval)= addToTree((char *) (yyvsp[0]), (yyvsp[-1]), NULL, NULL, 0);
      }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 343 "parse.y" /* yacc.c:1646  */
    {
        (yyval)= addToTree((char *) (yyvsp[-1]), (yyvsp[0]), NULL, NULL, 0);
      }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 346 "parse.y" /* yacc.c:1646  */
    {
        (yyval)= addToTree((char *) (yyvsp[-1]), (yyvsp[0]), NULL, NULL, 0);
      }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 358 "parse.y" /* yacc.c:1646  */
    {
        astnode* x = addToTree((char *) (yyvsp[0]), NULL, NULL, NULL, 0);
        (yyval) = addToTree((char *) (yyvsp[-3]), x, NULL, NULL, 0);
      }
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 362 "parse.y" /* yacc.c:1646  */
    {
        {
          astnode* x = addToTree((char *) (yyvsp[-3]), NULL, NULL, NULL, 0);
          (yyval) = addToTree((char *) (yyvsp[-6]), x, NULL, NULL, 0);
        }
      }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 368 "parse.y" /* yacc.c:1646  */
    {
        astnode* x = addToTree("", NULL, NULL, NULL, 0);
        (yyval) = addToTree((char *) (yyvsp[-3]), x, NULL, NULL, 0);
      }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 373 "parse.y" /* yacc.c:1646  */
    {
	astnode* x = addToTree("", (yyvsp[-3]), NULL, NULL, 0);
        (yyval) = addToTree((char *) (yyvsp[-6]), x, NULL, NULL, 0);
      }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 378 "parse.y" /* yacc.c:1646  */
    {
	astnode* x = addToTree("", (yyvsp[0]), NULL, NULL, 0);
        (yyval) = addToTree((char *) (yyvsp[-3]), x, NULL, NULL, 0);
      }
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 384 "parse.y" /* yacc.c:1646  */
    {
            int id = find(t_scope, (yyvsp[0]));
            if (find == -1) {
                yyerror("variable not declared");
            }
            astnode* newNode = addToTree((char*) (yyvsp[0]), NULL, NULL, NULL, 0);
            setScopeAndPtr(newNode, -1, id);
            (yyval) = newNode;
        }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 393 "parse.y" /* yacc.c:1646  */
    {
        (yyval)=addToTree((char*) (yyvsp[0]), NULL, NULL, NULL, 0);
      }
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1963 "y.tab.c" /* yacc.c:1646  */
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
#line 439 "parse.y" /* yacc.c:1906  */



#include <ctype.h>

// siblings = list of the n sibling nodes, other than the left and right child, to be added to the parent node.
// will useful in the future i guess
astnode* addToTree(char *op,astnode *left,astnode *right, astnode** siblings, int lenSiblings)
{
  //printf("a");
  astnode* new = (astnode*) malloc(sizeof(astnode));
  char *newstr = (char *) malloc(strlen(op)+1);
  strcpy(newstr,op);
  new->name=newstr;
  new->children = (astnode**) malloc(sizeof(astnode*) * (lenSiblings + 2));
  new->children[0] = left;
  new->children[1] = right;
  new->numChildren = lenSiblings + 2;
  if(siblings){
        for(int i = 0; i < lenSiblings; i++){
              new->children[i + 2] = siblings[i];
        }
  }
  return (new);
}

// printing the nodes, need to add bfs logic here.
void printTree(astnode *tree)
{
  //printf("les");
  if(tree){

    if(tree->children[0] || tree->children[1])
    printf("(");
    printf(" %s ",tree->name);
    int i = 0;

    while(i < tree->numChildren){
          printTree(tree->children[i]);
          i++;
    }
    if(tree->children[0] || tree->children[1])
    printf(")");
  }
}

void setScopeAndPtr(astnode* node, int scope, int ptr){
  node -> entry = ptr;
  if(scope > 0) node -> scope = symTable[ptr].scope;
  node -> isID = 1;

  printf("added id: %s with pointing to index %d of the symbol table\n", node -> name, node -> entry);
}

int yyerror(const char *s)
{
  	extern int yylineno;
    valid = 0;
  	printf("\n\nERROR: line number: %d - error: %s\n\n",yylineno,s);
}

int main()
{
	yyparse();
	if(valid)
  		printf("\nParsing successful\n\n\n");
	else
	{
  		printf("Parsing unsuccessful\n\n\n");
	}
	displaySymTable();
	return 0;
}
