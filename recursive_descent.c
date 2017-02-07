/*Program to That simulates Recursive Descent Parser on the following grammer
 E->TK
 K->+TK | e
 T->FL
 L->*FL |e
 F-> (E) |id
 			note: e corresponds to epsilon
 			      K corresponds to E prime
 			      L corresponds to T prime
 			*/
 #include<stdio.h>
 #include<string.h>
 int i=0,x;
 char input[20];
 main(){
 	printf("Enter a String :");
 	scanf("%s",input);
 	e();
 	if(input[i]=='\0'){
 			printf("It is a valid string :");
 			}
 	else
 		printf("It is invalid String");
 	}
 e(){
 	t();
 	eprime();	//for non-terminal K
 	}
 eprime(){
 	if(input[i]=='+')
 			{
 				advance();
 				t();
 				eprime();
 				}
 	}
 t(){
 	f();
 	tprime(); //for non-terminal L
 		}
 tprime(){
 	if(input[i]=='*'){
 		advance();
 		f();
 		tprime();
 			}
 		}
 f(){
 	if(input[i]=='d')	//for id
 		advance();
 	else{
 		if(input[i]=='('){
 				advance();
 				e();
 				if(input[i]==')')
 					advance();
 				else
 					error();
 					}
 		else{
 			error();
 				}
 		}
 	}
 advance(){
 	i++;
 	}
 error(){
 	printf("Invalid");
 	exit(0);
 	}
 	
 	
