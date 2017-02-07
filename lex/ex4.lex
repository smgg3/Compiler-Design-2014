%{
%}
comment1 \/\*.*(\n.*)*\*\/
comment2  \/\/.*
%%
{comment1}  ECHO;
{comment2}   ECHO;
.	;
\n	;
%%
main(int argc, char*argv[])
{
extern FILE *yyin;
yyin=fopen(argv[1],"r");
yylex();
printf("\n");
return 0;
}
