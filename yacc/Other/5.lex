%{
int i;
%}
%%
.* {for(i=0;i<yyleng-1;i++)
	{
	printf("%c%c\t",yytext[i],yytext[i+1]);
	}
}
%%
int main(int argc, char *argv[])
{
	extern FILE *yyin;
	yyin=fopen(argv[1],"r");
	yylex();
	return 0;
}
/*
./a.out 5.txt
RG	GU	UK	KT	
CO	OM	MP	PI	IL	LE	ER	
*/
