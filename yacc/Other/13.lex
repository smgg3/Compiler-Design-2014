%{
#include<stdio.h>
#include "y.tab.h"
extern int yylval;
%}
%%
[01]+ {yylval = atoi(yytext); return NUM;}
[0-9]+ {return yytext[0];}
"\n" {return NL;}
%%
main(int argc, char *argv[])
{ 	extern FILE *yyin;
	yyin = fopen( argv[1], "r" );
	yyparse();
	getchar();
}
int yywrap()
{
	return 1;
}
void yyerror(void)
{
	printf("\nFormat error, Enter the binary digits only\n");
}
/*
./a.out 13.txt
The decimal format of the given binary Number: 9
*/
