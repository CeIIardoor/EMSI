%{
 #include<stdio.h>
%}
%%
^\n {}
"mauvais" {printf("bon");}
(\+|\-)?[0-9]+(\.[0-9]+)?((e|E)(\+|\-)?[0-9]+)? {printf("nbr reel");continue;}
\"(.)*\" {printf("chaine de caracteres");continue;}
%%

int main(){
 printf("Entrez la chaine: ");
 yylex();
return 0;
}
int yywrap(){
return 1;
}