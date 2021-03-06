%{
	#include<stdio.h>
	#include<stdlib.h>
	#include "y.tab.h"
	extern yylval;
%}

%%
[\t] ;
[+|-|*|/|<|>|=] {printf("Operator is %s\n",yytext); return OP;}
[0-9]+ {yylval=atoi(yytext); printf("Number is %d\n",yylval); return DIGIT;}
void|int|float|char|for|if|else|while|do|double|return|boolean {printf("Keyword is %s\n",yytext); return KEY;}
[a-zA-Z0-9]+ {printf("Identifier is %s\n",yytext); return ID;}
. ;
%%

int yywrap() {
	return 1;
}
 
