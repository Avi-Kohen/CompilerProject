%{
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
%}
%token BOOL 
%token CHAR 
%token STRING
%token INT 
%token REAL 
%token IF 
%token WHILE 
%token FOR 
%token VAR 
%token RETURN 
%token NONE 
%token VOID 
%token DO 
%token COMMA 
%token ABS 
%token '[' 
%token ']' 
%token '&'
%token BOOLVAR CHARVAR INTVAR REALVAR STRINGVAR 
%token MAIN 
%token IDENT
%token ';'
%token ASSIGN 
%token GREATER GREATEREQ LESS LESSEQ EQ NOTEQ AND OR NOT PLUSPLUS MINUSMINUS
%token PLUS MINUS
%token STAR DIV
%token '{' '(' ')' '}'
%nonassoc IF
%nonassoc ELSE
%start s
%%
s: START {printtree($1, 0);push_another(reversedStack,pop(stack));print_hashtable(*hash); print_stack(*stack);checkAll(reversedStack,*hash);};
START:  CODE {$$ = nodeMaker ("CODE",$1,NULL); }
CODE: CODE FUNC {$$ = nodeMaker ("",$1,$2); }
      |FUNC {$$ = nodeMaker ("",$1,NULL); }
FUNC: TYPE {strcpy(kind,"function");} FUNCDEC CMPSTATEMENT {$$ = nodeMaker ("FUNC",$1,nodeMaker("",$3,nodeMaker("BODY",$4,NULL)));push_another(reversedStack,pop(stack));}


TYPE: VOID {$$ = nodeMaker ( "VOID",NULL,NULL); strcpy(type,"void");}
     |BOOL {$$ = nodeMaker ( "BOOL",NULL,NULL); strcpy(type,"bool");}
     |CHAR {$$ = nodeMaker ( "CHAR",NULL,NULL); strcpy(type,"char");}
     |INT {$$ = nodeMaker ( "INT",NULL,NULL); strcpy(type,"int");}
     |REAL {$$ = nodeMaker ( "REAL",NULL,NULL); strcpy(type,"real");}
     |STRING{$$ = nodeMaker ( "CHAR POINTER",NULL,NULL); strcpy(type,"string");}
     |CHAR STAR {$$ = nodeMaker ( "CHAR POINTER",NULL,NULL); strcpy(type,"char pointer");}
     |REAL STAR {$$ = nodeMaker ( "REAL POINTER",NULL,NULL); strcpy(type,"real pointer");}
     |INT STAR {$$ = nodeMaker ( "INT POINTER",NULL,NULL); strcpy(type,"int pointer");};

FUNCDEC: IDENT 
	 '(' {addItem(*hash,*stack,$1->token,currScope,type,kind);push(stack,NULL); kind = strcat($1->token," Parameter");}  PARAMSLIST ')' {$$ = nodeMaker ("",$1,nodeMaker("PARAMETERS",$4,NULL));}
	|IDENT '(' ')' {$$ = nodeMaker ("",nodeMaker($1->token,NULL,NULL),NULL);addItem(*hash,*stack,$1->token,currScope,type,kind);push(stack,NULL); };

PARAMSLIST: PARAMSDEC {$$ = nodeMaker ("",$1,NULL); }| PARAMSLIST ';' PARAMSDEC {$$ = nodeMaker ("",$1,$3); };
PARAMSDEC: TYPE IDENTLIST {$$ = nodeMaker ("",$1,$2);};

VARDECLIST: VARDECLIST VARDEC {$$ = nodeMaker ("",$1,$2); }
		|VARDEC {$$ = nodeMaker ("",$1,NULL); }
VARDEC : VAR TYPE {strcpy(kind,"variable");} IDENTLIST ';' {$$ = nodeMaker ("",$2,$4); }
	| STRING  ARRIDLIST ASSIGN STRINGVAR ';'{$$ = nodeMaker ("",nodeMaker("",nodeMaker("STRING",NULL,NULL),$3),nodeMaker("ASSIGN",$5,NULL)); };
	
ARRIDLIST: ARRIDLIST COMMA ARRID | ARRID 
ARRID: IDENT '[' INTVAR ']' {addItem(*hash,*stack,$1->token,currScope,type,"Array");}

IDENTLIST: IDENT {$$ = nodeMaker ("",$1,NULL); addItem(*hash,*stack,$1->token,currScope,type,kind);}
	| IDENTLIST COMMA IDENT{$$ = nodeMaker ("",$1,$3); addItem(*hash,*stack,$3->token,currScope,type,kind);};

CMPSTATEMENT: '{' '}' {$$ = nodeMaker ("{EMPTY}",NULL,NULL); }
	| '{' STATEMENTLIST '}' {$$ = nodeMaker ("{",$2,nodeMaker("}",NULL,NULL)); }
	| '{' VARDECLIST '}' {$$ = nodeMaker ("{",nodeMaker("VARDEC",$1,NULL),nodeMaker("}",NULL,NULL)); }
	| '{' VARDECLIST STATEMENTLIST '}'  {$$ = nodeMaker ("{",nodeMaker("VARDEC",$2,NULL),$3); };
	
STATEMENTLIST: STATEMENT{$$ = nodeMaker ("",$1,NULL); } | STATEMENTLIST STATEMENT{$$ = nodeMaker ("",$1,$2); };
STATEMENT:{push(stack,NULL);} CMPSTATEMENT {$$ = nodeMaker ("",$2,NULL);push_another(reversedStack,pop(stack));}
	| EXPRSTATEMENT {$$ = nodeMaker ("",$1,NULL); }
	| SELECTSTATEMENT {$$ = nodeMaker ("",$1,NULL); }
	| {push(stack,NULL);}ITRSTATEMENT {$$ = nodeMaker ("",$2,NULL);push_another(reversedStack,pop(stack));}
	| JMPSTATEMENT {$$ = nodeMaker ("",$1,NULL); } ;



EXPRSTATEMENT:';'
		|EXPR ';' {$$ =nodeMaker("",$1,NULL);};
EXPR:ASSIGNEXPR {$$ =nodeMaker("",$1,NULL);}
	| EXPR COMMA ASSIGNEXPR {$$ =nodeMaker("",$1,$3);};

ASSIGNEXPR:CONDITIONEXPR {$$ =nodeMaker("",$1,NULL);}
	   | PRIMARYEXPR{strcpy(assign_type,type); } ASSIGN  ASSIGNEXPR {$$ =nodeMaker("ASSIGN",$1,nodeMaker("",NULL,$4));checkType(assign_type,&type,"assign");}  
	   | PRIMARYEXPR  '[' INTVAR ']' ASSIGN ASSIGNEXPR {$$ =nodeMaker("ASSIGN",$1,nodeMaker("",NULL,$3));}  ;



CONDITIONEXPR:OREXPR {$$ =nodeMaker("",$1,NULL);}

OREXPR:ANDEXPR {$$ =nodeMaker("",$1,NULL);}
     | OREXPR {strcpy(help_type,type);}OR ANDEXPR {$$ =nodeMaker("OR",$1,$4);checkType(help_type,&type,"OR");strcpy(type,"bool");};

ANDEXPR: EQEXPR {$$ =nodeMaker("",$1,NULL);} 
	| ANDEXPR {strcpy(help_type,type);}AND EQEXPR {$$ =nodeMaker("AND",$1,$4);checkType(help_type,&type,"AND");strcpy(type,"bool");};
	
EQEXPR:RELATIONEXPR {$$ =nodeMaker("",$1,NULL);} 
	| EQEXPR {strcpy(help_type,type);} EQ RELATIONEXPR {$$ =nodeMaker("EQUAL",$1,$4);checkType(help_type,&type,"equal");strcpy(type,"bool");} 
	| EQEXPR {strcpy(help_type,type);} NOTEQ RELATIONEXPR {$$ =nodeMaker("NOT EQUAL",$1,$4);checkType(help_type,&type,"not equal");strcpy(type,"bool");};

RELATIONEXPR:ADDITIVEEXPR {$$ =nodeMaker("",$1,NULL);}
	| RELATIONEXPR {strcpy(help_type,type);} GREATER ADDITIVEEXPR {$$ =nodeMaker("",$1,nodeMaker("",nodeMaker(">",NULL,NULL),$4));checkType(help_type,&type,"AND");strcpy(type,"GREATER");}  
	| RELATIONEXPR {strcpy(help_type,type);} LESS ADDITIVEEXPR  {$$ =nodeMaker("",$1,nodeMaker("",nodeMaker("<",NULL,NULL),$4));checkType(help_type,&type,"AND");strcpy(type,"LESS");}  
	| RELATIONEXPR {strcpy(help_type,type);} GREATEREQ ADDITIVEEXPR  {$$ =nodeMaker("",nodeMaker("",$1,NULL),nodeMaker("",nodeMaker(">=",NULL,NULL),$4));checkType(help_type,&type,"GREATEREQ");strcpy(type,"bool");}  
	| RELATIONEXPR {strcpy(help_type,type);} LESSEQ ADDITIVEEXPR {$$ =nodeMaker("",nodeMaker("",$1,NULL),nodeMaker("",nodeMaker("<=",NULL,NULL),$4)); checkType(help_type,&type,"LESSEQ");strcpy(type,"bool");  };



ADDITIVEEXPR :MULTIPLICATIVEEXPR {$$ =nodeMaker("",$1,NULL);} 
	     | ADDITIVEEXPR {strcpy(help_type,type);} PLUS MULTIPLICATIVEEXPR {$$ =nodeMaker("",$1,nodeMaker("",nodeMaker("+",NULL,NULL),$4));checkType(help_type,&type,"PLUS");}  
	     |ADDITIVEEXPR {strcpy(help_type,type);} MINUS MULTIPLICATIVEEXPR {$$ =nodeMaker("",nodeMaker("",$1,NULL),nodeMaker("",nodeMaker("-",NULL,NULL),$4));checkType(help_type,&type,"MINUS");}  ;

MULTIPLICATIVEEXPR:CASTEXPR {$$ =nodeMaker("",$1,NULL);}
			| MULTIPLICATIVEEXPR {strcpy(help_type,type);} STAR CASTEXPR {$$ =nodeMaker("",nodeMaker("",$1,NULL),nodeMaker("",nodeMaker("*",NULL,NULL),$4));checkType(help_type,&type,"multiply");}  
			| MULTIPLICATIVEEXPR {strcpy(help_type,type);} DIV CASTEXPR {$$ =nodeMaker("",nodeMaker("",$1,NULL),nodeMaker("",nodeMaker("/",NULL,NULL),$4));checkType(help_type,&type,"div");}  ;


CASTEXPR:UNARYEXPR {$$ =nodeMaker("",$1,NULL);}
	| '(' TYPE ')' CASTEXPR {$$ =nodeMaker("(",nodeMaker("",$2,nodeMaker(")",NULL,NULL)),$4);};

UNARYEXPR:POSTFIX {$$ =nodeMaker("",$1,NULL);}
	| UNARYOP UNARYEXPR {$$ =nodeMaker("",$1,$2);};
	
UNARYOP: '&' {$$ =nodeMaker("&",NULL,NULL);} 
	| STAR {$$ =nodeMaker("*",NULL,NULL);} 
	| PLUS {$$ =nodeMaker("+",NULL,NULL);} 
	| MINUS {$$ =nodeMaker("-",NULL,NULL);} 
	| NOT {$$ =nodeMaker("NOT",NULL,NULL);} ;
	


EXPRLIST: PRIMARYEXPR COMMA ASSIGNEXPR {$$ =nodeMaker("",$1,$3);}
				|ASSIGNEXPR {$$ =nodeMaker("",$1,NULL);};

POSTFIX: PRIMARYEXPR{$$ =nodeMaker("",$1,NULL);}
 		|POSTFIX PLUSPLUS  {$$= nodeMaker("++",$1,NULL);} 
	 	|POSTFIX MINUSMINUS {$$= nodeMaker("++",$1,NULL);} 
		|POSTFIX '(' ')' {$$= nodeMaker("FUNC CALL",$1,NULL);} 
		|POSTFIX '(' EXPRLIST ')' {$$= nodeMaker("FUNC CALL",$1,$2);} ;


PRIMARYEXPR:IDENT {$$ =nodeMaker($1->token,NULL,NULL);help_item=checkID(*hash,$1->token);copy_type(&type,help_item);}   
		| STRINGVAR {$$ =nodeMaker($1->token,NULL,NULL);strcpy(type,"string");}
		| REALVAR {$$ =nodeMaker($1->token,NULL,NULL);strcpy(type,"real");}
		| CHARVAR {$$ =nodeMaker($1->token,NULL,NULL);strcpy(type,"char");}
		| INTVAR {$$ =nodeMaker($1->token,NULL,NULL);strcpy(type,"int");}
		|BOOLVAR {$$ =nodeMaker($1->token,NULL,NULL);strcpy(type,"bool");}
		|'(' EXPRLIST ')'{$$ =nodeMaker("( )",$2,NULL);};
		
SELECTSTATEMENT:IF '(' EXPR ')' STATEMENT %prec IF {$$ = nodeMaker ("",nodeMaker("IF",$3,$5),NULL); }
		|IF '(' EXPR ')' STATEMENT  ELSE STATEMENT {$$ = nodeMaker ("",nodeMaker("IF",$3,$5),nodeMaker("ELSE",$7,NULL)); };

ITRSTATEMENT: WHILE '('EXPR ')' CMPSTATEMENT {$$ = nodeMaker ("WHILE",$3,$5); }
		| DO CMPSTATEMENT WHILE '(' EXPR ')' ';' {$$ = nodeMaker ("",nodeMaker("DO",$2,NULL),nodeMaker("WHILE",$5,NULL)); } 
	| FOR '(' EXPRSTATEMENT EXPRSTATEMENT ')' CMPSTATEMENT
	|FOR   '(' EXPRSTATEMENT EXPRSTATEMENT POSTFIX ')'  CMPSTATEMENT ;
		
JMPSTATEMENT: RETURN ';' {$$ = nodeMaker ("RETURN EMPTY",NULL,NULL); }
	| RETURN EXPR ';' {$$ = nodeMaker ("RETURN",$2,NULL); };

%%
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

