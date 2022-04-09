#include<stdio.h>
#include<string.h>
main(){
       /* Déclaration des variables */
       char CH1[201],CH2[201];
       char CH3[201]=" ";
       int L1 , L2;
       
       /* Saisie des chaines de caractères */
       
       printf(" Introduisez la première chaine :" );
       gets(CH1);
       
       printf(" Introduisez la deuxième chaine :" );
       gets(CH2);
       
       /* Longueurs des chaines de caractères */
       
       L1 = strlen(CH1);
       L2 = strlen(CH2);
       
       /* Copie de la moitiée de CH1 dans CH3 */
       
       strncpy( CH3 , CH1 , (L1/2) );
       
       /* Ajout de la moitiée de CH2 à la fin de CH3 */
       
       strncat( CH3 , CH2 , (L2/2));
       
       
       printf("\n La chaine résultante est %s ",CH3);
       
       printf("\n\n ----- FIN DU PROGRAMME ----- ");
       getch();
       
       }
       
       
        
