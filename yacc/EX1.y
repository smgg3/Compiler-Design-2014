%{
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "y.tab.h"
%}
%token NUMBER SLASH NL
%%
	
date : 
	|NUMBER SLASH NUMBER SLASH NUMBER NL {printf("OK");return 0;}
;
%%

