#include<stdio.h>
#include<string.h>
/* D�finition d'un mod�le de structur */
struct enreg{
       int numero;
       int qte;
       float prix;
       };
       
main(){
       struct enreg art1;
       struct enreg art2,art3;
       /* D�claration et initialisation d'une variable de type struct */
       struct enreg art4 = { 104 , 3 , 9.25 };
       /* Saisie des champs de la variable art1 */
       printf("\n Saisie des champs de la variables art1 : ");
       printf("\n Entrer le num�ro : ");
       scanf("%d",&art1.numero);
       printf("\n Entrer la quantit� :");
       scanf("%d",&art1.qte);
       printf("\n Entrer le prix :");
       scanf("%f",&art1.prix);
       
       /*Affichage des champs de la variable art1*/
       printf("\n\n art1 : \n Num�ro : %d \n Quantit� : %d \n Prix : %f ",art1.numero,art1.qte,art1.prix);
       
       /* Affichage du prix total */
       printf("\n \n Le prix total : %f ", art1.qte*art1.prix );
       
       /* Affectation champs par champs de art1 � art2 */
       art2.numero = art1.numero;
       art2.qte = art1.qte;
       art2.prix=art1.prix;
       printf("\n\n art2 : \n Num�ro : %d \n Quantit� : %d \n Prix : %f ",art2.numero,art2.qte,art2.prix);
       
       /* Affectation globale de art1 � art3 */
       art3=art1;
       printf("\n\n art3 : \n Num�ro : %d \n Quantit� : %d \n Prix : %f ",art3.numero,art3.qte,art3.prix);
       
       printf("\n\n art4 : \n Num�ro : %d \n Quantit� : %d \n Prix : %f ",art4.numero,art4.qte,art4.prix);
       printf(" \n \n -----FIN DU PROGRAMME -----");
       getch();
       }
       
