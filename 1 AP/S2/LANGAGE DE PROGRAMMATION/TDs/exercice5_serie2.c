#include<stdio.h>
#include<string.h>
main(){
       /* D�claration des variables */
      char MOT[5][201];
      int i;
      int L;
       
       /* Saisie du tableau de chaines de caract�res */
       printf(" Entrer 5 mots s�par�s par des espaces :");
       for ( i = 0 ; i<5 ; i++)
       scanf("%s",MOT[i]);
       
       /* Affichage des mots dans l'ordre inverse */
       printf("\n Affichage des mots dans l'ordre inverse :");
       for ( i=4 ; i>=0 ; i-- ) 
       printf("%s ", MOT[i]);
       
       /* Affichage du premier caract�re de chaque ligne */
       printf("\n Affichage du premier caract�re de chaque ligne :");
       for ( i=0 ; i<5 ; i++ )
       printf("%c ", MOT[i][0]);
       
       /* Affichage de la longueur de chaque ligne */
       printf("\n Affichae de la longueur de chaque ligne : ");
       for ( i=0 ; i<5 ; i++ )
       {
       L= strlen(MOT[i]);
       printf(" \n Ligne %d : %d ", i , L );
       }
       
       printf("\n\n ----- FIN DU PROGRAMME ----- ");
       getch();
       
       }
       
       
        
