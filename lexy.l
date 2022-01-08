%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "y.tab.h"
    int count=1;
    void comment();
    int yywrap();
%}
%%

"/*" { comment();};
"string" return STRING;
"bool"	return BOOL;
"char" return CHAR;
"int" return INT;
"real" return REAL;
"if" return IF;
"else"      return ELSE;
"while"     return WHILE;
"for" return FOR;
"var" return VAR;
"return" return RETURN;
"null" return NONE;
"void" return VOID;
"do" return DO;

"&" return '&';
"&&" return AND;
"/" return DIV;
"=" return ASSIGN;
"==" return EQ;
">" return GREATER;
">=" return GREATEREQ;
"<" return LESS;
"<=" return LESSEQ;
"-" return MINUS;
"!" return NOT;
"!=" return NOTEQ;
"+" return PLUS;
"*" return STAR;
"++" return PLUSPLUS;
"--" return MINUSMINUS;

";" return ';';
"," return COMMA;
"|" return ABS;
"||" return OR;
"{" return '{';
"}" return '}';
"(" return '(';
")" return ')';
"[" return '[';
"]" return ']';



true|false { yylval = nodeMaker(strdup(yytext),NULL,NULL);}return BOOLVAR;
[\'].[\'] { yylval = nodeMaker(strdup(yytext),NULL,NULL); }return CHARVAR;
0|[1-9][0-9]*|0[x|X][0-9|A-F]+  { yylval = nodeMaker(strdup(yytext),NULL,NULL); }return INTVAR;
([-])?[1-9][0-9]*[.][0-9]*([[Ee][+|-][0-9]*])? { yylval = nodeMaker(strdup(yytext),NULL,NULL); }return REALVAR;
[a-zA-Z][a-zA-Z0-9_]* { yylval = nodeMaker(strdup(yytext),NULL,NULL); } return  IDENT;
[\"](([^\"]|\\\")*[^\\])?[\"] { yylval = nodeMaker(strdup(yytext),NULL,NULL); } return STRINGVAR;
[\n] count++;


. yytext[0];
%%
int yywrap()
{
	return(1);
}

void comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);
    
	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

    printf("\n");
}

