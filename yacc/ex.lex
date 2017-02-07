%{
#include "y.tab.h"
int c=0;
%}
%%
"\/"				{return SLASH;};	
[0-9][0-9][0-9][0-9]		{return YEAR;};	
(0[1-9])|(1[0-2])		{if(c==0){c=1;return MONTH;} return DATE;};
0[1-9]|[1-2][0-9]|30|31		{return DATE;};
"\n"				{return NL;};
. 				;
%%
int main()
{
   yyparse();
   return 0;
}

int yyerror(void)
{
	printf("Date format is not correct\n");
	exit(0);

}
