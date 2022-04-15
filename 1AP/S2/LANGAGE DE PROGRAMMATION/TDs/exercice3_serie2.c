#include<stdio.h>
#include<string.h>
main(){
       /* Déclaration des variables */
       char CH1[201],CH2[201];
       
       /* Saisie des chaines de caractères */
       
       printf(" Introduisez la première chaîne: ");
       gets(CH1);
       printf(" Introduisez la deuxième chaîne: ");
       gets(CH2);
       
       /* Traitement */
       
       if ( strcmp(CH1,CH2) == 0)
       printf("\n \"%s\" et \"%s\" sont identhiques ",CH1,  CH2);
       else if ( strcmp(CH1,CH2) == 1)
       printf("\n \"%s\" suit \"%s\" ",CH1,  CH2);
       else
       printf("\n \"%s\" precède \"%s\" ",CH1,  CH2);
       
       printf("\n \n FIN DU PROGRAMME ");
       getch();
       }
