#include<stdio.h>
#include<string.h>
typedef struct{
				char Nom[30], Description[1000];
				float Prix;
			  }Medicament;
main()
{
	Medicament M[100];
	char Ajouter[]="Ajouter", Modifier[]="Modifier", Supprimer[]="Supprimer", Rechercher[]="Rechercher", Afficher[]="Afficher", Quiter[]="Quiter";
	char Reponse[10], Rechercheop[50], OUI[]="Oui", NON[]="Non", Recherchemed[50];
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
	
//Choix d'opération a faire:
Menu:
	printf("\n\t\t**Pour afficher la list des Medicaments, ecrivez 'Afficher'**\n");
	printf("\t\t\t\t\t\t------");
	printf("\n\t\t**Pour rechercher un medicament, ecrivez 'Rechercher'**\n");
	printf("\t\t\t\t\t\t------");
	printf("\n\t\t-----N oubliez pas la capitalisation s il vous plait-----\n");
	printf("\t\t\t\t\t\t");
	fflush(stdin);
	gets(Reponse);
//traitement d'opération:
																					//Cas d'Afficher:
	if(strcmp(Reponse,Afficher)==0)
	{
		for(i=0;i<N;i++)
		{
			printf("\n Nom du medicament: %s\n", M[i].Nom);
			printf(" Description: %s.\n", M[i].Description);
			printf(" Prix: %.2fDh\n", M[i].Prix);
			printf("\n");
		}
		goto Menu;
	}
																					//Cas de Rechercher:
	Recherche:		
	Trouve=0;																		
	if(strcmp(Reponse,Rechercher)==0)
	{
		printf("\n Entrez le nom de Medicament a rechercher: ");
		fflush(stdin);
		gets(Recherchemed);
		printf("\n");
		for(i=0;i<N;i++)
		{
			if(strcmp(Recherchemed,M[i].Nom)==0)
			{
				printf("\n Nom du medicament: %s\n", M[i].Nom);
				printf(" Description: %s.\n", M[i].Description);
				printf(" Prix: %.2fDh\n", M[i].Prix);
				printf("\n");
				Trouve=1;
				Choix2:
				printf("\n Si vous voulez modifier ce Medicament, ecrivez 'Modifier'\n");
				printf("\n Si vous voulez supprimer ce Medicament, ecrivez 'Supprimer'\n");
				fflush(stdin);
				gets(Reponse);
																					//Cas de modifier:
				if(strcmp(Reponse,Modifier)==0)
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
					printf("\n Le Medicament a ete bien modifier: \n");
					printf("\n Nom du medicament: %s\n", M[i].Nom);
					printf(" Description: %s.\n", M[i].Description);
					printf(" Prix: %.2fDh\n", M[i].Prix);
					printf("\n");
					goto Menu;
				}
				if(strcmp(Reponse,Supprimer)==0)
				{
					for(j=i;j<N;j++)
					{
						M[j]=M[j+1];
					}
					printf("\n Le Medicament a ete bien supprime\n");
				}
			}
			if(Trouve==0)
			{
				N=i;
				printf("\n %s n existe pas dans la list des Medicaments\n", Recherchemed);
				printf("\n Si vous voulez ajouter ce Medicament a la list, ecrivez 'Ajouter'");
				printf("\n Si vous voulez rechercher un autre Medicament, ecrivez 'Rechercher'");
				printf("\n Si vous voulez quiter,ecrivez 'Quiter'");
				fflush(stdin);
				gets(Reponse);
				//Cas d'ajouter:
				if(strcmp(Reponse,Ajouter)==0)
				{
					strcpy(M[N].Nom,Recherchemed);
					printf("\n Entrez la description du %s: ", Recherchemed);
					fflush(stdin);
					gets(M[N].Description);
					printf("\n Entrez le prix de %s: ", M[N].Nom);
					scanf("%f", M[N].Prix);
					printf("\n %s a ete bien ajoute a la list des Medicaments\n", M[N].Nom);
					printf("\n Nom du medicament: %s\n", M[N].Nom);
					printf(" Description: %s.\n", M[N].Description);
					printf(" Prix: %.2fDh\n", M[N].Prix);
					printf("\n");
				}
				//Cas de Rechercher:
				if(strcmp(Reponse,Rechercher)==0);
				goto Recherche;
				//Cas de Quiter:
				if(strcmp(Reponse,Quiter)==0);
				goto Fin;
			}
		}
	}
	else
	{
		printf("\n #######erreur de choix d operation, verifier la capitalisation et resseyer s l vous plait######\n");
	}
	Fin:
	printf("\n\t\t\t\t\t--FIN DU PROGRAMME--\n");
}
