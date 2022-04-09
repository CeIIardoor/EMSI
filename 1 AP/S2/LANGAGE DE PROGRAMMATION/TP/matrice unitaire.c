#include<stdio.h>
main()
{
	int Matrice[100][100];
	int N, i, j , k, h;
	//demande d'information:
	printf("Entrer le nombre des colones/lignes de votre matrice: ");
	scanf("%d", &N);
	//remplissage du matrice identitée:
	for(i=1;i<=N;i++)
	{
		for(j=i;j<N;j++)
		{
			printf(" 1");
		}
	}
}
