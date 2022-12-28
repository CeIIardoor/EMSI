%{
    #include<stdio.h>
    int nbr_mots = 0;
%}
%%
[^ \t\n]+ {nbr_mots++;}
fin\n {printf("Nombre de mots : %d", nbr_mots); exit(0);}
%%
int main()
{
    yylex();
    return 0;
}
int yywrap()
{
    return 1;
}