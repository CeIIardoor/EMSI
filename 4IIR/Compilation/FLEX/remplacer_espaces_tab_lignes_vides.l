%{
#include <stdio.h>
%}
%%
^[ \t]+\n {/* les lignes blanches */}
^[ \t]+	{/* espaces en debut de ligne */}
[ \t]+$ {/* espaces et tabs en fin de ligne*/}
^\n {/* debut blanc */}
[ \t]+ {/* espaces et tabs multiples */ printf(" ");}
%%
int main(){
	printf("donnez une chaine: ");
 	yylex();
	
 	return 0;
}
int yywrap(){ // pour delimiter la fin de la chaine
  return 1;
}
