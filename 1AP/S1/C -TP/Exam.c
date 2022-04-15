#include<stdio.h>
main()
{
	int N, i;
	float S, E;
	printf("Donnez un nombre\n");
	scanf("%d", &N);
	while(N<2)
	{
		printf("Erreur");
		printf("Donnez une valeur valide\n");
		scanf("%d", &N);
	}
	E=1;
	S=1;
	for(i=2; i<=N; i++)
	{
		S=S+i;
		E=E+(1/S);
	}
	printf("E=%.2f", E);
}
