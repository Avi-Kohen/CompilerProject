/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yaccy.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashtable.c"
typedef struct node {
	char *token;
	struct node *left;
	struct node *right;
} node;
node *nodeMaker(char *token, node *left, node *right);
void printtree(struct node *tree, int tab);
#define YYSTYPE struct node *	
int yylex();
int yyerror(char*);
void checkAll();
HashTable** hash;
StackNode** stack;
StackNode** reversedStack;
char* type;
char* kind;
char* help_type;
char* assign_type;
Ht_item* help_item;

#line 96 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    BOOL = 258,
    CHAR = 259,
    STRING = 260,
    INT = 261,
    REAL = 262,
    IF = 263,
    WHILE = 264,
    FOR = 265,
    VAR = 266,
    RETURN = 267,
    NONE = 268,
    VOID = 269,
    DO = 270,
    COMMA = 271,
    ABS = 272,
    BOOLVAR = 273,
    CHARVAR = 274,
    INTVAR = 275,
    REALVAR = 276,
    STRINGVAR = 277,
    MAIN = 278,
    IDENT = 279,
    ASSIGN = 280,
    GREATER = 281,
    GREATEREQ = 282,
    LESS = 283,
    LESSEQ = 284,
    EQ = 285,
    NOTEQ = 286,
    AND = 287,
    OR = 288,
    NOT = 289,
    PLUSPLUS = 290,
    MINUSMINUS = 291,
    PLUS = 292,
    MINUS = 293,
    STAR = 294,
    DIV = 295,
    ELSE = 296
  };
#endif
/* Tokens.  */
#define BOOL 258
#define CHAR 259
#define STRING 260
#define INT 261
#define REAL 262
#define IF 263
#define WHILE 264
#define FOR 265
#define VAR 266
#define RETURN 267
#define NONE 268
#define VOID 269
#define DO 270
#define COMMA 271
#define ABS 272
#define BOOLVAR 273
#define CHARVAR 274
#define INTVAR 275
#define REALVAR 276
#define STRINGVAR 277
#define MAIN 278
#define IDENT 279
#define ASSIGN 280
#define GREATER 281
#define GREATEREQ 282
#define LESS 283
#define LESSEQ 284
#define EQ 285
#define NOTEQ 286
#define AND 287
#define OR 288
#define NOT 289
#define PLUSPLUS 290
#define MINUSMINUS 291
#define PLUS 292
#define MINUS 293
#define STAR 294
#define DIV 295
#define ELSE 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

#define YYUNDEFTOK  2
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    20,     2,
      46,    47,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    48,     2,     2,     2,     2,
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
      15,    16,    17,    21,    22,    23,    24,    25,    26,    27,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    58,    59,    60,    61,    61,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    75,    74,    76,
      78,    78,    79,    81,    82,    83,    83,    84,    86,    86,
      87,    89,    90,    92,    93,    94,    95,    97,    97,    98,
      98,    99,   100,   101,   101,   102,   106,   107,   108,   109,
     111,   112,   112,   113,   117,   119,   120,   120,   122,   123,
     123,   125,   126,   126,   127,   127,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   137,   138,   138,   139,   139,
     141,   142,   142,   143,   143,   146,   147,   149,   150,   152,
     153,   154,   155,   156,   160,   161,   163,   164,   165,   166,
     167,   170,   171,   172,   173,   174,   175,   176,   178,   179,
     181,   182,   183,   184,   186,   187
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "CHAR", "STRING", "INT", "REAL",
  "IF", "WHILE", "FOR", "VAR", "RETURN", "NONE", "VOID", "DO", "COMMA",
  "ABS", "'['", "']'", "'&'", "BOOLVAR", "CHARVAR", "INTVAR", "REALVAR",
  "STRINGVAR", "MAIN", "IDENT", "';'", "ASSIGN", "GREATER", "GREATEREQ",
  "LESS", "LESSEQ", "EQ", "NOTEQ", "AND", "OR", "NOT", "PLUSPLUS",
  "MINUSMINUS", "PLUS", "MINUS", "STAR", "DIV", "'{'", "'('", "')'", "'}'",
  "ELSE", "$accept", "s", "START", "CODE", "FUNC", "$@1", "TYPE",
  "FUNCDEC", "$@2", "PARAMSLIST", "PARAMSDEC", "VARDECLIST", "VARDEC",
  "$@3", "ARRIDLIST", "ARRID", "IDENTLIST", "CMPSTATEMENT",
  "STATEMENTLIST", "STATEMENT", "$@4", "$@5", "EXPRSTATEMENT", "EXPR",
  "ASSIGNEXPR", "$@6", "CONDITIONEXPR", "OREXPR", "$@7", "ANDEXPR", "$@8",
  "EQEXPR", "$@9", "$@10", "RELATIONEXPR", "$@11", "$@12", "$@13", "$@14",
  "ADDITIVEEXPR", "$@15", "$@16", "MULTIPLICATIVEEXPR", "$@17", "$@18",
  "CASTEXPR", "UNARYEXPR", "UNARYOP", "EXPRLIST", "POSTFIX", "PRIMARYEXPR",
  "SELECTSTATEMENT", "ITRSTATEMENT", "JMPSTATEMENT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    91,    93,
      38,   273,   274,   275,   276,   277,   278,   279,    59,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   123,    40,    41,   125,   296
};
# endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     117,  -117,   -36,  -117,     5,    34,  -117,     9,  -117,   117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,    39,    59,    35,
      42,   143,  -117,  -117,   117,    55,    81,   117,   290,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,   194,  -117,   182,  -117,   221,  -117,    35,    58,  -117,
      -2,  -117,  -117,    67,    56,   -19,    64,    46,   -10,  -117,
    -117,   326,    23,    14,  -117,  -117,   101,   -16,  -117,   115,
      43,  -117,   335,  -117,  -117,    21,    87,  -117,    88,     1,
    -117,  -117,   253,  -117,  -117,  -117,    90,    91,    35,  -117,
     335,  -117,   102,   104,   107,   108,   116,   113,   118,   114,
     112,   119,   126,   128,   335,  -117,  -117,  -117,  -117,   262,
     134,   129,  -117,   144,   117,  -117,   136,    55,   137,   -12,
     101,  -117,   335,  -117,   335,  -117,   335,   299,   164,  -117,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,  -117,   127,   156,   335,   149,  -117,   158,  -117,
     150,    33,    36,  -117,  -117,   -11,   299,   133,    56,   -19,
      64,    64,    46,    46,    46,    46,   -10,   -10,  -117,  -117,
    -117,   151,  -117,  -117,  -117,  -117,   146,  -117,    35,     0,
     335,   335,    33,  -117,    35,    44,    -8,  -117,  -117,  -117,
      35,   154,  -117,  -117
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    10,    13,    11,    12,     8,     0,     2,     3,
       5,     6,    14,    16,    15,     1,     4,     0,     0,     0,
      17,    43,     7,    19,     0,     0,     0,     0,     0,    89,
     106,   104,   105,   103,   102,   101,    46,    93,    91,    92,
      90,     0,    33,    43,    24,    43,    37,     0,     0,    41,
       0,    48,    50,    54,    55,    58,    61,    66,    75,    80,
      85,     0,    87,    96,    42,    45,     0,     0,    20,     0,
       0,    29,     0,    25,   114,     0,     0,    95,     0,    96,
      35,    23,    43,    34,    38,    40,     0,     0,     0,    44,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    96,    97,    98,     0,
       0,     0,    31,    22,     0,    18,     0,     0,     0,     0,
       0,   115,     0,   107,     0,    36,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,    21,     0,    28,
       0,    43,     0,    86,    94,     0,     0,     0,    57,    60,
      63,    65,    68,    70,    72,    74,    77,    79,    82,    84,
     100,     0,    52,    32,    30,    27,   108,    26,     0,     0,
       0,     0,    43,   110,     0,     0,     0,    53,   109,   112,
       0,     0,   113,   111
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,  -117,   174,  -117,   -21,  -117,  -117,  -117,
      78,  -117,   153,  -117,  -117,    94,    92,   -46,   170,   -32,
    -117,  -117,  -116,   -28,   -39,  -117,  -117,  -117,  -117,    96,
    -117,   100,  -117,  -117,    -7,  -117,  -117,  -117,  -117,   -34,
    -117,  -117,    -9,  -117,  -117,  -112,   161,  -117,   125,    60,
     -23,  -117,  -117,  -117
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    17,    11,    19,    24,    67,
      68,    43,    44,   120,    70,    71,   113,    22,    45,    46,
      47,    48,    49,    50,    51,   111,    52,    53,    92,    54,
      93,    55,    94,    95,    56,    96,    97,    98,    99,    57,
     100,   101,    58,   102,   103,    59,    60,    61,    78,    62,
      63,    64,    89,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,    85,    77,    66,    90,    90,    73,    12,    90,    15,
     153,   156,   114,    84,    90,   -62,   -64,   124,    79,   110,
      76,    30,    31,    32,    33,    34,    91,    35,   168,   169,
     -51,   115,   110,   -81,   -83,   151,   178,    90,   106,   191,
     179,    26,   128,   -51,   119,    28,   104,   184,    13,   121,
      84,   129,   146,    29,    30,    31,    32,    33,    34,   117,
      35,    36,   107,   108,   177,    77,    18,    86,    87,   109,
      77,    37,   118,    88,    38,    39,    40,    14,   -39,    41,
      21,    79,    69,   107,   108,   154,    79,   -76,   -78,    23,
     109,   190,   -59,    66,   -67,   -71,   -69,   -73,   155,   106,
     162,   163,   164,   165,   -56,    20,   172,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   176,
       1,     2,     3,     4,     5,   160,   161,    72,   112,   166,
     167,     6,   183,   116,   122,   123,   126,   127,   189,   130,
     131,   132,   187,   133,   192,   135,   134,   137,    25,   136,
     188,    26,   186,   138,    27,    28,   106,   144,   145,   148,
     146,   139,   150,    29,    30,    31,    32,    33,    34,   140,
      35,    36,   141,   157,   170,   171,   173,   174,   175,   180,
     181,    37,   193,    16,    38,    39,    40,    25,   -39,    41,
      26,    42,   147,    27,    28,   182,    81,     1,     2,     3,
       4,     5,    29,    30,    31,    32,    33,    34,     6,    35,
      36,   149,   152,    82,    29,    30,    31,    32,    33,    34,
      37,    35,   105,    38,    39,    40,   158,   -39,    41,    26,
      80,   159,    37,    28,   143,    38,    39,    40,     0,   185,
      41,    29,    30,    31,    32,    33,    34,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    26,    38,    39,    40,    28,   -39,    41,     0,    83,
       0,     0,     0,    29,    30,    31,    32,    33,    34,     0,
      35,    36,    29,    30,    31,    32,    33,    34,     0,    35,
       0,    37,     0,     0,    38,    39,    40,     0,   -39,    41,
      37,   125,     0,    38,    39,    40,     0,     0,    41,   142,
      29,    30,    31,    32,    33,    34,     0,    35,    74,    29,
      30,    31,    32,    33,    34,     0,    35,    36,    37,     0,
       0,    38,    39,    40,     0,     0,    41,    37,     0,     0,
      38,    39,    40,     0,     0,    41,    29,    30,    31,    32,
      33,    34,     0,    35,     0,    29,    30,    31,    32,    33,
      34,     0,    35,     0,    37,     0,     0,    38,    39,    40,
       0,     0,   104,    37,     0,     0,    38,    39,    40,     0,
       0,    41
};

static const yytype_int16 yycheck[] =
{
      28,    47,    41,    24,    16,    16,    27,    43,    16,     0,
     122,   127,    28,    45,    16,    34,    35,    16,    41,    18,
      41,    21,    22,    23,    24,    25,    28,    27,   140,   141,
      29,    47,    18,    43,    44,    47,    47,    16,    61,    47,
     156,     8,    88,    29,    72,    12,    46,    47,    43,    28,
      82,    90,    16,    20,    21,    22,    23,    24,    25,    16,
      27,    28,    39,    40,    28,   104,    27,     9,    10,    46,
     109,    38,    29,    15,    41,    42,    43,    43,    45,    46,
      45,   104,    27,    39,    40,   124,   109,    41,    42,    47,
      46,    47,    36,   114,    30,    31,    32,    33,   126,   122,
     134,   135,   136,   137,    37,    46,   145,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   151,
       3,     4,     5,     6,     7,   132,   133,    46,    27,   138,
     139,    14,   178,    18,    47,    47,    46,    46,   184,    37,
      36,    34,   181,    35,   190,    32,    30,    33,     5,    31,
     182,     8,   180,    41,    11,    12,   179,    23,    29,    23,
      16,    42,    25,    20,    21,    22,    23,    24,    25,    43,
      27,    28,    44,     9,    47,    19,    27,    19,    28,    46,
      29,    38,    28,     9,    41,    42,    43,     5,    45,    46,
       8,    48,   114,    11,    12,    49,    43,     3,     4,     5,
       6,     7,    20,    21,    22,    23,    24,    25,    14,    27,
      28,   117,   120,    43,    20,    21,    22,    23,    24,    25,
      38,    27,    61,    41,    42,    43,   130,    45,    46,     8,
      48,   131,    38,    12,   109,    41,    42,    43,    -1,   179,
      46,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,     8,    41,    42,    43,    12,    45,    46,    -1,    48,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    38,    -1,    -1,    41,    42,    43,    -1,    45,    46,
      38,    48,    -1,    41,    42,    43,    -1,    -1,    46,    47,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    38,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    46,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    38,    -1,    -1,    41,    42,    43,
      -1,    -1,    46,    38,    -1,    -1,    41,    42,    43,    -1,
      -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    14,    51,    52,    53,
      54,    56,    43,    43,    43,     0,    54,    55,    27,    57,
      46,    45,    67,    47,    58,     5,     8,    11,    12,    20,
      21,    22,    23,    24,    25,    27,    28,    38,    41,    42,
      43,    46,    48,    61,    62,    68,    69,    70,    71,    72,
      73,    74,    76,    77,    79,    81,    84,    89,    92,    95,
      96,    97,    99,   100,   101,   103,    56,    59,    60,    27,
      64,    65,    46,    56,    28,    73,    56,    74,    98,   100,
      48,    62,    68,    48,    69,    67,     9,    10,    15,   102,
      16,    28,    78,    80,    82,    83,    85,    86,    87,    88,
      90,    91,    93,    94,    46,    96,   100,    39,    40,    46,
      18,    75,    27,    66,    28,    47,    18,    16,    29,    73,
      63,    28,    47,    47,    16,    48,    46,    46,    67,    74,
      37,    36,    34,    35,    30,    32,    31,    33,    41,    42,
      43,    44,    47,    98,    23,    29,    16,    60,    23,    65,
      25,    47,    66,    95,    74,    73,    72,     9,    79,    81,
      84,    84,    89,    89,    89,    89,    92,    92,    95,    95,
      47,    19,    74,    27,    19,    28,    69,    28,    47,    72,
      46,    29,    49,    67,    47,    99,    73,    74,    69,    67,
      47,    47,    67,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    53,    53,    55,    54,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    58,    57,    57,
      59,    59,    60,    61,    61,    63,    62,    62,    64,    64,
      65,    66,    66,    67,    67,    67,    67,    68,    68,    70,
      69,    69,    69,    71,    69,    69,    72,    72,    73,    73,
      74,    75,    74,    74,    76,    77,    78,    77,    79,    80,
      79,    81,    82,    81,    83,    81,    84,    85,    84,    86,
      84,    87,    84,    88,    84,    89,    90,    89,    91,    89,
      92,    93,    92,    94,    92,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    98,    98,    99,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     102,   102,   102,   102,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     0,     5,     3,
       1,     3,     2,     2,     1,     0,     5,     5,     3,     1,
       4,     1,     3,     2,     3,     3,     4,     1,     2,     0,
       2,     1,     1,     0,     2,     1,     1,     2,     1,     3,
       1,     0,     4,     6,     1,     1,     0,     4,     1,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       1,     0,     4,     0,     4,     1,     4,     1,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     2,     3,
       4,     1,     1,     1,     1,     1,     1,     3,     5,     7,
       5,     7,     6,     7,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 57 "yaccy.y"
         {printtree(yyvsp[0], 0);push_another(reversedStack,pop(stack));print_hashtable(*hash); print_stack(*stack);checkAll(reversedStack,*hash);}
#line 1584 "y.tab.c"
    break;

  case 3:
#line 58 "yaccy.y"
             {yyval = nodeMaker ("CODE",yyvsp[0],NULL); }
#line 1590 "y.tab.c"
    break;

  case 4:
#line 59 "yaccy.y"
                {yyval = nodeMaker ("",yyvsp[-1],yyvsp[0]); }
#line 1596 "y.tab.c"
    break;

  case 5:
#line 60 "yaccy.y"
            {yyval = nodeMaker ("",yyvsp[0],NULL); }
#line 1602 "y.tab.c"
    break;

  case 6:
#line 61 "yaccy.y"
           {strcpy(kind,"function");}
#line 1608 "y.tab.c"
    break;

  case 7:
#line 61 "yaccy.y"
                                                           {yyval = nodeMaker ("FUNC",yyvsp[-3],nodeMaker("",yyvsp[-1],nodeMaker("BODY",yyvsp[0],NULL)));push_another(reversedStack,pop(stack));}
#line 1614 "y.tab.c"
    break;

  case 8:
#line 64 "yaccy.y"
           {yyval = nodeMaker ( "VOID",NULL,NULL); strcpy(type,"void");}
#line 1620 "y.tab.c"
    break;

  case 9:
#line 65 "yaccy.y"
           {yyval = nodeMaker ( "BOOL",NULL,NULL); strcpy(type,"bool");}
#line 1626 "y.tab.c"
    break;

  case 10:
#line 66 "yaccy.y"
           {yyval = nodeMaker ( "CHAR",NULL,NULL); strcpy(type,"char");}
#line 1632 "y.tab.c"
    break;

  case 11:
#line 67 "yaccy.y"
          {yyval = nodeMaker ( "INT",NULL,NULL); strcpy(type,"int");}
#line 1638 "y.tab.c"
    break;

  case 12:
#line 68 "yaccy.y"
           {yyval = nodeMaker ( "REAL",NULL,NULL); strcpy(type,"real");}
#line 1644 "y.tab.c"
    break;

  case 13:
#line 69 "yaccy.y"
            {yyval = nodeMaker ( "CHAR POINTER",NULL,NULL); strcpy(type,"string");}
#line 1650 "y.tab.c"
    break;

  case 14:
#line 70 "yaccy.y"
                {yyval = nodeMaker ( "CHAR POINTER",NULL,NULL); strcpy(type,"char pointer");}
#line 1656 "y.tab.c"
    break;

  case 15:
#line 71 "yaccy.y"
                {yyval = nodeMaker ( "REAL POINTER",NULL,NULL); strcpy(type,"real pointer");}
#line 1662 "y.tab.c"
    break;

  case 16:
#line 72 "yaccy.y"
               {yyval = nodeMaker ( "INT POINTER",NULL,NULL); strcpy(type,"int pointer");}
#line 1668 "y.tab.c"
    break;

  case 17:
#line 75 "yaccy.y"
             {addItem(*hash,*stack,yyvsp[-1]->token,currScope,type,kind);push(stack,NULL); kind = strcat(yyvsp[-1]->token," Parameter");}
#line 1674 "y.tab.c"
    break;

  case 18:
#line 75 "yaccy.y"
                                                                                                                                            {yyval = nodeMaker ("",yyvsp[-4],nodeMaker("PARAMETERS",yyvsp[-1],NULL));}
#line 1680 "y.tab.c"
    break;

  case 19:
#line 76 "yaccy.y"
                       {yyval = nodeMaker ("",nodeMaker(yyvsp[-2]->token,NULL,NULL),NULL);addItem(*hash,*stack,yyvsp[-2]->token,currScope,type,kind);push(stack,NULL); }
#line 1686 "y.tab.c"
    break;

  case 20:
#line 78 "yaccy.y"
                      {yyval = nodeMaker ("",yyvsp[0],NULL); }
#line 1692 "y.tab.c"
    break;

  case 21:
#line 78 "yaccy.y"
                                                                                {yyval = nodeMaker ("",yyvsp[-2],yyvsp[0]); }
#line 1698 "y.tab.c"
    break;

  case 22:
#line 79 "yaccy.y"
                          {yyval = nodeMaker ("",yyvsp[-1],yyvsp[0]);}
#line 1704 "y.tab.c"
    break;

  case 23:
#line 81 "yaccy.y"
                              {yyval = nodeMaker ("",yyvsp[-1],yyvsp[0]); }
#line 1710 "y.tab.c"
    break;

  case 24:
#line 82 "yaccy.y"
                        {yyval = nodeMaker ("",yyvsp[0],NULL); }
#line 1716 "y.tab.c"
    break;

  case 25:
#line 83 "yaccy.y"
                  {strcpy(kind,"variable");}
#line 1722 "y.tab.c"
    break;

  case 26:
#line 83 "yaccy.y"
                                                           {yyval = nodeMaker ("",yyvsp[-3],yyvsp[-1]); }
#line 1728 "y.tab.c"
    break;

  case 27:
#line 84 "yaccy.y"
                                                {yyval = nodeMaker ("",nodeMaker("",nodeMaker("STRING",NULL,NULL),yyvsp[-2]),nodeMaker("ASSIGN",yyvsp[0],NULL)); }
#line 1734 "y.tab.c"
    break;

  case 30:
#line 87 "yaccy.y"
                            {addItem(*hash,*stack,yyvsp[-3]->token,currScope,type,"Array");}
#line 1740 "y.tab.c"
    break;

  case 31:
#line 89 "yaccy.y"
                 {yyval = nodeMaker ("",yyvsp[0],NULL); addItem(*hash,*stack,yyvsp[0]->token,currScope,type,kind);}
#line 1746 "y.tab.c"
    break;

  case 32:
#line 90 "yaccy.y"
                               {yyval = nodeMaker ("",yyvsp[-2],yyvsp[0]); addItem(*hash,*stack,yyvsp[0]->token,currScope,type,kind);}
#line 1752 "y.tab.c"
    break;

  case 33:
#line 92 "yaccy.y"
                      {yyval = nodeMaker ("{EMPTY}",NULL,NULL); }
#line 1758 "y.tab.c"
    break;

  case 34:
#line 93 "yaccy.y"
                                {yyval = nodeMaker ("{",yyvsp[-1],nodeMaker("}",NULL,NULL)); }
#line 1764 "y.tab.c"
    break;

  case 35:
#line 94 "yaccy.y"
                             {yyval = nodeMaker ("{",nodeMaker("VARDEC",yyvsp[-2],NULL),nodeMaker("}",NULL,NULL)); }
#line 1770 "y.tab.c"
    break;

  case 36:
#line 95 "yaccy.y"
                                            {yyval = nodeMaker ("{",nodeMaker("VARDEC",yyvsp[-2],NULL),yyvsp[-1]); }
#line 1776 "y.tab.c"
    break;

  case 37:
#line 97 "yaccy.y"
                        {yyval = nodeMaker ("",yyvsp[0],NULL); }
#line 1782 "y.tab.c"
    break;

  case 38:
#line 97 "yaccy.y"
                                                                                 {yyval = nodeMaker ("",yyvsp[-1],yyvsp[0]); }
#line 1788 "y.tab.c"
    break;

  case 39:
#line 98 "yaccy.y"
          {push(stack,NULL);}
#line 1794 "y.tab.c"
    break;

  case 40:
#line 98 "yaccy.y"
                                           {yyval = nodeMaker ("",yyvsp[0],NULL);push_another(reversedStack,pop(stack));}
#line 1800 "y.tab.c"
    break;

  case 41:
#line 99 "yaccy.y"
                        {yyval = nodeMaker ("",yyvsp[0],NULL); }
#line 1806 "y.tab.c"
    break;

  case 42:
#line 100 "yaccy.y"
                          {yyval = nodeMaker ("",yyvsp[0],NULL); }
#line 1812 "y.tab.c"
    break;

  case 43:
#line 101 "yaccy.y"
          {push(stack,NULL);}
#line 1818 "y.tab.c"
    break;

  case 44:
#line 101 "yaccy.y"
                                          {yyval = nodeMaker ("",yyvsp[0],NULL);push_another(reversedStack,pop(stack));}
#line 1824 "y.tab.c"
    break;

  case 45:
#line 102 "yaccy.y"
                       {yyval = nodeMaker ("",yyvsp[0],NULL); }
#line 1830 "y.tab.c"
    break;

  case 47:
#line 107 "yaccy.y"
                          {yyval =nodeMaker("",yyvsp[-1],NULL);}
#line 1836 "y.tab.c"
    break;

  case 48:
#line 108 "yaccy.y"
                {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 1842 "y.tab.c"
    break;

  case 49:
#line 109 "yaccy.y"
                                {yyval =nodeMaker("",yyvsp[-2],yyvsp[0]);}
#line 1848 "y.tab.c"
    break;

  case 50:
#line 111 "yaccy.y"
                         {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 1854 "y.tab.c"
    break;

  case 51:
#line 112 "yaccy.y"
                        {strcpy(assign_type,type); }
#line 1860 "y.tab.c"
    break;

  case 52:
#line 112 "yaccy.y"
                                                                        {yyval =nodeMaker("ASSIGN",yyvsp[-3],nodeMaker("",NULL,yyvsp[0]));checkType(assign_type,&type,"assign");}
#line 1866 "y.tab.c"
    break;

  case 53:
#line 113 "yaccy.y"
                                                           {yyval =nodeMaker("ASSIGN",yyvsp[-5],nodeMaker("",NULL,yyvsp[-3]));}
#line 1872 "y.tab.c"
    break;

  case 54:
#line 117 "yaccy.y"
                     {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 1878 "y.tab.c"
    break;

  case 55:
#line 119 "yaccy.y"
               {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 1884 "y.tab.c"
    break;

  case 56:
#line 120 "yaccy.y"
              {strcpy(help_type,type);}
#line 1890 "y.tab.c"
    break;

  case 57:
#line 120 "yaccy.y"
                                                  {yyval =nodeMaker("OR",yyvsp[-3],yyvsp[0]);checkType(help_type,&type,"OR");strcpy(type,"bool");}
#line 1896 "y.tab.c"
    break;

  case 58:
#line 122 "yaccy.y"
                {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 1902 "y.tab.c"
    break;

  case 59:
#line 123 "yaccy.y"
                  {strcpy(help_type,type);}
#line 1908 "y.tab.c"
    break;

  case 60:
#line 123 "yaccy.y"
                                                      {yyval =nodeMaker("AND",yyvsp[-3],yyvsp[0]);checkType(help_type,&type,"AND");strcpy(type,"bool");}
#line 1914 "y.tab.c"
    break;

  case 61:
#line 125 "yaccy.y"
                    {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 1920 "y.tab.c"
    break;

  case 62:
#line 126 "yaccy.y"
                 {strcpy(help_type,type);}
#line 1926 "y.tab.c"
    break;

  case 63:
#line 126 "yaccy.y"
                                                           {yyval =nodeMaker("EQUAL",yyvsp[-3],yyvsp[0]);checkType(help_type,&type,"equal");strcpy(type,"bool");}
#line 1932 "y.tab.c"
    break;

  case 64:
#line 127 "yaccy.y"
                 {strcpy(help_type,type);}
#line 1938 "y.tab.c"
    break;

  case 65:
#line 127 "yaccy.y"
                                                              {yyval =nodeMaker("NOT EQUAL",yyvsp[-3],yyvsp[0]);checkType(help_type,&type,"not equal");strcpy(type,"bool");}
#line 1944 "y.tab.c"
    break;

  case 66:
#line 129 "yaccy.y"
                          {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 1950 "y.tab.c"
    break;

  case 67:
#line 130 "yaccy.y"
                       {strcpy(help_type,type);}
#line 1956 "y.tab.c"
    break;

  case 68:
#line 130 "yaccy.y"
                                                                      {yyval =nodeMaker("",yyvsp[-3],nodeMaker("",nodeMaker(">",NULL,NULL),yyvsp[0]));checkType(help_type,&type,"AND");strcpy(type,"GREATER");}
#line 1962 "y.tab.c"
    break;

  case 69:
#line 131 "yaccy.y"
                       {strcpy(help_type,type);}
#line 1968 "y.tab.c"
    break;

  case 70:
#line 131 "yaccy.y"
                                                                    {yyval =nodeMaker("",yyvsp[-3],nodeMaker("",nodeMaker("<",NULL,NULL),yyvsp[0]));checkType(help_type,&type,"AND");strcpy(type,"LESS");}
#line 1974 "y.tab.c"
    break;

  case 71:
#line 132 "yaccy.y"
                       {strcpy(help_type,type);}
#line 1980 "y.tab.c"
    break;

  case 72:
#line 132 "yaccy.y"
                                                                         {yyval =nodeMaker("",nodeMaker("",yyvsp[-3],NULL),nodeMaker("",nodeMaker(">=",NULL,NULL),yyvsp[0]));checkType(help_type,&type,"GREATEREQ");strcpy(type,"bool");}
#line 1986 "y.tab.c"
    break;

  case 73:
#line 133 "yaccy.y"
                       {strcpy(help_type,type);}
#line 1992 "y.tab.c"
    break;

  case 74:
#line 133 "yaccy.y"
                                                                     {yyval =nodeMaker("",nodeMaker("",yyvsp[-3],NULL),nodeMaker("",nodeMaker("<=",NULL,NULL),yyvsp[0])); checkType(help_type,&type,"LESSEQ");strcpy(type,"bool");  }
#line 1998 "y.tab.c"
    break;

  case 75:
#line 137 "yaccy.y"
                                 {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 2004 "y.tab.c"
    break;

  case 76:
#line 138 "yaccy.y"
                            {strcpy(help_type,type);}
#line 2010 "y.tab.c"
    break;

  case 77:
#line 138 "yaccy.y"
                                                                              {yyval =nodeMaker("",yyvsp[-3],nodeMaker("",nodeMaker("+",NULL,NULL),yyvsp[0]));checkType(help_type,&type,"PLUS");}
#line 2016 "y.tab.c"
    break;

  case 78:
#line 139 "yaccy.y"
                           {strcpy(help_type,type);}
#line 2022 "y.tab.c"
    break;

  case 79:
#line 139 "yaccy.y"
                                                                              {yyval =nodeMaker("",nodeMaker("",yyvsp[-3],NULL),nodeMaker("",nodeMaker("-",NULL,NULL),yyvsp[0]));checkType(help_type,&type,"MINUS");}
#line 2028 "y.tab.c"
    break;

  case 80:
#line 141 "yaccy.y"
                            {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 2034 "y.tab.c"
    break;

  case 81:
#line 142 "yaccy.y"
                                             {strcpy(help_type,type);}
#line 2040 "y.tab.c"
    break;

  case 82:
#line 142 "yaccy.y"
                                                                                     {yyval =nodeMaker("",nodeMaker("",yyvsp[-3],NULL),nodeMaker("",nodeMaker("*",NULL,NULL),yyvsp[0]));checkType(help_type,&type,"multiply");}
#line 2046 "y.tab.c"
    break;

  case 83:
#line 143 "yaccy.y"
                                             {strcpy(help_type,type);}
#line 2052 "y.tab.c"
    break;

  case 84:
#line 143 "yaccy.y"
                                                                                    {yyval =nodeMaker("",nodeMaker("",yyvsp[-3],NULL),nodeMaker("",nodeMaker("/",NULL,NULL),yyvsp[0]));checkType(help_type,&type,"div");}
#line 2058 "y.tab.c"
    break;

  case 85:
#line 146 "yaccy.y"
                   {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 2064 "y.tab.c"
    break;

  case 86:
#line 147 "yaccy.y"
                                {yyval =nodeMaker("(",nodeMaker("",yyvsp[-2],nodeMaker(")",NULL,NULL)),yyvsp[0]);}
#line 2070 "y.tab.c"
    break;

  case 87:
#line 149 "yaccy.y"
                  {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 2076 "y.tab.c"
    break;

  case 88:
#line 150 "yaccy.y"
                            {yyval =nodeMaker("",yyvsp[-1],yyvsp[0]);}
#line 2082 "y.tab.c"
    break;

  case 89:
#line 152 "yaccy.y"
             {yyval =nodeMaker("&",NULL,NULL);}
#line 2088 "y.tab.c"
    break;

  case 90:
#line 153 "yaccy.y"
               {yyval =nodeMaker("*",NULL,NULL);}
#line 2094 "y.tab.c"
    break;

  case 91:
#line 154 "yaccy.y"
               {yyval =nodeMaker("+",NULL,NULL);}
#line 2100 "y.tab.c"
    break;

  case 92:
#line 155 "yaccy.y"
                {yyval =nodeMaker("-",NULL,NULL);}
#line 2106 "y.tab.c"
    break;

  case 93:
#line 156 "yaccy.y"
              {yyval =nodeMaker("NOT",NULL,NULL);}
#line 2112 "y.tab.c"
    break;

  case 94:
#line 160 "yaccy.y"
                                       {yyval =nodeMaker("",yyvsp[-2],yyvsp[0]);}
#line 2118 "y.tab.c"
    break;

  case 95:
#line 161 "yaccy.y"
                                            {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 2124 "y.tab.c"
    break;

  case 96:
#line 163 "yaccy.y"
                    {yyval =nodeMaker("",yyvsp[0],NULL);}
#line 2130 "y.tab.c"
    break;

  case 97:
#line 164 "yaccy.y"
                                   {yyval= nodeMaker("++",yyvsp[-1],NULL);}
#line 2136 "y.tab.c"
    break;

  case 98:
#line 165 "yaccy.y"
                                    {yyval= nodeMaker("++",yyvsp[-1],NULL);}
#line 2142 "y.tab.c"
    break;

  case 99:
#line 166 "yaccy.y"
                                 {yyval= nodeMaker("FUNC CALL",yyvsp[-2],NULL);}
#line 2148 "y.tab.c"
    break;

  case 100:
#line 167 "yaccy.y"
                                          {yyval= nodeMaker("FUNC CALL",yyvsp[-3],yyvsp[-2]);}
#line 2154 "y.tab.c"
    break;

  case 101:
#line 170 "yaccy.y"
                  {yyval =nodeMaker(yyvsp[0]->token,NULL,NULL);help_item=checkID(*hash,yyvsp[0]->token);copy_type(&type,help_item);}
#line 2160 "y.tab.c"
    break;

  case 102:
#line 171 "yaccy.y"
                            {yyval =nodeMaker(yyvsp[0]->token,NULL,NULL);strcpy(type,"string");}
#line 2166 "y.tab.c"
    break;

  case 103:
#line 172 "yaccy.y"
                          {yyval =nodeMaker(yyvsp[0]->token,NULL,NULL);strcpy(type,"real");}
#line 2172 "y.tab.c"
    break;

  case 104:
#line 173 "yaccy.y"
                          {yyval =nodeMaker(yyvsp[0]->token,NULL,NULL);strcpy(type,"char");}
#line 2178 "y.tab.c"
    break;

  case 105:
#line 174 "yaccy.y"
                         {yyval =nodeMaker(yyvsp[0]->token,NULL,NULL);strcpy(type,"int");}
#line 2184 "y.tab.c"
    break;

  case 106:
#line 175 "yaccy.y"
                         {yyval =nodeMaker(yyvsp[0]->token,NULL,NULL);strcpy(type,"bool");}
#line 2190 "y.tab.c"
    break;

  case 107:
#line 176 "yaccy.y"
                                 {yyval =nodeMaker("( )",yyvsp[-1],NULL);}
#line 2196 "y.tab.c"
    break;

  case 108:
#line 178 "yaccy.y"
                                                   {yyval = nodeMaker ("",nodeMaker("IF",yyvsp[-2],yyvsp[0]),NULL); }
#line 2202 "y.tab.c"
    break;

  case 109:
#line 179 "yaccy.y"
                                                           {yyval = nodeMaker ("",nodeMaker("IF",yyvsp[-4],yyvsp[-2]),nodeMaker("ELSE",yyvsp[0],NULL)); }
#line 2208 "y.tab.c"
    break;

  case 110:
#line 181 "yaccy.y"
                                             {yyval = nodeMaker ("WHILE",yyvsp[-2],yyvsp[0]); }
#line 2214 "y.tab.c"
    break;

  case 111:
#line 182 "yaccy.y"
                                                         {yyval = nodeMaker ("",nodeMaker("DO",yyvsp[-5],NULL),nodeMaker("WHILE",yyvsp[-2],NULL)); }
#line 2220 "y.tab.c"
    break;

  case 114:
#line 186 "yaccy.y"
                         {yyval = nodeMaker ("RETURN EMPTY",NULL,NULL); }
#line 2226 "y.tab.c"
    break;

  case 115:
#line 187 "yaccy.y"
                          {yyval = nodeMaker ("RETURN",yyvsp[-1],NULL); }
#line 2232 "y.tab.c"
    break;


#line 2236 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 189 "yaccy.y"

#include "lex.yy.c"
int main(){
	hash = (HashTable**)malloc(sizeof(HashTable*));
	stack = (StackNode**)malloc(sizeof(StackNode*));
	reversedStack = (StackNode**)malloc(sizeof(StackNode*));
	*hash = create_table(CAPACITY);
    *stack = newNode(NULL);
	help_type = (char*)malloc(sizeof(char)*100);
	assign_type = (char*)malloc(sizeof(char)*100);
	type = (char*)malloc(sizeof(char)*100);
	kind = (char*)malloc(sizeof(char)*100);
    return yyparse();
}


node *nodeMaker    (char *token, node *left, node *right){
	
    node *newnode = (node*)malloc (sizeof(node));
    char    *newstr = (char*)malloc (sizeof(token)+1);
    strcpy (newstr, token);
    newnode -> left = left;
    newnode -> right = right;
    newnode -> token = newstr;
    return newnode;
}

void printtree (node *tree, int tab){
    int i; 
    if(strcmp(tree->token,"")){
    for (i = 0; i< tab; i++)
        printf ("\t");
    char* token = tree->token;
    printf ("%s\n", token
	);
    }else tab-=1;
    if (tree -> left)
        printtree (tree-> left, tab + 1); 
    if (tree -> right)
        printtree (tree-> right, tab + 1 ); 
}

int yyerror(char* s){
    printf ("%s: at line %d found token [%s]\n", s, count, yytext);
    return 0;
}

