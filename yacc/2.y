%{
#include<stdio.h>
%}
%token A B NL
%%
start :a NL {printf("The given string belongs to a^nb^n n>=1 grammar\n");return 1;};
a :A B
	|A a B
	;
%%

