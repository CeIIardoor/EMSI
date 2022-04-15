#include<stdio.h>
#include<string.h>
/* Définition du modèle de structure polynome */
struct polynome {
       int deg ; // Degré du polynome 
       float A[100];// Coefficients du polynome
       };
        
 main(){
        /* Déclaration des variables */
        struct polynome P;
        
        /* Controle de la saisie du degré de P */
        do {
            printf(" Entrer le degré du polynome : ");
            scanf("%d",&P.deg);
            }while ( P.deg < 1 || P.deg > 99 );
            
        /* Saisie des coefficients de P */
        for ( i=0 ; i <= P.deg ; i++ )
        { printf(" A[%d] = ",i);
        scanf("%f",&P.A[i]);
        }
        
        

       printf(" \n \n -----FIN DU PROGRAMME -----");
       getch();
       }
       
