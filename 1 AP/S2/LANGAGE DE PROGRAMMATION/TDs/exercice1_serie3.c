#include<stdio.h>
#include<math.h>
/* Définition de la structure complexe */
struct complexe {
       double img;
       double reel;
       };
       
main() {
       /* Déclaration des variables */
       struct complexe Z;
       double modulo ;
       
       /* Saisie des champs de la  structure */
       printf(" Entrer la partie imaginaire du complexe : ");
       scanf("%lf",&Z.img);
       printf(" Entrer la partie reelle du complexe : ");
       scanf("%lf",&Z.reel);
       
       /* Calcul du modulo du nombre complexe */
       
       modulo = sqrt ( pow( Z.img , 2) + pow(Z.reel , 2) );
       
       /* Affichage du résultat final */
       
       printf ( " Le modulo du nombre complexe ( (%.2lf) + (%.2lf) i ) est %lf ", Z.reel , Z.img , modulo );
       
       printf(" \n\n ----- FIN DU PROGRAMME ----- ");
       getch();
       }
       
       
