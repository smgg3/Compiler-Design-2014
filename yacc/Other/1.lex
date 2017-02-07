%{
	int count=0;
%}
%%
RGUKT	{count++;}
.	;
"\n"	;
%%
main(int argc,char *argv[])
{
	extern FILE *yyin;
	yyin=fopen(argv[1],"r");
	yylex();
	printf("No.of occurences of RGUKT in the given file :%d\n",count);
	return 0;
	
}
/*
[RGUKT@Nuz CD Record]$ flex 1.lex 
[RGUKT@Nuz CD Record]$ cc lex.yy.c -lfl
./a.out 1.txt
No.of occurences of RGUKT in the given file :2

*/

