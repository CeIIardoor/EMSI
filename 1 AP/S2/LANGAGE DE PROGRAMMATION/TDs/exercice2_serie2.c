#include<stdio.h>
main(){
       /* Déclaration des variables */
       char TXT[201];
       int L;
       int i,j;
       
       /* Saisie de la ligne de texte */
       printf( " Entrer une ligne de texte : ");
       gets(TXT);
       
       /* La longueur L de la chaine */
       
       L=0;
       while(TXT[L]!='\0')
       L++;
       
       /* Traitement */
       printf("\n Avant le traitement : %s ", TXT);
       for (i=0, j=0 ; i < L ; i++)
       {
           if ( TXT[i] !='e')
           {
           TXT[j]=TXT[i];
           j++; 
           }
       }
       
       TXT[j]='\0';
       printf("\n Après le traitement : %s ", TXT);
       
       printf("\n \n FIN DU PROGRAMME ");
       getch();
       }
