/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_INTERMEDIATE_CCHR_TAB_H_INCLUDED
# define YY_YY_INTERMEDIATE_CCHR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_CONSTRAINT = 258,          /* TOK_CONSTRAINT  */
    TOK_TRUE = 259,                /* TOK_TRUE  */
    TOK_LCBRAC = 260,              /* TOK_LCBRAC  */
    TOK_RCBRAC = 261,              /* TOK_RCBRAC  */
    TOK_SEMI = 262,                /* TOK_SEMI  */
    TOK_COMMA = 263,               /* TOK_COMMA  */
    TOK_AT = 264,                  /* TOK_AT  */
    TOK_SIMP = 265,                /* TOK_SIMP  */
    TOK_PROP = 266,                /* TOK_PROP  */
    TOK_SPIPE = 267,               /* TOK_SPIPE  */
    TOK_BSLASH = 268,              /* TOK_BSLASH  */
    TOK_LRBRAC = 269,              /* TOK_LRBRAC  */
    TOK_RRBRAC = 270,              /* TOK_RRBRAC  */
    TOK_FUNC = 271,                /* TOK_FUNC  */
    TOK_SYMBAT = 272,              /* TOK_SYMBAT  */
    TOK_CONST = 273,               /* TOK_CONST  */
    TOK_SYMB = 274,                /* TOK_SYMB  */
    TOK_OP = 275,                  /* TOK_OP  */
    TOK_EXTERN = 276,              /* TOK_EXTERN  */
    TOK_BSTRING = 277,             /* TOK_BSTRING  */
    TOK_STRING = 278,              /* TOK_STRING  */
    TOK_ESTRING = 279,             /* TOK_ESTRING  */
    TOK_MACRO = 280,               /* TOK_MACRO  */
    TOK_ASTER = 281,               /* TOK_ASTER  */
    TOK_BCHAR = 282,               /* TOK_BCHAR  */
    TOK_CHAR = 283,                /* TOK_CHAR  */
    TOK_ECHAR = 284,               /* TOK_ECHAR  */
    TOK_LOGICAL = 285,             /* TOK_LOGICAL  */
    TOK_HASH = 286,                /* TOK_HASH  */
    TOK_ERROR = 287,               /* TOK_ERROR  */
    PRE_ENDALIST = 288,            /* PRE_ENDALIST  */
    PRE_EC = 289,                  /* PRE_EC  */
    PRE_ELIST = 290,               /* PRE_ELIST  */
    PRE_ETLIST = 291               /* PRE_ETLIST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "cchr.y"

  char *lit;
  expr_t expr;
  token_t token;
  constr_t constr;
  cchr_t cchr;
  exprlist_t elist;

#line 109 "intermediate/cchr.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (yyscan_t scanner, cchr_t *output);

#endif /* !YY_YY_INTERMEDIATE_CCHR_TAB_H_INCLUDED  */
