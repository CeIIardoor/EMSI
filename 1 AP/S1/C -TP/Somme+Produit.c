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
	Quotion=N1/N2;
	if(N1!=0)
	{
		printf("Difference=%d\n", Difference);
		Printf("Quotion=%f\n", Quotion);
	}
	else
	{
		printf("Erreur(0)");
	}
	return 0;
}

