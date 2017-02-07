%{
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "y.tab.h"
%}
%token MONTH DATE YEAR SLASH NL
%%
date :MONTH SLASH DATE SLASH YEAR NL {printf("Date format is correct\n");return 0;};
%%

