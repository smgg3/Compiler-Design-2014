#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct production{
	char NT;
	char *s;
};
typedef struct production P;
P *p;
char epsilon;
int n;
int *calc;
int symbolType(char c){
	int i;
	if(c==epsilon){
		return -1;
	}
	if(c=='\0'){
		return -2;
	}
	for(i=0;i<n;i++){
		  if(p[i].NT==c)
		      return 1;
	}
	return 0;
}
P getProduction(char c){
	int i;
	for(i=0;i<n;i++){
		if(p[i].NT==c){
			return p[i];
		}
	}
}
void First(char *s,int j){
	int x=symbolType(s[j]);
	if(x==0){
		printf("%c,",s[j]);
	}
	else if(x==-2){
			printf("%c,",epsilon);
	}
	else if(x==-1){
			First(&s[j+1],0);
	}
	else if(x==1){
	  int i;
	  for(i=0;i<n;i++){
		 if(p[i].NT==s[j])
		    First(p[i].s,j);
	  }
	}
}
int FirstOfAllLHS(){
	int i;
	int boolean[256];
	for(i=0;i<256;i++){
		boolean[i]=0;
	}
	for(i=0;i<n;i++){
	  if(boolean[p[i].NT]==0){
		printf("First(%c)={",p[i].NT);
		First(&p[i].NT,0);
		printf("}\n");
		boolean[p[i].NT]=1;
	  }
	}
}
int main(){
	int i;
	printf("Enter number of productions:");
	scanf("%d",&n);
	getchar();
	printf("Enter a symbol for epsilon:");
	scanf("%c",&epsilon);
	getchar();
	//printf("Enter a character for epsilon:");
	//scanf("%c",&epsilon);
	char w;
	//scanf("%c",&w);
	P s[n];
	p=s;
	int q;
	char buf[100];
	for(i=0;i<n;i++){
		printf("Enter non terminal:");
		scanf("%c",&s[i].NT);
		getchar();
	    printf("Enter right side form:");
	    scanf("%s",buf);
		getchar();
		s[i].s=(char *)malloc(strlen(buf)+1);
		strcpy(s[i].s,buf);
	}
	for(i=0;i<n;i++){
		printf("%c-->%s\n",p[i].NT,p[i].s);
	}
	int boolean[n];
	calc=boolean;
	FirstOfAllLHS();
	return 0;
}
