%{
  char i;
%}

%%
[b-yB-Y]	{ i=yytext[0];
		printf("%c\npredecessor :%c\nsuccessor :%c\n",i,i-1,i+1);
	}

[0-9]+  { 
		printf("%d\npredecessor:%d\n",atoi(yytext),atoi(yytext)-1);
          	printf("successor:%d\n",atoi(yytext)+1);  }

[a|A] 		{i=yytext[0];printf("%c\npredecessor is not there\nsuccessor :%c",i,i+1);}
[z|Z] 		{i=yytext[0];printf("%c\npredecessor :%c\nsuccessor is not there",i,i-1);}



%%
main(int argc ,char *argv[])
{
	
	yylex();
	return 0;
}
/*
./a.out<<END
rgukt123
END
r
predecessor :q
successor :s
g
predecessor :f
successor :h
u
predecessor :t
successor :v
k
predecessor :j
successor :l
t
predecessor :s
successor :u
123
predecessor:122
successor:124

*/
