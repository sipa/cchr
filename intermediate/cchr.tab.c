/* A Bison parser, made by GNU Bison 3.7.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cchr.y"

/****************************************************************************\
| CCHR - A CHR-in-C to C compiler                                            |
| cchr.y - YACC parser for CHR-in-C code                                     |
| written by Pieter Wuille                                                   |
\****************************************************************************/ 

#ifndef _cchr_y_
#define _cchr_y_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parsestr.h"
#include "cchr.tab.h"

#ifdef USE_EFENCE
#include <efence.h>
#endif

typedef void *yyscan_t;

int static yyerror(YYLTYPE *loc,yyscan_t scanner,cchr_t *output,char *msg);
int yylex ( YYSTYPE * lvalp, YYLTYPE * llocp, yyscan_t scanner );

void cchr_init(cchr_t *cchr);
void cchr_merge(cchr_t *out,cchr_t *in);
void cchr_genrule(cchr_t *cchr,char *name,exprlist_t *kept,exprlist_t *removed,
                  exprlist_t *guard,exprlist_t *body);

#endif

#define YYLEX_PARAM scanner


#line 108 "intermediate/cchr.tab.c"

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

#include "cchr.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_CONSTRAINT = 3,             /* TOK_CONSTRAINT  */
  YYSYMBOL_TOK_TRUE = 4,                   /* TOK_TRUE  */
  YYSYMBOL_TOK_LCBRAC = 5,                 /* TOK_LCBRAC  */
  YYSYMBOL_TOK_RCBRAC = 6,                 /* TOK_RCBRAC  */
  YYSYMBOL_TOK_SEMI = 7,                   /* TOK_SEMI  */
  YYSYMBOL_TOK_COMMA = 8,                  /* TOK_COMMA  */
  YYSYMBOL_TOK_AT = 9,                     /* TOK_AT  */
  YYSYMBOL_TOK_SIMP = 10,                  /* TOK_SIMP  */
  YYSYMBOL_TOK_PROP = 11,                  /* TOK_PROP  */
  YYSYMBOL_TOK_SPIPE = 12,                 /* TOK_SPIPE  */
  YYSYMBOL_TOK_BSLASH = 13,                /* TOK_BSLASH  */
  YYSYMBOL_TOK_LRBRAC = 14,                /* TOK_LRBRAC  */
  YYSYMBOL_TOK_RRBRAC = 15,                /* TOK_RRBRAC  */
  YYSYMBOL_TOK_FUNC = 16,                  /* TOK_FUNC  */
  YYSYMBOL_TOK_SYMBAT = 17,                /* TOK_SYMBAT  */
  YYSYMBOL_TOK_CONST = 18,                 /* TOK_CONST  */
  YYSYMBOL_TOK_SYMB = 19,                  /* TOK_SYMB  */
  YYSYMBOL_TOK_OP = 20,                    /* TOK_OP  */
  YYSYMBOL_TOK_EXTERN = 21,                /* TOK_EXTERN  */
  YYSYMBOL_TOK_BSTRING = 22,               /* TOK_BSTRING  */
  YYSYMBOL_TOK_STRING = 23,                /* TOK_STRING  */
  YYSYMBOL_TOK_ESTRING = 24,               /* TOK_ESTRING  */
  YYSYMBOL_TOK_MACRO = 25,                 /* TOK_MACRO  */
  YYSYMBOL_TOK_ASTER = 26,                 /* TOK_ASTER  */
  YYSYMBOL_TOK_BCHAR = 27,                 /* TOK_BCHAR  */
  YYSYMBOL_TOK_CHAR = 28,                  /* TOK_CHAR  */
  YYSYMBOL_TOK_ECHAR = 29,                 /* TOK_ECHAR  */
  YYSYMBOL_TOK_LOGICAL = 30,               /* TOK_LOGICAL  */
  YYSYMBOL_TOK_HASH = 31,                  /* TOK_HASH  */
  YYSYMBOL_TOK_ERROR = 32,                 /* TOK_ERROR  */
  YYSYMBOL_PRE_ENDALIST = 33,              /* PRE_ENDALIST  */
  YYSYMBOL_PRE_EC = 34,                    /* PRE_EC  */
  YYSYMBOL_PRE_ELIST = 35,                 /* PRE_ELIST  */
  YYSYMBOL_PRE_ETLIST = 36,                /* PRE_ETLIST  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_main = 38,                      /* main  */
  YYSYMBOL_input = 39,                     /* input  */
  YYSYMBOL_tokenlist = 40,                 /* tokenlist  */
  YYSYMBOL_etokenlist = 41,                /* etokenlist  */
  YYSYMBOL_stokenlist = 42,                /* stokenlist  */
  YYSYMBOL_functio = 43,                   /* functio  */
  YYSYMBOL_token = 44,                     /* token  */
  YYSYMBOL_etoken = 45,                    /* etoken  */
  YYSYMBOL_stoken = 46,                    /* stoken  */
  YYSYMBOL_exprlist = 47,                  /* exprlist  */
  YYSYMBOL_string = 48,                    /* string  */
  YYSYMBOL_char = 49,                      /* char  */
  YYSYMBOL_stringparts = 50,               /* stringparts  */
  YYSYMBOL_charparts = 51,                 /* charparts  */
  YYSYMBOL_arglist = 52,                   /* arglist  */
  YYSYMBOL_extlist = 53,                   /* extlist  */
  YYSYMBOL_literal = 54,                   /* literal  */
  YYSYMBOL_rname = 55,                     /* rname  */
  YYSYMBOL_rule = 56,                      /* rule  */
  YYSYMBOL_stmt = 57,                      /* stmt  */
  YYSYMBOL_constrlist = 58,                /* constrlist  */
  YYSYMBOL_carglist = 59,                  /* carglist  */
  YYSYMBOL_constr = 60,                    /* constr  */
  YYSYMBOL_typelist = 61,                  /* typelist  */
  YYSYMBOL_typelistc = 62,                 /* typelistc  */
  YYSYMBOL_type = 63                       /* type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_int8 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    90,    95,    96,    99,   100,   103,   104,
     107,   108,   111,   118,   129,   130,   131,   132,   133,   134,
     143,   154,   164,   165,   166,   169,   170,   173,   174,   175,
     176,   177,   179,   182,   185,   186,   195,   196,   205,   206,
     208,   209,   211,   212,   213,   214,   215,   218,   219,   222,
     223,   224,   225,   226,   227,   231,   232,   233,   234,   235,
     239,   240,   243,   244,   247,   250,   251,   254,   255,   258,
     259,   260
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOK_CONSTRAINT",
  "TOK_TRUE", "TOK_LCBRAC", "TOK_RCBRAC", "TOK_SEMI", "TOK_COMMA",
  "TOK_AT", "TOK_SIMP", "TOK_PROP", "TOK_SPIPE", "TOK_BSLASH",
  "TOK_LRBRAC", "TOK_RRBRAC", "TOK_FUNC", "TOK_SYMBAT", "TOK_CONST",
  "TOK_SYMB", "TOK_OP", "TOK_EXTERN", "TOK_BSTRING", "TOK_STRING",
  "TOK_ESTRING", "TOK_MACRO", "TOK_ASTER", "TOK_BCHAR", "TOK_CHAR",
  "TOK_ECHAR", "TOK_LOGICAL", "TOK_HASH", "TOK_ERROR", "PRE_ENDALIST",
  "PRE_EC", "PRE_ELIST", "PRE_ETLIST", "$accept", "main", "input",
  "tokenlist", "etokenlist", "stokenlist", "functio", "token", "etoken",
  "stoken", "exprlist", "string", "char", "stringparts", "charparts",
  "arglist", "extlist", "literal", "rname", "rule", "stmt", "constrlist",
  "carglist", "constr", "typelist", "typelistc", "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -53,     9,     7,   -53,    19,   -53,   -53,    39,    19,    56,
      75,   -53,   -53,    56,    44,   -53,   -53,    47,   -53,   -53,
      -8,   -53,     3,    32,    79,    88,     1,   -53,    19,    94,
     -53,    93,    97,   114,   -53,   -53,   -53,   -53,   105,   111,
     -53,   -53,   -53,   -53,   -53,   -53,   109,   -53,   -53,   -53,
     -53,   -53,   -53,    75,    75,    75,   -53,    56,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,    81,   -53,
     113,    18,   -53,    23,    -9,    33,   -53,    54,    41,    59,
      31,     1,    94,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   115,   -53,    75,   -53,    75,    75,
     113,   -53,    57,    76,    70,   -53,   -53,   -53,    75,    84,
     -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,    48,     1,     0,     3,    47,     0,     0,     0,
       7,    59,     5,    65,     0,    62,    40,     0,     9,    69,
       0,    27,    28,     0,     0,    66,    67,    55,     0,    60,
      56,     0,     0,    70,    71,    11,    42,    45,     9,     9,
      43,    19,    44,    34,    46,    36,     0,    15,     6,    16,
      17,    14,     7,     7,     7,     7,    64,     0,    70,    62,
      63,    41,    57,    23,    24,    22,     8,    58,     0,    20,
      38,     0,    13,     0,     0,     0,    29,    30,     0,     0,
       0,    68,    61,    18,    26,    25,    10,     9,    21,    12,
      35,    32,    37,    33,     0,    53,     7,    54,     7,     7,
      39,    31,     0,     0,     0,    50,    51,    52,     7,     0,
      49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,    85,   -18,   -53,   -25,   -17,    68,   -53,
     -52,   -53,   -53,   -53,   -53,    99,   -53,   -53,   -53,   -53,
     -53,   -53,    82,     8,   -53,   -53,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    22,    70,    68,    47,    65,    66,    86,
      23,    49,    50,    74,    75,    71,    17,    51,    10,    11,
      12,    14,    29,    15,    24,    25,    20
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      32,    78,    79,    80,    60,    48,    26,    -2,    35,     3,
       4,    33,    37,     5,    90,    91,    18,    38,    34,    39,
      58,    40,    41,    42,     6,    43,    87,    34,     7,    44,
      45,    87,     8,    88,    46,    13,    59,     9,    89,    52,
      52,    99,    53,    54,   102,    55,   103,   104,    95,    52,
      81,    27,    28,    96,    30,    31,   109,    60,    16,    35,
      48,    92,    93,    37,   105,    52,    97,    52,    38,   100,
      39,    98,    40,    41,    42,    19,    43,   107,    52,    21,
      44,    45,   108,   106,    52,    94,    35,    83,    84,    36,
      37,   110,    52,    63,    56,    38,    57,    39,    64,    40,
      41,    42,    35,    43,    62,    36,    37,    44,    45,    63,
      39,    38,    61,    39,    64,    40,    41,    42,    35,    43,
      69,    67,    37,    44,    45,    63,    72,    38,    76,    39,
      64,    40,    41,    42,   101,    43,    85,    77,    73,    44,
      45,    82
};

static const yytype_int8 yycheck[] =
{
      18,    53,    54,    55,    29,    22,    13,     0,     5,     0,
       3,    19,     9,     6,    23,    24,     8,    14,    26,    16,
      19,    18,    19,    20,    17,    22,     8,    26,    21,    26,
      27,     8,    25,    15,    31,    16,    28,    30,    15,     8,
       8,    10,    10,    11,    96,    13,    98,    99,     7,     8,
      57,     7,     8,    12,     7,     8,   108,    82,    19,     5,
      77,    28,    29,     9,     7,     8,     7,     8,    14,    87,
      16,    12,    18,    19,    20,    19,    22,     7,     8,     4,
      26,    27,    12,     7,     8,    31,     5,     6,     7,     8,
       9,     7,     8,    12,    15,    14,     8,    16,    17,    18,
      19,    20,     5,    22,     7,     8,     9,    26,    27,    12,
      16,    14,    19,    16,    17,    18,    19,    20,     5,    22,
      15,     7,     9,    26,    27,    12,    15,    14,    19,    16,
      17,    18,    19,    20,    19,    22,    68,    52,    39,    26,
      27,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,     3,     6,    17,    21,    25,    30,
      55,    56,    57,    16,    58,    60,    19,    53,    60,    19,
      63,     4,    40,    47,    61,    62,    63,     7,     8,    59,
       7,     8,    41,    19,    26,     5,     8,     9,    14,    16,
      18,    19,    20,    22,    26,    27,    31,    43,    44,    48,
      49,    54,     8,    10,    11,    13,    15,     8,    19,    60,
      43,    19,     7,    12,    17,    44,    45,     7,    42,    15,
      41,    52,    15,    52,    50,    51,    19,    40,    47,    47,
      47,    63,    59,     6,     7,    45,    46,     8,    15,    15,
      23,    24,    28,    29,    31,     7,    12,     7,    12,    10,
      41,    19,    47,    47,    47,     7,     7,     7,    12,    47,
       7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    38,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    44,    45,    45,    45,    46,    46,    47,    47,    47,
      47,    47,    48,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    61,    61,    62,    62,    63,
      63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     2,     0,     2,     0,
       2,     0,     3,     2,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     5,     3,     3,     0,     2,     0,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     9,
       7,     7,     7,     5,     5,     3,     3,     4,     4,     1,
       2,     4,     0,     2,     3,     0,     1,     1,     3,     1,
       2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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
        yyerror (&yylloc, scanner, output, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, output); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, cchr_t *output)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (output);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, cchr_t *output)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, output);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, cchr_t *output)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, output);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, output); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, cchr_t *output)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (output);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_TOK_CONSTRAINT: /* TOK_CONSTRAINT  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1329 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_TRUE: /* TOK_TRUE  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1335 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_LCBRAC: /* TOK_LCBRAC  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1341 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_RCBRAC: /* TOK_RCBRAC  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1347 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_SEMI: /* TOK_SEMI  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1353 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_COMMA: /* TOK_COMMA  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1359 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_AT: /* TOK_AT  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1365 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_SIMP: /* TOK_SIMP  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1371 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_PROP: /* TOK_PROP  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1377 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_SPIPE: /* TOK_SPIPE  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1383 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_BSLASH: /* TOK_BSLASH  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1389 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_LRBRAC: /* TOK_LRBRAC  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1395 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_RRBRAC: /* TOK_RRBRAC  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1401 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_FUNC: /* TOK_FUNC  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1407 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_SYMBAT: /* TOK_SYMBAT  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1413 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_CONST: /* TOK_CONST  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1419 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_SYMB: /* TOK_SYMB  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1425 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_OP: /* TOK_OP  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1431 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_EXTERN: /* TOK_EXTERN  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1437 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_BSTRING: /* TOK_BSTRING  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1443 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_STRING: /* TOK_STRING  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1449 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_ESTRING: /* TOK_ESTRING  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1455 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_ASTER: /* TOK_ASTER  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1461 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_BCHAR: /* TOK_BCHAR  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1467 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_CHAR: /* TOK_CHAR  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1473 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_ECHAR: /* TOK_ECHAR  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1479 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_LOGICAL: /* TOK_LOGICAL  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1485 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_TOK_HASH: /* TOK_HASH  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1491 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_input: /* input  */
#line 72 "cchr.y"
            { destruct_cchr_t(&((*yyvaluep).cchr)); }
#line 1497 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_tokenlist: /* tokenlist  */
#line 66 "cchr.y"
            { destruct_expr_t(&((*yyvaluep).expr)); }
#line 1503 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_etokenlist: /* etokenlist  */
#line 66 "cchr.y"
            { destruct_expr_t(&((*yyvaluep).expr)); }
#line 1509 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_stokenlist: /* stokenlist  */
#line 66 "cchr.y"
            { destruct_expr_t(&((*yyvaluep).expr)); }
#line 1515 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_functio: /* functio  */
#line 66 "cchr.y"
            { destruct_expr_t(&((*yyvaluep).expr)); }
#line 1521 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_token: /* token  */
#line 66 "cchr.y"
            { destruct_expr_t(&((*yyvaluep).expr)); }
#line 1527 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_etoken: /* etoken  */
#line 66 "cchr.y"
            { destruct_expr_t(&((*yyvaluep).expr)); }
#line 1533 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_stoken: /* stoken  */
#line 66 "cchr.y"
            { destruct_expr_t(&((*yyvaluep).expr)); }
#line 1539 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_exprlist: /* exprlist  */
#line 75 "cchr.y"
            { destruct_exprlist_t(&((*yyvaluep).elist)); }
#line 1545 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_arglist: /* arglist  */
#line 69 "cchr.y"
            { destruct_token_t(&((*yyvaluep).token)); }
#line 1551 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_extlist: /* extlist  */
#line 72 "cchr.y"
            { destruct_cchr_t(&((*yyvaluep).cchr)); }
#line 1557 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1563 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_rname: /* rname  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1569 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_rule: /* rule  */
#line 72 "cchr.y"
            { destruct_cchr_t(&((*yyvaluep).cchr)); }
#line 1575 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_stmt: /* stmt  */
#line 72 "cchr.y"
            { destruct_cchr_t(&((*yyvaluep).cchr)); }
#line 1581 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_constrlist: /* constrlist  */
#line 72 "cchr.y"
            { destruct_cchr_t(&((*yyvaluep).cchr)); }
#line 1587 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_carglist: /* carglist  */
#line 63 "cchr.y"
            { destruct_constr_t(&((*yyvaluep).constr)); }
#line 1593 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_constr: /* constr  */
#line 63 "cchr.y"
            { destruct_constr_t(&((*yyvaluep).constr)); }
#line 1599 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_typelist: /* typelist  */
#line 63 "cchr.y"
            { destruct_constr_t(&((*yyvaluep).constr)); }
#line 1605 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_typelistc: /* typelistc  */
#line 63 "cchr.y"
            { destruct_constr_t(&((*yyvaluep).constr)); }
#line 1611 "intermediate/cchr.tab.c"
        break;

    case YYSYMBOL_type: /* type  */
#line 60 "cchr.y"
            { free(((*yyvaluep).lit)); }
#line 1617 "intermediate/cchr.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, cchr_t *output)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* main: input  */
#line 89 "cchr.y"
             { *output=(yyvsp[0].cchr); }
#line 1921 "intermediate/cchr.tab.c"
    break;

  case 3: /* main: input TOK_RCBRAC  */
#line 90 "cchr.y"
                            { *output=(yyvsp[-1].cchr); 
	   free((yyvsp[0].lit)); /* dumpCHR(output, 1); */ 
	   YYACCEPT; }
#line 1929 "intermediate/cchr.tab.c"
    break;

  case 4: /* input: %empty  */
#line 95 "cchr.y"
        { cchr_init(&(yyval.cchr)); }
#line 1935 "intermediate/cchr.tab.c"
    break;

  case 5: /* input: input stmt  */
#line 96 "cchr.y"
                     { (yyval.cchr)=(yyvsp[-1].cchr); cchr_merge(&(yyval.cchr),&(yyvsp[0].cchr)); }
#line 1941 "intermediate/cchr.tab.c"
    break;

  case 6: /* tokenlist: tokenlist token  */
#line 99 "cchr.y"
                            { (yyval.expr).list=(yyvsp[-1].expr).list; (yyval.expr).occn=(yyvsp[-1].expr).occn; alist_addall((yyval.expr).list,(yyvsp[0].expr).list); alist_free((yyvsp[0].expr).list); }
#line 1947 "intermediate/cchr.tab.c"
    break;

  case 7: /* tokenlist: %empty  */
#line 100 "cchr.y"
                             { alist_init((yyval.expr).list); (yyval.expr).occn=NULL; }
#line 1953 "intermediate/cchr.tab.c"
    break;

  case 8: /* etokenlist: etokenlist etoken  */
#line 103 "cchr.y"
                               { (yyval.expr).list=(yyvsp[-1].expr).list; alist_addall((yyval.expr).list,(yyvsp[0].expr).list); alist_free((yyvsp[0].expr).list); (yyval.expr).occn=NULL; }
#line 1959 "intermediate/cchr.tab.c"
    break;

  case 9: /* etokenlist: %empty  */
#line 104 "cchr.y"
                              { alist_init((yyval.expr).list); (yyval.expr).occn=NULL; }
#line 1965 "intermediate/cchr.tab.c"
    break;

  case 10: /* stokenlist: stokenlist stoken  */
#line 107 "cchr.y"
                               { (yyval.expr).list=(yyvsp[-1].expr).list; alist_addall((yyval.expr).list,(yyvsp[0].expr).list); alist_free((yyvsp[0].expr).list); (yyval.expr).occn=NULL; }
#line 1971 "intermediate/cchr.tab.c"
    break;

  case 11: /* stokenlist: %empty  */
#line 108 "cchr.y"
                              { alist_init((yyval.expr).list); (yyval.expr).occn=NULL; }
#line 1977 "intermediate/cchr.tab.c"
    break;

  case 12: /* functio: TOK_FUNC arglist TOK_RRBRAC  */
#line 111 "cchr.y"
                                      { 
    		alist_init((yyval.expr).list);
		    (yyvsp[-1].token).data=(yyvsp[-2].lit);
		    alist_add((yyval.expr).list,(yyvsp[-1].token));
		    free((yyvsp[0].lit));
		    (yyval.expr).occn=NULL;
		}
#line 1989 "intermediate/cchr.tab.c"
    break;

  case 13: /* functio: TOK_FUNC TOK_RRBRAC  */
#line 118 "cchr.y"
                                      { 
   		    alist_init((yyval.expr).list);
		    token_t *tok;
		    alist_new((yyval.expr).list,tok);
		    alist_init(tok->args);
		    tok->type=TOKEN_TYPE_FUNC;
		    tok->data=(yyvsp[-1].lit);
		    free((yyvsp[0].lit));
		    (yyval.expr).occn=NULL;
		}
#line 2004 "intermediate/cchr.tab.c"
    break;

  case 14: /* token: literal  */
#line 129 "cchr.y"
                { alist_init((yyval.expr).list); token_t *tok; alist_new((yyval.expr).list,tok); tok->data=(yyvsp[0].lit); tok->type=TOKEN_TYPE_LIT; alist_init(tok->args); (yyval.expr).occn=NULL; }
#line 2010 "intermediate/cchr.tab.c"
    break;

  case 16: /* token: string  */
#line 131 "cchr.y"
                    { alist_init((yyval.expr).list); token_t *tok; alist_new((yyval.expr).list,tok); tok->data=(yyvsp[0].lit); tok->type=TOKEN_TYPE_LIT; alist_init(tok->args); (yyval.expr).occn=NULL; }
#line 2016 "intermediate/cchr.tab.c"
    break;

  case 17: /* token: char  */
#line 132 "cchr.y"
                  { alist_init((yyval.expr).list); token_t *tok; alist_new((yyval.expr).list,tok); tok->data=(yyvsp[0].lit); tok->type=TOKEN_TYPE_LIT; alist_init(tok->args); (yyval.expr).occn=NULL; }
#line 2022 "intermediate/cchr.tab.c"
    break;

  case 18: /* token: TOK_LCBRAC stokenlist TOK_RCBRAC  */
#line 133 "cchr.y"
                                             { alist_init((yyval.expr).list); token_t *tok; alist_new((yyval.expr).list,tok); tok->data=(yyvsp[-2].lit); tok->type=TOKEN_TYPE_LIT; alist_addall((yyval.expr).list,(yyvsp[-1].expr).list); alist_new((yyval.expr).list,tok); tok->data=(yyvsp[0].lit); tok->type=TOKEN_TYPE_LIT; alist_free((yyvsp[-1].expr).list); (yyval.expr).occn=NULL; }
#line 2028 "intermediate/cchr.tab.c"
    break;

  case 19: /* token: TOK_SYMB  */
#line 134 "cchr.y"
                  { 
   		    alist_init((yyval.expr).list);
		    token_t *tok;
		    alist_new((yyval.expr).list,tok);
		    tok->data=(yyvsp[0].lit);
		    tok->type=TOKEN_TYPE_SYMB;
		    alist_init(tok->args);
		    (yyval.expr).occn=NULL; 
		  }
#line 2042 "intermediate/cchr.tab.c"
    break;

  case 20: /* token: TOK_LRBRAC TOK_RRBRAC  */
#line 143 "cchr.y"
                                  {
   		    alist_init((yyval.expr).list);
		    token_t *tok;
		    alist_new((yyval.expr).list,tok);
		    alist_init(tok->args);
		    tok->type=TOKEN_TYPE_FUNC;
		    tok->data=NULL;
		    free((yyvsp[0].lit));
		    free((yyvsp[-1].lit));
		    (yyval.expr).occn=NULL; 
	  }
#line 2058 "intermediate/cchr.tab.c"
    break;

  case 21: /* token: TOK_LRBRAC arglist TOK_RRBRAC  */
#line 154 "cchr.y"
                                      { 
    		alist_init((yyval.expr).list);
		    (yyvsp[-1].token).data=NULL;
		    alist_add((yyval.expr).list,(yyvsp[-1].token));
		    free((yyvsp[0].lit));
		    free((yyvsp[-2].lit));
		    (yyval.expr).occn=NULL; 
		}
#line 2071 "intermediate/cchr.tab.c"
    break;

  case 23: /* etoken: TOK_SPIPE  */
#line 165 "cchr.y"
                       { alist_init((yyval.expr).list); token_t *tok; alist_new((yyval.expr).list,tok); tok->data=(yyvsp[0].lit); tok->type=TOKEN_TYPE_LIT; (yyval.expr).occn=NULL; }
#line 2077 "intermediate/cchr.tab.c"
    break;

  case 24: /* etoken: TOK_SYMBAT  */
#line 166 "cchr.y"
                        { alist_init((yyval.expr).list); token_t *tok; alist_new((yyval.expr).list,tok); tok->data=(yyvsp[0].lit); tok->type=TOKEN_TYPE_SYMB; alist_new((yyval.expr).list,tok); tok->data=malloc(2); strcpy(tok->data,"@"); tok->type=TOKEN_TYPE_LIT; (yyval.expr).occn=NULL; }
#line 2083 "intermediate/cchr.tab.c"
    break;

  case 26: /* stoken: TOK_SEMI  */
#line 170 "cchr.y"
                  { alist_init((yyval.expr).list); token_t *tok; alist_new((yyval.expr).list,tok); tok->data=(yyvsp[0].lit); tok->type=TOKEN_TYPE_LIT; (yyval.expr).occn=NULL; }
#line 2089 "intermediate/cchr.tab.c"
    break;

  case 27: /* exprlist: TOK_TRUE  */
#line 173 "cchr.y"
                    { free((yyvsp[0].lit)); alist_init((yyval.elist).list); }
#line 2095 "intermediate/cchr.tab.c"
    break;

  case 28: /* exprlist: tokenlist  */
#line 174 "cchr.y"
                                             { (yyvsp[0].expr).occn=NULL; alist_init((yyval.elist).list); alist_add((yyval.elist).list,(yyvsp[0].expr)); }
#line 2101 "intermediate/cchr.tab.c"
    break;

  case 29: /* exprlist: tokenlist TOK_HASH TOK_SYMB  */
#line 175 "cchr.y"
                                                               { (yyvsp[-2].expr).occn=(yyvsp[0].lit); alist_init((yyval.elist).list); alist_add((yyval.elist).list,(yyvsp[-2].expr)); free((yyvsp[-1].lit)); }
#line 2107 "intermediate/cchr.tab.c"
    break;

  case 30: /* exprlist: exprlist TOK_COMMA tokenlist  */
#line 176 "cchr.y"
                                                { (yyvsp[0].expr).occn=NULL; (yyval.elist)=(yyvsp[-2].elist); alist_add((yyval.elist).list,(yyvsp[0].expr)); free((yyvsp[-1].lit)); }
#line 2113 "intermediate/cchr.tab.c"
    break;

  case 31: /* exprlist: exprlist TOK_COMMA tokenlist TOK_HASH TOK_SYMB  */
#line 177 "cchr.y"
                                                                  { (yyvsp[-2].expr).occn=(yyvsp[0].lit); (yyval.elist)=(yyvsp[-4].elist); alist_add((yyval.elist).list,(yyvsp[-2].expr)); free((yyvsp[-3].lit)); free((yyvsp[-1].lit)); }
#line 2119 "intermediate/cchr.tab.c"
    break;

  case 32: /* string: TOK_BSTRING stringparts TOK_ESTRING  */
#line 179 "cchr.y"
                                             { (yyval.lit)=malloc(strlen((yyvsp[-2].lit))+strlen((yyvsp[-1].lit))+strlen((yyvsp[0].lit))+1); strcpy((yyval.lit),(yyvsp[-2].lit)); strcat((yyval.lit),(yyvsp[-1].lit)); strcat((yyval.lit),(yyvsp[0].lit)); free((yyvsp[-2].lit)); free((yyvsp[-1].lit)); free((yyvsp[0].lit)); }
#line 2125 "intermediate/cchr.tab.c"
    break;

  case 33: /* char: TOK_BCHAR charparts TOK_ECHAR  */
#line 182 "cchr.y"
                                     { (yyval.lit)=malloc(strlen((yyvsp[-2].lit))+strlen((yyvsp[-1].lit))+strlen((yyvsp[0].lit))+1); strcpy((yyval.lit),(yyvsp[-2].lit)); strcat((yyval.lit),(yyvsp[-1].lit)); strcat((yyval.lit),(yyvsp[0].lit)); free((yyvsp[-2].lit)); free((yyvsp[-1].lit)); free((yyvsp[0].lit)); }
#line 2131 "intermediate/cchr.tab.c"
    break;

  case 34: /* stringparts: %empty  */
#line 185 "cchr.y"
              { (yyval.lit)=malloc(1); (yyval.lit)[0]=0; }
#line 2137 "intermediate/cchr.tab.c"
    break;

  case 35: /* stringparts: stringparts TOK_STRING  */
#line 186 "cchr.y"
                                                 { 
				(yyval.lit)=malloc(strlen((yyvsp[-1].lit))+strlen((yyvsp[0].lit))+1);
				strcpy((yyval.lit),(yyvsp[-1].lit));
				strcat((yyval.lit),(yyvsp[0].lit));
				free((yyvsp[-1].lit));
				free((yyvsp[0].lit));
			  }
#line 2149 "intermediate/cchr.tab.c"
    break;

  case 36: /* charparts: %empty  */
#line 195 "cchr.y"
            { (yyval.lit)=malloc(1); (yyval.lit)[0]=0; }
#line 2155 "intermediate/cchr.tab.c"
    break;

  case 37: /* charparts: charparts TOK_CHAR  */
#line 196 "cchr.y"
                                             { 
				(yyval.lit)=malloc(strlen((yyvsp[-1].lit))+strlen((yyvsp[0].lit))+1);
				strcpy((yyval.lit),(yyvsp[-1].lit));
				strcat((yyval.lit),(yyvsp[0].lit));
				free((yyvsp[-1].lit));
				free((yyvsp[0].lit));
			  }
#line 2167 "intermediate/cchr.tab.c"
    break;

  case 38: /* arglist: etokenlist  */
#line 205 "cchr.y"
                                        { (yyval.token).type = TOKEN_TYPE_FUNC; alist_init((yyval.token).args); (yyval.token).data=NULL; alist_add((yyval.token).args,(yyvsp[0].expr)); }
#line 2173 "intermediate/cchr.tab.c"
    break;

  case 39: /* arglist: arglist TOK_COMMA etokenlist  */
#line 206 "cchr.y"
                                                { (yyval.token)=(yyvsp[-2].token); alist_add((yyval.token).args,(yyvsp[0].expr)); free((yyvsp[-1].lit)); }
#line 2179 "intermediate/cchr.tab.c"
    break;

  case 40: /* extlist: TOK_SYMB  */
#line 208 "cchr.y"
                   { cchr_init(&(yyval.cchr)); alist_add((yyval.cchr).exts,(yyvsp[0].lit)); }
#line 2185 "intermediate/cchr.tab.c"
    break;

  case 41: /* extlist: extlist TOK_COMMA TOK_SYMB  */
#line 209 "cchr.y"
                                      { (yyval.cchr)=(yyvsp[-2].cchr); alist_add((yyval.cchr).exts,(yyvsp[0].lit)); free((yyvsp[-1].lit)); }
#line 2191 "intermediate/cchr.tab.c"
    break;

  case 47: /* rname: TOK_SYMBAT  */
#line 218 "cchr.y"
                   { (yyval.lit)=(yyvsp[0].lit); }
#line 2197 "intermediate/cchr.tab.c"
    break;

  case 48: /* rname: %empty  */
#line 219 "cchr.y"
        { (yyval.lit)=NULL; }
#line 2203 "intermediate/cchr.tab.c"
    break;

  case 49: /* rule: rname exprlist TOK_BSLASH exprlist TOK_SIMP exprlist TOK_SPIPE exprlist TOK_SEMI  */
#line 222 "cchr.y"
                                                                                        { cchr_genrule(&(yyval.cchr),(yyvsp[-8].lit),&(yyvsp[-7].elist),&(yyvsp[-5].elist),&(yyvsp[-3].elist),&(yyvsp[-1].elist)); free((yyvsp[-6].lit)); free((yyvsp[-4].lit)); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2209 "intermediate/cchr.tab.c"
    break;

  case 50: /* rule: rname exprlist TOK_SIMP exprlist TOK_SPIPE exprlist TOK_SEMI  */
#line 223 "cchr.y"
                                                                    { cchr_genrule(&(yyval.cchr),(yyvsp[-6].lit),NULL,&(yyvsp[-5].elist),&(yyvsp[-3].elist),&(yyvsp[-1].elist)); free((yyvsp[-4].lit)); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2215 "intermediate/cchr.tab.c"
    break;

  case 51: /* rule: rname exprlist TOK_PROP exprlist TOK_SPIPE exprlist TOK_SEMI  */
#line 224 "cchr.y"
                                                                    { cchr_genrule(&(yyval.cchr),(yyvsp[-6].lit),&(yyvsp[-5].elist),NULL,&(yyvsp[-3].elist),&(yyvsp[-1].elist)); free((yyvsp[-4].lit)); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2221 "intermediate/cchr.tab.c"
    break;

  case 52: /* rule: rname exprlist TOK_BSLASH exprlist TOK_SIMP exprlist TOK_SEMI  */
#line 225 "cchr.y"
                                                                     { cchr_genrule(&(yyval.cchr),(yyvsp[-6].lit),&(yyvsp[-5].elist),&(yyvsp[-3].elist),NULL,&(yyvsp[-1].elist)); free((yyvsp[-4].lit)); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2227 "intermediate/cchr.tab.c"
    break;

  case 53: /* rule: rname exprlist TOK_SIMP exprlist TOK_SEMI  */
#line 226 "cchr.y"
                                                 { cchr_genrule(&(yyval.cchr),(yyvsp[-4].lit),NULL,&(yyvsp[-3].elist),NULL,&(yyvsp[-1].elist)); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2233 "intermediate/cchr.tab.c"
    break;

  case 54: /* rule: rname exprlist TOK_PROP exprlist TOK_SEMI  */
#line 227 "cchr.y"
                                                 { cchr_genrule(&(yyval.cchr),(yyvsp[-4].lit),&(yyvsp[-3].elist),NULL,NULL,&(yyvsp[-1].elist)); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2239 "intermediate/cchr.tab.c"
    break;

  case 55: /* stmt: TOK_CONSTRAINT constrlist TOK_SEMI  */
#line 231 "cchr.y"
                                          { (yyval.cchr)=(yyvsp[-1].cchr); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2245 "intermediate/cchr.tab.c"
    break;

  case 56: /* stmt: TOK_EXTERN extlist TOK_SEMI  */
#line 232 "cchr.y"
                                   { (yyval.cchr)=(yyvsp[-1].cchr); free((yyvsp[-2].lit)); free((yyvsp[0].lit)); }
#line 2251 "intermediate/cchr.tab.c"
    break;

  case 57: /* stmt: TOK_MACRO constr etokenlist TOK_SEMI  */
#line 233 "cchr.y"
                                            { cchr_init(&(yyval.cchr)); macro_t *nw; alist_new((yyval.cchr).macros,nw); nw->name=(yyvsp[-2].constr); nw->def=(yyvsp[-1].expr); free((yyvsp[-3].lit)); free((yyvsp[0].lit)); }
#line 2257 "intermediate/cchr.tab.c"
    break;

  case 58: /* stmt: TOK_LOGICAL type TOK_SYMB TOK_SEMI  */
#line 234 "cchr.y"
                                          { cchr_init(&(yyval.cchr)); logical_t *nw; alist_new((yyval.cchr).logicals,nw); nw->name=(yyvsp[-2].lit); nw->cb=(yyvsp[-1].lit); free((yyvsp[-3].lit)); free((yyvsp[0].lit)); }
#line 2263 "intermediate/cchr.tab.c"
    break;

  case 60: /* constrlist: constr carglist  */
#line 239 "cchr.y"
                             { cchr_init(&(yyval.cchr)); (yyvsp[-1].constr).args=(yyvsp[0].constr).args; alist_add((yyval.cchr).constrs,(yyvsp[-1].constr)); }
#line 2269 "intermediate/cchr.tab.c"
    break;

  case 61: /* constrlist: constrlist TOK_COMMA constr carglist  */
#line 240 "cchr.y"
                                                          { (yyval.cchr)=(yyvsp[-3].cchr); (yyvsp[-1].constr).args=(yyvsp[0].constr).args; alist_add((yyval.cchr).constrs,(yyvsp[-1].constr)); free((yyvsp[-2].lit)); }
#line 2275 "intermediate/cchr.tab.c"
    break;

  case 62: /* carglist: %empty  */
#line 243 "cchr.y"
           { alist_init((yyval.constr).args); alist_init((yyval.constr).list); (yyval.constr).name=NULL; }
#line 2281 "intermediate/cchr.tab.c"
    break;

  case 63: /* carglist: carglist functio  */
#line 244 "cchr.y"
                                    { alist_add((yyvsp[-1].constr).args,(yyvsp[0].expr)); (yyval.constr)=(yyvsp[-1].constr); }
#line 2287 "intermediate/cchr.tab.c"
    break;

  case 64: /* constr: TOK_FUNC typelist TOK_RRBRAC  */
#line 247 "cchr.y"
                                      { (yyval.constr)=(yyvsp[-1].constr); (yyval.constr).name=(yyvsp[-2].lit); free((yyvsp[0].lit)); alist_init((yyval.constr).args); }
#line 2293 "intermediate/cchr.tab.c"
    break;

  case 65: /* typelist: %empty  */
#line 250 "cchr.y"
                { (yyval.constr).name=NULL; alist_init((yyval.constr).list); }
#line 2299 "intermediate/cchr.tab.c"
    break;

  case 66: /* typelist: typelistc  */
#line 251 "cchr.y"
                                { (yyval.constr) = (yyvsp[0].constr); }
#line 2305 "intermediate/cchr.tab.c"
    break;

  case 67: /* typelistc: type  */
#line 254 "cchr.y"
                                { (yyval.constr).name=NULL; alist_init((yyval.constr).list); alist_add((yyval.constr).list,(yyvsp[0].lit)); }
#line 2311 "intermediate/cchr.tab.c"
    break;

  case 68: /* typelistc: typelistc TOK_COMMA type  */
#line 255 "cchr.y"
                                             { (yyval.constr)=(yyvsp[-2].constr); alist_add((yyval.constr).list,(yyvsp[0].lit)); free((yyvsp[-1].lit)); }
#line 2317 "intermediate/cchr.tab.c"
    break;

  case 69: /* type: TOK_SYMB  */
#line 258 "cchr.y"
                { (yyval.lit) = (yyvsp[0].lit); }
#line 2323 "intermediate/cchr.tab.c"
    break;

  case 70: /* type: type TOK_SYMB  */
#line 259 "cchr.y"
                     { (yyval.lit) = realloc((yyvsp[-1].lit),strlen((yyvsp[-1].lit))+strlen((yyvsp[0].lit))+2); strcat((yyval.lit)," "); strcat((yyval.lit),(yyvsp[0].lit)); free((yyvsp[0].lit)); }
#line 2329 "intermediate/cchr.tab.c"
    break;

  case 71: /* type: type TOK_ASTER  */
#line 260 "cchr.y"
                      { (yyval.lit) = realloc((yyvsp[-1].lit),strlen((yyvsp[-1].lit))+strlen((yyvsp[0].lit))+2); strcat((yyval.lit)," "); strcat((yyval.lit),(yyvsp[0].lit)); free((yyvsp[0].lit)); }
#line 2335 "intermediate/cchr.tab.c"
    break;


#line 2339 "intermediate/cchr.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, output, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, scanner, output);
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, output);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, output, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, output);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, output);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 263 "cchr.y"


void cchr_init(cchr_t *cchr) {
  alist_init(cchr->constrs);
  alist_init(cchr->rules);
  alist_init(cchr->exts);
  alist_init(cchr->macros);
  alist_init(cchr->logicals);
}

void cchr_merge(cchr_t *out,cchr_t *in) {
  alist_addall(out->constrs,in->constrs);
  alist_addall(out->rules,in->rules);
  alist_addall(out->exts,in->exts);
  alist_addall(out->macros,in->macros);
  alist_addall(out->logicals,in->logicals);
  alist_free(in->constrs);
  alist_free(in->rules);
  alist_free(in->exts);
  alist_free(in->macros);
  alist_free(in->logicals);
}

void cchr_genrule(cchr_t *cchr,char *name,exprlist_t *kept,exprlist_t *removed,exprlist_t *guard,exprlist_t *body) {
  cchr_init(cchr);
  rule_t *rule; alist_new(cchr->rules,rule);
  rule->name=name;
  if (kept) {
    rule->kept = *kept;
  } else {
    alist_init(rule->kept.list);
  }
  if (removed) {
    rule->removed = *removed;
  } else {
    alist_init(rule->removed.list);
  }
  if (body) {
    rule->body = *body;
  } else {
    alist_init(rule->body.list);
  }
  if (guard) {
    rule->guard= *guard;
  } else {
    alist_init(rule->guard.list);
  }
}

int static yyerror(YYLTYPE *loc,yyscan_t scanner,cchr_t *output,char *msg) {
  fprintf(stderr,"Parse error on line %i: %s\n",loc->last_line,msg);
  return 1;
}


