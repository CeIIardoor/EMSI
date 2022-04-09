#include<stdio.h>
main()
{
	int N, i, c, k, l;
	printf("Donnez le nombre des etoiles a cote\n");
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		printf("*");
	}
	printf("\n");
	for(l=1; l<=N-2; l++)
	{
		for(c=0; c<N; c++)
		{
			if(c==0)
			{
				printf("*");
			}
			if(c==N-1)
			{
				printf("*\n");
			}
			if(c>0 && c<N-1)
			{
				printf(" ");
			}
		}
		
	}
	for(k=0; k<N; k++)
	{
		printf("*");
	}
}
