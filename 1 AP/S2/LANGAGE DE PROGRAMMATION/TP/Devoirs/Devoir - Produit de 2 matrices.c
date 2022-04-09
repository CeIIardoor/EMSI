#include <stdio.h>
 main(){
 int i,j,k,n,x,q;
	int mat[30][30],mat1[30][30],mat2[30][30];

	printf ("Donner le nombre de lignes de la premiere matrice : ");
      scanf ("%d",&n);
	printf ("\nDonner la dimension commune aux 2 matrices : ");
	scanf ("%d",&x);
	printf ("\nDonner le nombre de colonnes de la deuxieme matrice : ");
	scanf ("%d",&q);

      printf ("\nDonner les elements de la premiere matrice :\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<x;j++)
			{
			printf ("ligne %d, colonne %d : ",i+1,j+1);
			scanf ("%d",&mat1[i][j]);
			}
	}
	printf ("\nDonner les elements de la seconde matrice :\n");
	for (i=0;i<x;i++)
	{
		for (j=0;j<q;j++)
			{
			printf ("ligne %d, colonne %d : ",i+1,j+1);
			scanf ("%d",&mat2[i][j]);
			}
	}
	 for (i=0;i<n;i++)
	{
		for (j=0;j<q;j++)
		{
		    mat[i][j]=0;
			for (k=0;k<x;k++)
			{
				mat[i][j]=mat1[i][k]*mat2[k][j]+mat[i][j];
			}
		}
	}
	printf ("\nProduit matriciel :\n");
	for (i=0;i<n;i++)    {
        for (j=0;j<q;j++)
            {printf ("%3d\t",mat[i][j]);}
            printf("\n");
    }}
