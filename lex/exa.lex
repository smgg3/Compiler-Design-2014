%{
/* hello */
int c=0;
%}

char    [A-Z]

%%
{char}  printf("\t");
%%
main(){
yylex();
return 0;
}
