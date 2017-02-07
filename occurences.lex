%{
	int count=0;
%}
%%
"rama" {count++;}
"sita" {count++;}
%%
main(int argc,char*argv[])
{
	extern FILE *yyin;
yyin=fopen(argv[1],"r");
yylex();
printf("No of occurences=%d\n",count);
return 0;
}
