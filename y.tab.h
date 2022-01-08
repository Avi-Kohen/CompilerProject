/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
