#include<stdio.h>
main()
{
	int N, l, c, e, i;
	printf("Donnez le nombre des lignes: ");
	scanf("%d", &N);
	for(l=1; l<=N; l++)
	{
		for(c=1; c<=l; c++)
		{
			printf("%d", c);
		}
		printf("\n");
	}
	for(i=1; i<N; i++)
	{
		for(e=1; e<=N-i; e++)
		{
			printf("%d", e);
		}
		printf("\n");
	}
	
}
