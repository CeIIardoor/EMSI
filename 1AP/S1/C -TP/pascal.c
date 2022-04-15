#include<stdio.h>
main()
{
	int N, i, j, k, c;
	printf("Donnez le nombre des lignes\n");
	scanf("%d", &N);
	for(i=1; i<=N; i++)
	{
		for(j=N-i; j>0 ; j--)
		{
			printf(" ");	
		}
		for(k=i; k>=2; k--)
		{
			printf("%d", k);
		}
		for(c=1; c<=i; c++)
		{
			printf("%d", c);
			if(c==i) printf("\n");
			
		}
	}
	
	
	
}
