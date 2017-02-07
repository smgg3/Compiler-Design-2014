%{
int lineno=1;
%}
line  .*\n
%%
{line} {printf("%5d   %s",lineno++,yytext);}
%%

