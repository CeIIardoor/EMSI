#include<stdio.h>
#include<string.h>
/* D�finition du mod�le de structure polynome */
struct polynome {
       int deg ; // Degr� du polynome 
       float A[100];// Coefficients du polynome
       };
        
 main(){
        /* D�claration des variables */
        struct polynome P;
        
        /* Controle de la saisie du degr� de P */
        do {
            printf(" Entrer le degr� du polynome : ");
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
       
