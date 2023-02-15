%{
    #include<stdio.h>
%}

%%
a*ba*(ba*ba*)* {printf("nombre impaire de b\n");}
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