%{
#include "y.tab.h"

%}
%%
a {return A;}
b {return B;}
. {return yytext[0];}
"\n" {return NL;}
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
	printf("The given string not belongs to a^nb^n n>=1 grammar.\n");
	exit(0);
}
