%{
   #include<stdio.h>
%}

%%
"'"([A-Za-z"])*"'" {printf("Commentaire Pascal valid\n");}
[ \t]+$ {/*supprimer les espaces et les tabulations*/}
.{3} {printf("Chaine de 3 caractères");}
.{5,} {printf("Chaine de 5 caractères ou plus");}
%%

int main()
{
    printf("Entrez un commentaire Pascal : ");
    yylex();
    return 0;
}

int yywrap()
{
    return 1;
}