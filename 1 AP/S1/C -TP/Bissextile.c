#include<stdio.h>
#include<Math.h>
main()
{
	int Annee, S;
	printf("Donnez une annee\n");
	scanf("%d", &Annee);
	if((Annee%400==0)||(Annee%4==0 && Annee%100!=0))
	{
		printf("%d est une annee bissextile\n", Annee);
	}
	else
	{
	
		printf("%d n est pas une annee bissextile\n", Annee);
	}
}
