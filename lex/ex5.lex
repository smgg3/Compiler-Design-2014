%{


%}
character   .
newline      \n

%%
{character}  {printf("%o\n",yytext[0]);}
{newline}    {printf("%o\n",'\n');}
%%

main(int argc,char*argv[]){
extern FILE *yyin;
yyin=fopen(argv[1],"r");
yylex();
printf("\n");
return 0;
}
