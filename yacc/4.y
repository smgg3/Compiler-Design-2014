%{
#include<stdio.h>

%}
%token OPEN CLOSE NL
%%
start :p NL {printf("\nBalanced parenthesis\n");yyparse();};
p	:
	|OPEN p CLOSE p
	;
%%
