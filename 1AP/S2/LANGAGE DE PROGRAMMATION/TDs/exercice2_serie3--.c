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
        float x;
        int i;
        float R;
        int choix ;
        int nbr_e =1 ;
        do{
        
            /* Controle de la saisie du degré de P */
            do {
                printf(" \n Essai %d :",nbr_e++);
                printf("\n Entrer le degré du polynome : ");
                scanf("%d",&P.deg);
                }while ( P.deg < 1 || P.deg > 99 );
                
            /* Saisie des coefficients de P */
            for ( i=0 ; i <= P.deg ; i++ )
            { printf(" A[%d] = ",i);
            scanf("%f",&P.A[i]);
            }
            
            /* Affichage du polynome  */
            printf("\n P ( x ) = "); 
            for ( i = P.deg ; i > 0 ; i-- )
                printf(" %.0f x^%d + ", P.A[i] , i );
                
            
            printf(" %.0f x^%d" , P.A[i],i);
            
            /* Saisie de la valeur de x */
            printf(" \n Entrer la valeur de x :");
            scanf("%f",&x);
            
            /* Calcul du polynome */
            for ( i = 0 , R = 0 ; i <= P.deg ; i++ )
                R +=  P.A[i] * pow(x,i);
                
            /* Affichage du résultat */
            printf(" \n P ( %.2f ) = %.2f ",x,R);
            
            printf("\n Tapez 0 si vous souhaitez quittez le programme \n Tapez n'importe quel autre caractère pour recommencer ");
            scanf("%d",&choix);
            
        }while( choix !=0 );
       
       printf(" \n \n -----FIN DU PROGRAMME -----");
       getch();
       }
       
