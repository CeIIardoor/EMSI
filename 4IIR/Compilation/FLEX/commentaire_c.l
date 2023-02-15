%{
#include <stdio.h>
%}
%%
\/\/.*\n { printf("il s'agit d'un commentaire en c (une seule ligne)"); }
\/\*(.|n)*\*\/ { printf("il s'agit d'un commentaire en c (multi ligne)"); }
.* { printf("commentaire invalide"); }
%%
int main(){
	printf("donnez une chaine: ");
 	yylex();
	
 	return 0;
}
int yywrap(){ // pour delimiter la fin de la chaine
  return 1;
}
