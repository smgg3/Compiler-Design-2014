
#include<stdio.h>
#define MAX 9999
int check(char,char [],char[],int,int);//function prototype
main(){
       int nn,tn;//no.of nonterminals(nn) and terminals(tn)
       printf("\n\n\t\tFINDING FIRST of GIVEN GRAMMAR\n\n");
       printf("\n\tNote: End of production with '$'\n\n");
       system("color 0a");
       printf("Enter no.of non-terminals\n");
       scanf("%d",&nn);
       printf("\nEnter no.of terminals\n");
       scanf("%d",&tn);
       //Declaring the arrays 
       char store[nn][MAX];
       char nt[nn],t[MAX];
       printf("Enter non-terminals as a string <Ex:ABCDEF>\n");
       int i,j;
       scanf("%s",nt);
       printf("Enter terminals as a string<EX:ab*+/>\n");
       scanf("%s",t);
       char ch;
       //Reading into 2-D array, making the first column  as Non-terminals
       for(i=0;i<nn;i++){
                         store[i][0]=nt[i];
                         }
       //Reading Productions
       for(i=0;i<nn;i++){
                         printf("\nProductions of %c-->\n",store[i][0]);
                         j=1;
                         fflush(stdin);
                         while((ch=getche())!='$'){//the production ends with $
                                                    fflush(stdin);
                                                    store[i][j++]=ch;
                                                    }         
                         }
//Printing the Production Matrix to the Console
       printf("\nThe production Matrix is \n");
       for(i=0;i<nn;i++){
                         for(j=0;j<tn;j++){
                                           printf("%c\t",store[i][j]);
                                           }
                                           printf("\n");
                                           }
       //Finding first of all non-terminals
       for(i=0;i<nn;i++){
                         printf("First of %c\n",store[i][0]);
                         int k=i;
                         label:
                         for(j=1;j<tn;j++){
                                           int y=check(store[i][j],nt,t,nn,MAX);
                                           if(y!=-1 && y!= -999 ){
                                                                 i=y;
                                                                 //if non-terminal them we need to check corresponding row at i
                                                                 goto label;
                                                                  }
                                           else if(y==-1){                              
                                                printf("%c",store[i][j]);
                                                break;
                                                }
                                           }
                         printf("\n");
                         i=k;
                         }
       getch();
       }
int check(char p,char n[],char t[],int nn,int tn){
    int i,j;
     fflush(stdin);
    for(i=0;i<nn;i++){
                      if(n[i]==p)
                                return i;//if non-terminal we are teturning it's index 
                      }         
                      fflush(stdin);
    for(j=0;j<tn;j++){
                      if(t[j]==p)return -1;
                      }
    return -999;
}
