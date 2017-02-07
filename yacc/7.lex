%{
%}
cmnt1 \/\*([^*][^/])*(\n([^*][^/])*)*\*\/|\/\/.*
%%
{cmnt1} ;
. 	ECHO;
"\n" 	ECHO;
%%
main(int argc,char*argv[])
{
	extern FILE *yyin;
	yyin=fopen(argv[1],"r");
	yylex();
	return 0;
}


