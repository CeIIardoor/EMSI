#include<stdio.h>
#include<Math.h>
main()
{
	int NL, NC, i, i2, i3;
	printf("Donnez le nombre des lignes\n");
	scanf("%d", &NL);
	NC=(NL*2)-1;
	for(i=1; i<=NC; i++)
	{
		printf("*");
		printf("\n");
		for(i2=2; i2<=NC; i2++)
		{
			printf("*");
		}
	}
}
