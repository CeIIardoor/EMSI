%{
#include<stdio.h>
int p = 0;
int affichage();

%}
%%
"(" {p++;}
")" {p--;}
\n {affichage();exit(0);}
%%
int main()
{
	yylex();

	return 0;
}

int affichage()
{
	if (p == 0)
	{
		printf("La parenthese est bien fermee\n");
	}
	else if (p > 0)
	{
		printf("Il manque %d parenthese(s) fermante(s)\n", p);
	}
	else
	{
		printf("Il manque %d parenthese(s) ouvrante(s)\n", -p);
	}
	return 0;
}
int yywrap()
{
	return 1;
}