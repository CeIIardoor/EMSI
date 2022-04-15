#include<stdio.h>
#include<string.h>
/* Définition d'un modèle de structure nommée etudiant et composée de deux champs qui
 vont representer le nom et les trois notes d'un etudiant */
 struct etudiant {
        char nom[20];
        float notes[3];
        };
        
 main(){
        /* Déclaration d'une variable de type struct etudiant */
        struct etudiant etud1;
        int i;
        
        /*Saisie des champs de la variable etud1 */
        printf(" Entrer le nom : ");
        gets(etud1.nom);
        printf (" Entrer les notes :\n");
        for ( i=0 ; i<3 ; i++ )
        {
            printf(" Note %d :",i+1);
            scanf("%f",&etud1.notes[i]);
            }
            
        /* Affichage des champs de la variable etud 1 */
        printf(" \n etud1 : \n");
        printf(" Nom : %s ", etud1.nom);
        for ( i=0 ; i<3 ; i++ )
        printf(" \n Note %d : %f ", i+1 , etud1.notes[i]);
        
        

       printf(" \n \n -----FIN DU PROGRAMME -----");
       getch();
       }
       
