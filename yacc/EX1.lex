%{
#include "y.tab.h"
%}
%%
[0-9]+ return NUMBER;
"\/" return SLASH;
'\n' return NL;
%%
int main()
{
   yyparse();
   return 0;
}

int yywrap()
{
   return 0;
}
int yyerror(void)
{
	printf("ERROR\n");
	exit(0);

}
