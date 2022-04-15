#include<stdio.h>
#include<Math.h>
main()
{
	int N1, N2, Difference;
	float Quotion;
	printf("Donnez la valeur 1\n");
	scanf("%d", &N1);
	printf("Donner la valeur 2\n");
	scanf("%d", &N2);
	Difference=N1-N2;
	Quotion=(float) N1/N2;
	if(N2!=0)
	{
		printf("Difference=%d\nQuotion=%.2f", Difference, Quotion);
	}
	else
	{
		printf("Erreur: la valeur 2 doit etre differente de (0) ");
	}
	return 0;
}

