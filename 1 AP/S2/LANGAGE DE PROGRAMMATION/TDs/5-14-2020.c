#include<stdio.h>
#include<string.h>
#include<conio.h>
/* D�finition du mod�le de la structure Employe */
typedef struct {
        int mat;
        char nom[50],prenom[50];
        float salaire;
        }Employe;
        
        main(){
               /* D�claration des variables */
               Employe E[1000];
               int i, N = 3 ;
               int matricule = 1;
               int matricule_recherche; /* Matricule saisi par l'utilisateur */
               int trouve; // Bool pour la recherche ( trouve=0 ---> faux ; trouve =1 ---> Vrai )
               char nom_recherche[50] , prenom_recherche[50];
               /* Remplissage du tableau */
               printf ( " Saisie de %d employ�(s) : \n ", N);
               for ( i = 0 ; i < N ; i++ )
               {   E[i].mat = matricule ;
                   matricule++;
                   printf( "\n Employ� %d : \n ", E[i].mat);
                   fflush(stdin);
                   printf(" Entrer le nom : ");
                   gets( E[i].nom );
                   printf(" Entrer le prenom : ");
                   gets( E[i].prenom );
                   printf(" Entrer le salaire : ");
                   scanf("%f", &E[i].salaire );
               }
               
               
               /*  Saisie du matricule recherch� */
               printf(" \n Entrer le matricule recherch� : ");
               scanf("%d", &matricule_recherche);
               
               /* Recherche � partir d'un matricule */
               trouve = 0 ; // On n'a pas encore trouv� d'employ� correspondant au matricule saisi
               for ( i = 0 ; i < N && trouve == 0; i++ )
               {
                   if ( matricule_recherche == E[i].mat )
                   {
                        trouve = 1;
                        printf(" \n %d correspond � l'employ�(e) : %s %s ", E[i].mat , E[i].nom , E[i].prenom);
                   }
                   }
               if ( trouve == 0 )
               printf(" %d ne correspond a aucun employ� ", matricule_recherche);
               
               /* Saisie du nom et du prenom recherch�s */
               fflush(stdin);
               printf(" Entrer le nom recherch� : ");
               gets ( nom_recherche );
               printf( " Entrer prenom recherch� : ");
               gets ( prenom_recherche ) ;
               
               /*Recherche � partir d'un nom et d'un prenom */
               trouve = 0;
               for ( i = 0 ; i < N  && trouve == 0 ; i++ )
               {
                   if ( strcmp(nom_recherche,E[i].nom) == 0 && strcmp(prenom_recherche,E[i].prenom) == 0 )
                   {
                        trouve = 1;
                        printf(" \n %s %s  correspond � l'employ�(e) : %d", E[i].nom , E[i].prenom ,E[i].mat);
                        }
               }
               if ( trouve == 0 )
               printf(" %s %s ne correspond a aucun employ� ", nom_recherche ,prenom_recherche);
               
               
               /* Augmentation du salaire de 5% des employ�s qui ont un salaire inf�rieur � 1500 Dhs */
               
               for ( i = 0 ; i < N ; i++ )
               {
                   if ( E[i].salaire <= 1500 )
                   E[i].salaire += E[i].salaire * 0.05;
               }
               
               printf( "\n Op�ration effectu�e " );
               
               
               
               
               printf(" \n \n ----- FIN DU PROGRAMME ----- ");
               getch();
               }
               
