%{
	#include "y.tab.h"
%}
%%
[ \t] ;

"(" return OPEN;
")" return CLOSE;

"\n" { return NL; }
. ;

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
	printf("\nNOT Balanced parenthesis.\n");
	exit(0);
}
