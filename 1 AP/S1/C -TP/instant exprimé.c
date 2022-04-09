#include<stdio.h>
#include<Math.h>
main()
{
	int H, M, S, Secondes;
	printf("Saisir les heurs\n");
	scanf("%d", &H);
	printf("Saisir les minutes\n");
	scanf("%d", &M);
	printf("Saisir les secondes\n");
	scanf("%d", &S);
	Secondes=((H*3600)+(M*60)+(S));
	printf("%dh%dmin%ds correspond a : %ds", H, M, S, Secondes);
}

	
