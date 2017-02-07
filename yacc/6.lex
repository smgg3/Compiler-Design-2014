%{  
int i;  
%}
%%
.*	{
		for(i=yyleng;i>=0;i--)
			printf("%c",yytext[i]);
	}
%%

int main(){
	printf("Reverse strings for the input string are :\n");
	yylex();
	
	}
/*
./a.out<<END
> COMPILER
> END
Reverse strings for the input strings are :
RELIPMOC

*/
