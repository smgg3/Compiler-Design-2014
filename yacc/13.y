%{
#include<stdio.h>

%}
%token NUM NL SYM
%%
E : NUM NL {binary($1);exit(0);}
  ;
%%


int binary(int n)
{
	int sum=0,a=0,temp=1;
	while(n>0)
	{
		a=n%10;
		sum=sum+(temp*a);
		temp=temp*2;
		n=n/10;
	}
	printf("The decimal format of the given binary Number: %d\n",sum);
}
