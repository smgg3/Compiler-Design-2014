%{
	#include "y.tab.h"
%}
%%
[a-zA-Z\_][a-zA-Z\_0-9]* return NAME;
[0-9]+	return NUM;
"+" 	return PLUS;
"-"	return MINUS;
"=" 	return EQUL;
"\n"	return NL;
%%
int main(void)
{
	yyparse();
	return 0;
}
int yywrap(void)
{
	return 0;
}
int yyerror(void)
{
	printf("Not a correct expression\n");
	exit(0);
}
