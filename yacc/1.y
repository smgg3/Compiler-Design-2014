%{
#include<stdio.h>

%}
%token A B NL
%%
s :anbn NL {printf("The given string belongs to a^nb^n n>=1 grammar.\n");exit(0);};
anbn:A B
	|A anbn B
;

%%
