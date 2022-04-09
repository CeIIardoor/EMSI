#include<stdio.h>
main()
{
	int Matrice[100][100];
	int N, i, j , k, h;
	//demande d'information:
	printf("Entrer le nombre des colones/lignes de votre matrice: ");
	scanf("%d", &N);
	//remplissage du matrice:
	for(j=1;j<=N;j++)
	{
		for(i=1;i<=N;i++)
		{	
			printf("Entrer l element %d de ligne %d: ", i, j);
			scanf("%d", &Matrice[i-1][j-1]);
			printf("\n");
		}
	}
	//affichage du matrice:
	for(h=1;h<=N;h++)
	{	
		printf("\t\t");
		for(k=1;k<=N;k++)
		{
			printf("%d", Matrice[k-1][h-1]);
			printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	//traitement:
	for(i=0;i<N;i++)
	{
		for(j=i;j<=i;j++)
		{
			Matrice[i][j]=0;
		}
	}
		//affichage du matrice fianle:
	for(h=1;h<=N;h++)
	{	
		printf("\t\t");
		for(k=1;k<=N;k++)
		{
			printf("%d", Matrice[k-1][h-1]);
			printf("  ");
		}
		printf("\n");
	}
	
	
	
}
