#include<stdio.h>
main(){
       /* D�claration des variables */
       char CH1[201],CH2[201];
       char CH3[201]=" ";
       int L1 , L2;
       int i , j;
       
       /* Saisie des chaines de caract�res */
       
       printf(" Introduisez la premi�re chaine :" );
       gets(CH1);
       
       printf(" Introduisez la deuxi�me chaine :" );
       gets(CH2);
       
       /* Longueurs des chaines de caract�res */
       L1 = 0;
       while ( CH1[L1]!='\0')
       L1++;
       
       L2 = 0;
       while ( CH2[L2]!='\0')
       L2++;
       
       /* Copie de la moiti�e de CH1 dans CH3 */
       for( i = 0 , j = 0 ; i< (L1/2) ; i++ , j++)
                    CH3[j]=CH1[i];

       
       /* Ajout de la moiti�e de CH2 � la fin de CH3 */
       for ( i = 0 ; i< (L2/2) ; i++ , j++ )
                   CH3[j]=CH2[i];
       
       
       CH3[j] = '\0';//Ajout du caract�re null pour indiquer la fin de la chaine 
       
       printf("\n La chaine r�sultante est %s ",CH3);
       
       printf("\n\n ----- FIN DU PROGRAMME ----- ");
       getch();
       
       }
       
       
        
