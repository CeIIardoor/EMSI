%{
#include <stdio.h>
%}

%%
1"11"*0*  {printf("oui\n");}

%%

int main(){
	printf("donnez une chaine: ");
 	yylex();
 	return 0;
}
int yywrap(){
    return 1;
}
