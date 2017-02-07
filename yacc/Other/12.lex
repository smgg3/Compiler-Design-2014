%{
#include<stdio.h>
#include "y.tab.h"
extern int yylval;
%}
%%
[0-9]+  {yylval=atoi(yytext);
		return NUM;}
"\n"	{printf("\n");}
.	{return yytext[0];}
%%
main( int argc, char *argv[] )
{ 	extern FILE *yyin;
	yyin = fopen( argv[1], "r" );
	yyparse ();
	
}
yyerror (void) 
{
	printf("Input format is wrong\n");
	return 0;
}
yywrap()
{
	return(1);
}
/*
yacc -dv 12.y 
[RGUKT@Nuz CD Record]$ cc lex.yy.c y.tab.c -lfl
[RGUKT@Nuz CD Record]$ ./a.out 12.txt
Binary format for 10 is  :1 0 1 0 
./a.out 12.txt
Binary format for 100 is  :1 1 0 0 1 0 0 
*/
