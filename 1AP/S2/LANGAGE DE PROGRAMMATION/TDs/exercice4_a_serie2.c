#include<stdio.h>
#include<string.h>
main(){
       /* D�claration des variables */
       char CH1[201],CH2[201];
       char CH3[201]=" ";
       int L1 , L2;
       
       /* Saisie des chaines de caract�res */
       
       printf(" Introduisez la premi�re chaine :" );
       gets(CH1);
       
       printf(" Introduisez la deuxi�me chaine :" );
       gets(CH2);
       
       /* Longueurs des chaines de caract�res */
       
       L1 = strlen(CH1);
       L2 = strlen(CH2);
       
       /* Copie de la moiti�e de CH1 dans CH3 */
       
       strncpy( CH3 , CH1 , (L1/2) );
       
       /* Ajout de la moiti�e de CH2 � la fin de CH3 */
       
       strncat( CH3 , CH2 , (L2/2));
       
       
       printf("\n La chaine r�sultante est %s ",CH3);
       
       printf("\n\n ----- FIN DU PROGRAMME ----- ");
       getch();
       
       }
       
       
        
