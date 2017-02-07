%{
#include<stdio.h>

%}
%token NAME NUM EQUL PLUS MINUS  NL
%%
s : 	NAME EQUL exp NL {printf("Correct arithmetic expression\n");return 0;};
	|exp NL		{printf("Correct arithmetic expression\n");return 0;};
	;
exp :	NUM PLUS NUM
	| NUM MINUS NUM
	| NUM MINUS exp
	| NUM PLUS exp
	;
%%
