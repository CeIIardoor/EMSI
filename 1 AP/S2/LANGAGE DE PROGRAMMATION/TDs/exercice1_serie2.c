#include<stdio.h>

main() { 
       /* Déclaration des varibles */
       char TXT[201];
       int L;// La longueur de la chaine de caractères
       int i,j;
       int Cpt_e;
       char AIDE;
       /* Saisie de la chaine de caractères */
       printf(" Entrer une ligne de texte ne depassant pas 200 caractères : ");
       gets(TXT);
       
       /* La longueur L de la chaine */
       L=0;
       while(TXT[L]!='\0')
       L++;
       
       printf("\n La longueur L de la chaine est %d ", L);
       
       /* Le nombre de 'e' contenus dans le texte */
       for(i=0, Cpt_e=0 ; i<L ; i++)
       {
                if (TXT[i]=='e')
                Cpt_e++;
       }
       printf("\n Le nombre de 'e' contenus dans le texte est %d ", Cpt_e);
       
       /* toute la phrase à rebours, sans changer le contenu de la variable TXT. */
       printf("\n Toute la phrase à rebours, sans changer le contenu de la variable TXT :");
       for(i=L-1 ; i>=0 ; i--)
       printf("%c",TXT[i]);
       
       /* toute la phrase à rebours, après avoir inversé l'ordre des caractères dans TXT. */
       for(i=0, j=L-1 ; i<j ; i++ , j-- )
       {
                AIDE=TXT[i];
                TXT[i]=TXT[j];
                TXT[j]=AIDE;
       }
        printf("\n Toute la phrase à rebours, après avoir inversé l'ordre des caractères dans TXT : %s", TXT);
       
       
       
       printf("\n \n FIN DU PROGRAMME ");
       getch();
       }
