#include<stdio.h>
main()
{
	int J1, J2,i;
	i=1;
	printf("Joueur 1: Donnez un nombre entre 1 et 100\n");
	scanf("%d", &J1);
	while(J1<1 || J1>100)
	{
		printf("erreur, Donnez un nombre entre 1 et 100\n");
		scanf("%d", &J1);
	}
	printf("Joueur 2: Esseyez de trouver le nombre que le joueur 1 a donne\n");
	scanf("%d", &J2);
	if(J1==J2)
	{
		printf("Bravo vous avez trouvé le nombre que le joueur 1 a donné dans une seul tentative\n");
	}
	else
	{
		while(J1!=J2)
		{
			if(J2<J1)
			{
				printf("Trop petit\n");
				printf("Veuillez resseyer\n");
				scanf("%d", &J2);
			}
			else
			{
				printf("Trop grand\n");
				printf("Veuillez resseyer\n");
				scanf("%d", &J2);
			}
			i++;
		}
		printf("Bravo vous avez trouve le nombre que le joueur 1 a donne dans %d tentative\n", i);
	}
	
}
