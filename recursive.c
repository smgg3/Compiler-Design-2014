/*s-->(L)| a
  L--> L,S|S
  */
#include<stdio.h>
#include<stdlib.h>
char ch;
main(){
    printf("Enter string:");
	ch=getchar();
	S();
	if(ch=='$')
		printf("Parsing Successful\n");
	else
		printf("Parsing Error\n");
		getch();
}
match(char c){
	if(ch==c)
		ch=getchar();
	else{
		printf("Error\n");
		exit(0);}
	}
S(){
	if(ch=='('){
		match('(');
		L();
		match(')');
		}
	else if(ch=='a')
		match('a');
	else
	{
		printf("Error\n");
		getch();
		exit(0);
	}
	
}
L(){
	if(ch=='(' || ch=='a'){
		S();
		L1();
		}
	else
	{
		printf("Error\n");
		getch();
		exit(0);
	}
	
	}
L1(){
	if(ch==','){
		match(',');
		S();
		L1();
		}
	else
		return;
	}

