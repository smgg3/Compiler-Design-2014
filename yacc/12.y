%{
	#include<stdio.h>
	#include<math.h>
	int  i=0,r=0,a[10],x,j=0;
%}
%token NUM;
%%
start:NUM{
	  x=$1;
		printf("Binary format for %d is  :",x);
		while(x>0){
		r=x%2;
		a[i]=r;
		x=x/2;
		i++;}
		for(j=i-1;j>=0;j--){
		printf("%d ",a[j]);
		}
	}
	;
%%

