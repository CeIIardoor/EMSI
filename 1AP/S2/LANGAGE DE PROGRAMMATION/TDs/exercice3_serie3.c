#include<stdio.h>
#include<string.h>
typedef struct {
        int mat;
        char nom[50];
        char prenom[50];
        float salaire;
        }Employe;
        
main(){ 
        /* Déclaration des variables */
        Employe E[1000] ;
        int N = 3 ;
        int i ;
        
        /* Remplissage du tableau */
        for ( i = 0 ; i< N ; i++ )
        {
            printf(" \n Employe %d : \n", i+1 );
            printf( " Entrer le matricule :");
            scanf("%d",&E[i].mat);
            fflush(stdin);
            printf(" Entrer le nom :");
            gets(E[i].nom);
            printf(" Entrer le prenom :");
            gets(E[i].prenom);
            printf("Entrer le salaire :");
            scanf("%f",&E[i].salaire);
            }
