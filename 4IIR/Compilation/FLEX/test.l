%{
#include <stdio.h>
%}
%%
[ \t]+	{/* supprime les espaces et tabulations */ }
bslama	{exit(0);}
%%
int main(){
	printf("donnez une chaine: ");
 	yylex();
	
 	return 0;
}
int yywrap(){ // pour délimiter la fin de la chaine
  return 1;
}
