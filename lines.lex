%{
int lines=0,words=0,characters=0;%}
word [^ \t\n]+
eol \n
%%
{word} {words++;characters+=yyleng;}
{eol} {characters++;lines++;}
. { characters++; }
%%
int main()
{
yylex();
printf("%d %d %d \n",lines,words,characters);
}