%{
    #include<stdio.h>
%}
%%
"cad" {printf("C'est a dire");}
"ssi" {printf("Si et seulement si");}
"afd" {printf("Automate a etats finis deterministe");}
"fin" {exit(0);}
%%
int main()
{
    yylex();
    return 0;
}
int yywrap(){
    return 1;
}