%{
	int a=0,e=0,i=0,o=0,u=0,total=0;
%}
%%
a|A	{a++;}
e|E	{e++;}
i|I	{i++;}
o|O	{o++;}
u|U	{u++;}
.	;
"\n"	;
%%
main(int argc,char*argv[])
{
	extern FILE *yyin;
	yyin=fopen(argv[1],"r");
	yylex();
	total=a+e+i+o+u;
	printf("Frequency of a is :%f\n",(float)a/(float)total);
	printf("Frequency of e is :%f\n",(float)e/(float)total);
	printf("Frequency of i is :%f\n",(float)i/(float)total);
	printf("Frequency of o is :%f\n",(float)o/(float)total);
	printf("Frequency of u is :%f\n",(float)u/(float)total);
	return 0;
}
/*
./a.out 8.txt
Frequency of a is :0.142857
Frequency of e is :0.142857
Frequency of i is :0.285714
Frequency of o is :0.285714
Frequency of u is :0.142857

*/

