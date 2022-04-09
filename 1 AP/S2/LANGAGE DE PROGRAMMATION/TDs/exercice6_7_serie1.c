#include<stdio.h>
main(){
       
       /* Déclaration des varibles */
       int T[50][50],L,C,i,j,S;
       
       /* Saisie des tailles effectives */
       do {
           printf(" Entrer la taille effective des lignes (max : 50) : ");
           scanf("%d",&L);
       }while (L<0 || L>50);
       do {
           printf(" Entrer la taille effective des colonnes (max : 50) : ");
           scanf("%d",&C);
       } while( C<0 || C>50);
           
       /* Remplissage de la matrice */
       
       for ( i=0 ; i<L ; i++) {
           for ( j=0 ; j<C ; j++) {
               printf(" T[%d][%d] = ",i,j);
               scanf("%d",&T[i][j]);
               }
       }
       
       /* Affichage de la matrice */
       printf(" T : \n ");
        for ( i=0 ; i<L ; i++) {
           for ( j=0 ; j<C ; j++) {
               printf(" %d \t",T[i][j]);
               }
        printf("\n");
       }
       
       /* La somme des valeurs de la matrice */
       S=0;
       /* Parcourir les éléments ligne par ligne */
     //  for ( i=0 ; i<L ; i++) {
//           for ( j=0 ; j<C ; j++) {
//              S = S + T[i][j];
//               }
//       }
       /* Parcourir les éléments colonne par colonne */
       for ( j=0 ; j<C ; j++) {
           for ( i=0 ; i<L ; i++) {
              S = S + T[i][j];
               }
       }
       printf(" \n La somme des valeurs de la matrice est %d ", S);    
           
       /* La somme des valeurs de chaque ligne de la matrice */

       for ( i=0 ; i<L ; i++) {
           S=0;
           for ( j=0 ; j<C ; j++) {
              S = S + T[i][j];
               }
           printf(" \n La somme de la ligne d'indice %d est %d ",i,S);
       }

       /* La somme des valeurs de chaque colonne de la matrice */

       for ( j=0 ; j<C ; j++) {
           S=0;
           for ( i=0 ; i<L ; i++) {
              S = S + T[i][j];
               }
           printf(" \n La somme de la colonne d'indice %d est %d ",j,S);
       }
       
           printf("\n\n FIN ");
           
           
           
           getch();
           } 
