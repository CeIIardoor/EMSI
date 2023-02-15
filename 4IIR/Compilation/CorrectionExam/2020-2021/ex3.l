%{
    #include <stdio.h>
%}

%%
^[ \t]+\n { /* supprime ligne vide */ }
"mauvais" { printf("bon"); }
[0-9]*.[0-9]* { printf("nombre reel"); }
\".*\" { printf("chaine de caracteres"); }


%%

int main() {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}