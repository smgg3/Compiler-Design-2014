#include<stdio.h>
main()
{
char tk;
int T,N;
int a,b;
char NT[10];
printf("No.of Nonterminals:");
 scanf(" %d",&N);
printf("No.of Terminals:");
 scanf(" %d",&T);
printf("enter Nonterminals:");

int i=0,j=0;
for(i=0;i<N;i++)
  scanf(" %c",&NT[i]);


char prod[10][10];
for(i=0;i<N;i++)
   prod[i][0]=NT[i];
 
for(i=0;i<N;i++)
 {
   j=1;
   printf("\nenter production for %c",prod[i][0]);
   for(j=1;prod[i][j-1]!='$';j++)
     scanf(" %c",&prod[i][j]);
 }
char ch;
printf("enter a Nonterminal to get the follow of it:");
scanf(" %c",&ch);
printf("\n");
tk=ch;
if(ch=='S')
  printf("$\n");
printf("\n");

for(i=0;i<N;i++)
 for(j=1;prod[i][j]!='\0';j++)
 {
 if(prod[i][j]==ch)
  {
	if(prod[i][j+1]<97)
          {tk=prod[i][j+1];
               if(tk=='&');
               else
                 {
			
                        
                         a=0,b=0;
                            	 while(a<N)
                             	   {a=0;
                                     for(;a<N;a++)
                               	     {
                                        if(prod[a][b]==tk)
                                           {
                                    	           if(prod[a][b+1]<97)
			                             { tk = prod[a][b+1];
			                               break;
			                             }
                  
                                        else
                                           printf(" %c\n", prod[a][b+1]); 
                 
                                     }

                                   }
                        
                   }
            }
}
}
 }
}
