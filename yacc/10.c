#include<stdio.h>
#include<string.h>
main()
{
	int i,j,nt,t,p;
 	printf("Enter the no of terminals :");
 	scanf("%d",&t);
 	printf("\n");
  	char te[t];
	for(i=0;i<t;i++)
	 {
	   printf("Enter the %d terminal:",i+1);
	   scanf("%s",&te[i]);
	  }
	printf("Enter the no of  non terminals:");
	scanf("%d",&nt);
	char nte[nt];
	for(i=0;i<nt;i++)
	{
	   printf("Enter the %d non terminal:",i+1);
	   scanf("%s",&nte[i]);
	}
	printf("Enter the no of productions you have:");
	scanf("%d",&p);
	printf("Enter # at end of the production:\n");
	char pr[p][10],fir[t+1],ch,rch;
	int nti,c=0;
	 for(i=0;i<p;i++)
	     for(j=0;j<10;j++)
	     { 
			if(j==0)
		     	printf("Enter the left hand side production:");
		 	else 
				printf("Enter the right hand side production one symbol at a time:");
	     	scanf("%s",&pr[i][j]);
	     	if( pr[i][j]=='#')
		      break;
		}
	nt=p;
	int m=0,count=0,h=0;char chr[nt];
	goto AR;
	AR :  
     printf("Enter the non terminal for which you want to find the first:");
     scanf("%s",&ch);
	chr[count++]=ch;
     rch=ch;
     goto AE;
	AE :
		h++;
        for(i=0;i<nt;i++)
       {
            if(ch==pr[i][0])
                    nti = i;
			else 
                  	continue;
          	for(j=0;j<10;j++)
              	if(pr[nti][1]==te[j])
                     fir[m++] = te[j];               
            	else
                 if(pr[nti][1]== nte[j])
                      chr[count++]= nte[j];                                   
        }
	if(h<count)
	{
		ch=chr[h];
		goto AE;
	}
	printf("First of %c is:",rch);
	for(i=0;i<m;i++)
     		 printf("  %c\t",fir[i]);	
  	printf("\n....The program is over.......\n");
}
/*
1)
./a.out
Enter the no of terminals :3

Enter the 1 terminal:a
Enter the 2 terminal:b
Enter the 3 terminal:c
Enter the no of  non terminals:3
Enter the 1 non terminal:A
Enter the 2 non terminal:B
Enter the 3 non terminal:C
Enter the no of productions you have:5
Enter # at end of the production:
Enter the left hand side production:A
Enter the right hand side production one symbol at a time:a
Enter the right hand side production one symbol at a time:#
Enter the left hand side production:A
Enter the right hand side production one symbol at a time:B
Enter the right hand side production one symbol at a time:#
Enter the left hand side production:A
Enter the right hand side production one symbol at a time:C
Enter the right hand side production one symbol at a time:#
Enter the left hand side production:B
Enter the right hand side production one symbol at a time:b
Enter the right hand side production one symbol at a time:#
Enter the left hand side production:C
Enter the right hand side production one symbol at a time:c
Enter the right hand side production one symbol at a time:#
Enter the non terminal for which you want to find the first:A
A
A
A
B
C
First of A is:  a	  b	  c	
....The program is over.......

2)
./a.out
Enter the no of terminals :6

Enter the 1 terminal:a
Enter the 2 terminal:b
Enter the 3 terminal:c
Enter the 4 terminal:d
Enter the 5 terminal:e
Enter the 6 terminal:f
Enter the no of  non terminals:2
Enter the 1 non terminal:S
Enter the 2 non terminal:A
Enter the no of productions you have:3
Enter # at end of the production:
Enter the left hand side production:S
Enter the right hand side production one symbol at a time:a
Enter the right hand side production one symbol at a time:A
Enter the right hand side production one symbol at a time:b
Enter the right hand side production one symbol at a time:#
Enter the left hand side production:A
Enter the right hand side production one symbol at a time:c
Enter the right hand side production one symbol at a time:d
Enter the right hand side production one symbol at a time:#
Enter the left hand side production:A
Enter the right hand side production one symbol at a time:e
Enter the right hand side production one symbol at a time:f
Enter the right hand side production one symbol at a time:#
Enter the non terminal for which you want to find the first:A
A
A
First of A is:  c	  e	
....The program is over.......
*/
