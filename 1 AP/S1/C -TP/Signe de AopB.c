#include<stdio.h>
main()
{
	int A, B;
	printf("Donnez une valeur\n");
	scanf("%d", &A);
	printf("Donnez une autre valeur\n");
	scanf("%d", &B);
	if(A<0 && B<0)
	{
		printf("Le signe de %d*%d est positif\n", A, B);
		printf("Le signe de %d+%d est negatif\n", A, B);
		printf("Le signe de %d/%d est positif\n", A, B);
		if(A<B)
		{
	    	printf("Le signe de %d-%d est negatif\n", A, B);
		}
		else
		{
			printf("Le signe de %d-%d est positif\n", A, B);
		}
	}
	if(A>0 && B>0)
	{
		printf("Le signe de %d*%d est positif\n", A, B);
		printf("Le signe de %d+%d est positif\n", A, B);
		printf("Le signe de %d/%d est positif\n", A, B);
		if(A<B)
		{
			printf("Le signe de %d-%d est negatif\n", A, B);
		}
		else
		{
			printf("Le signe de %d-%d est positif\n", A, B);
		}
	}
	if(A<0 && B>0)
	{
		printf("Le signe de %d*%d est negatif\n", A, B);
		printf("Le signe de %d-%d est negatif\n", A, B);
		printf("Le signe de %d/%d est negatif\n", A, B);
		if(A<B)
		{
			printf("Le signe de %d+%d est positif\n", A, B);
		}
		else
		{
			printf("Le signe de %d+%d est negatif\n", A, B);
		}
	}
	if(A>0 && B<0)
	{
		printf("Le signe de %d*%d est negatif\n", A, B);
		printf("Le signe de %d-%d est positif\n", A, B);
		printf("Le signe de %d/%d est negatif\n", A, B);
		if(A>B)
		{
			printf("Le signe de %d+%d est negatif\n", A, B);
		}
		else
		{
			printf("Le signe de %d+%d est positif\n", A, B);
		}
	}
	if(A==0 && B<0)
	{
		printf("Le signe de %d*%d est neutre\n", A, B);
		printf("Le signe de %d-%d est positif\n", A, B);
		printf("Le signe de %d+%d est negatif\n", A, B);
		printf("erreur d operation %d/%d\n", A, B);
	}
	if(A<0 && B==0)
	{
		printf("Le signe de %d*%d est neutre\n", A, B);
		printf("Le signe de %d-%d est negatif\n", A, B);
		printf("Le signe de %d+%d est negatif\n", A, B);
		printf("erreur d operation %d/%d\n", A, B);
	}
	if(A==0 && B>0)
	{
		printf("Le signe de %d*%d est neutre\n", A, B);
		printf("Le signe de %d-%d est negatif\n", A, B);
		printf("Le signe de %d+%d est positif\n", A, B);
		printf("erreur d operation %d/%d\n", A, B);	
	}
	if(A>0 && B==0)
	{
		printf("Le signe de %d*%d est neutre\n", A, B);
		printf("Le signe de %d-%d est positif\n", A, B);
		printf("Le signe de %d+%d est positif\n", A, B);
		printf("erreur d operation %d/%d\n", A, B);
	}
	if(A==0 && B==0)
	{
		printf("Le signe de %d*%d est neutre\n", A, B);
		printf("Le signe de %d-%d est neutre\n", A, B);
		printf("Le signe de %d+%d est neutre\n", A, B);
		printf("le signe de %d/%d est neutre\n", A, B);
	}
	
}
