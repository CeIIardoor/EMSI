#include<stdio.h>
#include<string.h>
typedef struct{
				char Nom[30], Description[1000];
				float Prix;
			  }Medicament;
main()
{
	Medicament M[100];
	char Ajouter[]="Ajouter", Modifier[]="Modifier", Supprimer[]="Supprimer";
	char Reponse[10], Rechercheop[50], OUI[]="Oui", NON[]="Non";
	int N=6, i, cmb, j, Trouve=0;
//Declaration des Noms:
	strcpy(M[0].Nom, "Doliprane 1000mg");strcpy(M[1].Nom, "Supradyn");
	strcpy(M[2].Nom, "Cataflame 50mg");strcpy(M[3].Nom, "Astaf 1g");
	strcpy(M[4].Nom, "Amoxil 1g");strcpy(M[5].Nom, "Aureomycine");
//Declaration des Descriptions:
	strcpy(M[0].Description, "(Comprime)/Douleur et Fievre");strcpy(M[1].Description, "(Comprimes)/Vitamine et Energy");
	strcpy(M[2].Description, "(Tablets)/Anti-Inflammatoire");strcpy(M[3].Description, "(Capsules)/Anti-Biotique");
	strcpy(M[4].Description, "(Sirop)/Anti-Biotique pour les angines"); strcpy(M[5].Description, "(Pommade)/Pour les yeux");
//Declaration des Prix:
	M[0].Prix=15.80;
	M[1].Prix=79;
	M[2].Prix=32.40;
	M[3].Prix=50;
	M[4].Prix=55;
	M[5].Prix=10;
//Affichage des Medicaments:
	for(i=0;i<N;i++)
	{
		printf("\n Nom du medicament: %s\n", M[i].Nom);
		printf(" Description: %s.\n", M[i].Description);
		printf(" Prix: %.2fDh\n", M[i].Prix);
		printf("\n");
	}
	choix:
//Choix d'opération a faire:
	printf("\n\t\t**Pour ajouter un Medicament a la list, ecrivez 'Ajouter'**\n");
	printf("\t\t\t\t\t\t------");
	printf("\n\t\t**Pour modifier un Medicament dans la list, ecrivez 'Modifier'**\n");
	printf("\t\t\t\t\t\t------");
	printf("\n\t\t**Pour supprimer un Medicament de la list, ecrivez 'Supprimer'**\n");
	printf("\t\t\t\t\t\t------");
	printf("\n\t\t-----N oubliez pas la capitalisation s il vous plait-----\n");
	printf("\t\t\t\t\t\t");
	gets(Reponse);
//traitement d'opération:
																				//Cas d'Ajouter
	if(strcmp(Reponse,Ajouter)==0)
	{
		printf("\n -Combien de Medicament voulez-vous ajouter ? : ");
		scanf("%d", &cmb);
		for(j=1;j<=cmb;j++)
		{
			printf("\n -Entrez le Nom de Medicament %d a Ajouter: ", j);
			fflush(stdin);
			gets(Ajouter);
			strcpy(M[i].Nom, Ajouter);
			printf("\n -Entrez la Description de %s: ", M[i].Nom );
			fflush(stdin);
			gets(Ajouter);
			strcpy(M[i].Description, Ajouter);
			printf("\n -Entrez Le prix de %s: ", M[i].Nom);
			scanf("%f", &M[i].Prix);
			printf("\n *-*-*- %s a ete ajouter a votre list de Medicaments\n\n ", M[i].Nom);
			i++;
		}
		N=i;
		for(i=0;i<N;i++)
		{
			printf("\n Nom du medicament: %s\n", M[i].Nom);
			printf(" Description: %s.\n", M[i].Description);
			printf(" Prix: %.2fDh\n", M[i].Prix);
			printf("\n");
		}
	}
																				//Cas de Modifier
	if(strcmp(Reponse,Modifier)==0)
	{
		printf("\n Entrez le Nom de Medicament a Modifier: ");
		gets(Rechercheop);
		for(i=0;i<N;i++)
		{
			if(strcmp(Rechercheop, M[i].Nom)==0)
			{
				printf("\n -Entrez les nouvelles informations du Medicament (Nom, Description, Prix) pour le modifier\n");
				printf("\n -Entrez le nouveau Nom du Medicament: ");
				fflush(stdin);
				gets(M[i].Nom);
				printf("\n -Entrez la nouvelle description du Medicament: ");
				fflush(stdin);
				gets(M[i].Description);
				printf("\n -Entrez le nouveau prix du Medicament: ");
				scanf("%f", &M[i].Prix);
				printf("\n Le Medicament a ete bien modifier avec: \n");
				printf("\n Nom du medicament: %s\n", M[i].Nom);
				printf(" Description: %s.\n", M[i].Description);
				printf(" Prix: %.2fDh\n", M[i].Prix);
				printf("\n");
				Trouve=1;
			}
		}
		if(Trouve==0)
		{
			printf("\n Le Medicament que vous avez entre n existe pas dans la list\n");
		}	
	}
																				//Cas de Supprimer																	
	if(strcmp(Reponse,Supprimer)==0)
	{
		Trouve=0;
		printf("\n -Entrez le Nom de Medicament a supprimer: ");
		gets(Rechercheop);
		for(i=0;i<N;i++)
		{
			if(strcmp(Rechercheop, M[i].Nom)==0)
			{
				for(j=i;j<N;j++)
				{
					M[j]=M[j+1];
				}
				printf("\n Le Medicament a ete bien supprime\n");
				Trouve=1;
			}
		}
		if(Trouve==0)
		{
			printf("\n Le Medicament que vous avez entre n existe pas dans la list\n");
		}
	}
	else
	{
		printf("\n Reponse Fause: Si vous voulez resseyer, ecrivez Oui, sinon ecrivez Non: ");
		fflush(stdin);
		gets(Reponse);
		if(strcmp(Reponse,OUI)==0)
		{
		goto choix;
		}
		if(strcmp(Reponse,NON)==0)
		{
			printf("\n\t\t\t\t\t FIN DU PROGRAMME*********");
		}
	}
																																			
}
