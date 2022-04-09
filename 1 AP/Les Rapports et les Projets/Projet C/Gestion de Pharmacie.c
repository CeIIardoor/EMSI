															/* Ce Programme est Realisé Par: El Ouardi Marouan, de AP9.
															
																		**Projet: Gestion de Pharmacie.
																		
																		**Debut de Travail: Le 9 Juin 2020.
																		
																**Derniere Mise a jour Appliquée: Le 29 Juin 2020.*/
																
#include<stdio.h>
#include<string.h>
typedef struct{
				char Nom[30], Description[1000];
				float Prix;
				int Num;
			  }Medicament;
typedef struct{
				int j, m, a;
			  }Date;
typedef struct{
				char Nomcomplet[60];
				char Tele[12];
				int Matricule;
			  }Client;
typedef struct{
				int Numero;
				Date date;
				Medicament Med;
				Client client;
			  }Vente;
void Medicaments();
void Clients();
void Ventes();
Medicament M[100];
Client C[50];
Vente V[100];
int N=3, NC=3, NV=3;
main()
{
//Declaration des Medicament:
	//Declaration des Noms:
	strcpy(M[0].Nom, "Doliprane 1000mg");
	strcpy(M[1].Nom, "Supradyn");
	strcpy(M[2].Nom, "Cataflame 50mg");
	//Declaration des Descriptions:
	strcpy(M[0].Description, "(Comprime)/Douleur et Fievre");
	strcpy(M[1].Description, "(Comprimes)/Vitamine et Energy");
	strcpy(M[2].Description, "(Tablets)/Anti-Inflammatoire");
	//Declaration des Prix:
	M[0].Prix=15.80;
	M[1].Prix=79;
	M[2].Prix=32.40;
	//Decalaration des Num:
	M[0].Num=1;
	M[1].Num=2;
	M[2].Num=3;
		
//Declaration des Clients:
	//Declaration des Noms complets:
	strcpy(C[0].Nomcomplet, "El Ouardi Marouan"); strcpy(C[1].Nomcomplet, "Jaber Imad"); strcpy(C[2].Nomcomplet,"Boubnane Hamza");
	//Declaration des Telephones:
	strcpy(C[0].Tele, "0613963819"); strcpy(C[1].Tele, "0612345678"); strcpy(C[2].Tele, "0687654321");
	//Declaration des Matricule:
	C[0].Matricule= 1; C[1].Matricule= 2; C[2].Matricule= 3;	
	printf("	   Ce Programme est Realise Par: EL OUARDI MAROUAN, de AP9\n\n");
	printf("			Projet: Gestion de Pharmacie\n\n");
	printf("			Debut de Travail: Le 9 Juin 2020\n\n");
	printf("		Derniere Mise a jour Appliquee: Le 29 Juin 2020\n\n");
	sleep(2);
	system("CLS");
	int x;
	printf("\t\t	  GESTION DE PHARMACIE\n");
    printf("\n--------------------------------------------------------------------\n");
	printf("\t\t	=====MENU Principal=====");
    printf("\n--------------------------------------------------------------------\n");
    printf("\n");
    printf("=> Appuyez -----{'1'}----- pour entrer le Menu des Medicaments.");
    printf("\n");
    printf("\n=> Appuyez -----{'2'}----- pour entrer le Menu des Clients.");
    printf("\n");
    printf("\n=> Appuyez -----{'3'}----- pour entrer le Menu des Ventes.");
    printf("\n");
    printf("\n--------------------------------------------------------------------\n");
    printf("\n");
    printf("-Entrez votre choix: ");
    scanf("%d",&x);
	switch (x)
	{
		case 1: Medicaments();
		break;
		case 2: Clients();
		break;
		case 3: Ventes();
		break;
		default: printf("ERROR");
		sleep(1);
		system("CLS");
		main();
		break;
	}
}
//========================================================================================================================================================================================
//                                                                                      MEDICAMENTS                                                                                      #
//========================================================================================================================================================================================

void Medicaments(){
	char Ajouter[]="Ajouter", Modifier[]="Modifier", Supprimer[]="Supprimer", Rechercher[]="Rechercher", Afficher[]="Afficher", Quitter[]="Quitter", Revenir[]="Revenir";
	char Reponse[20], Rechercheop[50], OUI[]="Oui", NON[]="Non", Recherchemed[50];
	int i, cmb, j, Trouve=0;
//Menu:
Menu:
	system("CLS");
	printf("\n-------------------------------------------------------------------------------\n");
	printf("		   =====Bienvenue au MENU des Medicaments=====");
	printf("\n-------------------------------------------------------------------------------\n");
	printf("\n");
	printf("=> Pour afficher la liste des Medicaments, Ecrivez: -----{ 'Afficher' }-----");
	printf("\n");
	printf("\n=> Pour rechercher un medicament, Ecrivez: -----{ 'Rechercher' }-----");
	printf("\n");
	printf("\n=> Pour revenir au MENU Principal, Ecrivez: -----{ 'Revenir' }-----");
	printf("\n");
	printf("\n((!! N oubliez pas la Majuscule au debut du Mot s il vous plait !!)).");
	printf("\n");
	printf("\n-------------------------------------------------------------------------------\n");
	printf("\n");
	printf("-Entrez votre choix: ");
	fflush(stdin);
	gets(Reponse);
//traitement d'opération:
																					//Cas d'Afficher:
	if(strcmp(Reponse,Afficher)==0)
	{
Affichage:
		system("CLS");
		printf("\n---------------------------------------------\n");
		printf("	======La liste des Medicaments=====");
		printf("\n---------------------------------------------\n");
		for(i=0;i<N;i++)
		{
			printf("\n Medicament %d:", M[i].Num);
			printf("\n \t\t*Nom du medicament: %s\n", M[i].Nom);
			printf(" \t\t*Description: %s.\n", M[i].Description);
			printf(" \t\t*Prix: %.2fDh\n", M[i].Prix);
			printf("\n--------------------------------------------------------------\n");
		}
		sleep(1);
Choix1:
		printf("\n----------------------------------------------------------------------------------\n");
		printf("\t\t		=====MENU=====");
		printf("\n----------------------------------------------------------------------------------\n");
		printf("\n");
		printf("=> Si vous voulez Ajouter un Medicament, Ecrivez: -----{'Ajouter'}-----");
		printf("\n");
		printf("\n=> Si vous voulez Revenir au Menu des Medicaments, Ecrivez: -----{'Revenir'}-----");
		printf("\n");
		printf("\n=> Si vous voulez Quitter, Ecrivez: -----{'Quitter'}-----");
		printf("\n");
		printf("\n----------------------------------------------------------------------------------\n");
		printf("\n");
		printf("-Entrez votre choix: ");
		fflush(stdin);
		gets(Reponse);
		if(strcmp(Reponse,Quitter)==0)
		{
		goto Fin;
		}
		if(strcmp(Reponse,Revenir)==0)
		{
		goto Menu;
		}
		if(strcmp(Reponse,Ajouter)==0)
		{
			system("CLS");
			printf("\n Entrez le nom de Medicament a Ajouter: ");
			fflush(stdin);
			gets(Recherchemed);
			printf("\n");
		goto Ajout;
		}
		else
		{
			printf("\n-------------------------------------------------------------------------------------------\n");
			printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s l vous plait######");
			printf("\n-------------------------------------------------------------------------------------------\n");
			goto Choix1;
		}
	}
																					//Cas de Rechercher:		
	Trouve=0;																		
	if(strcmp(Reponse,Rechercher)==0)
	{
		system("CLS");
		printf("\n Entrez le nom de Medicament a rechercher: ");
		fflush(stdin);
		gets(Recherchemed);
		printf("\n");
		for(i=0;i<N;i++)
		{
			if(strcmp(Recherchemed,M[i].Nom)==0)
			{
				system("CLS");
				printf("\n----------------------------------------------\n");
				printf("\n Medicament %d:", M[i].Num);
				printf("\n \t\t*Nom du medicament: %s\n", M[i].Nom);
				printf(" \t\t*Description: %s.\n", M[i].Description);
				printf(" \t\t*Prix: %.2fDh\n", M[i].Prix);
				printf("\n----------------------------------------------\n");
				printf("\n");
				Trouve=1;
				sleep(1);
Choix2:
				printf("\n--------------------------------------------------------------------------------\n");
				printf("\t\t		=====MENU=====");
				printf("\n--------------------------------------------------------------------------------\n");
				printf("\n");
				printf("=> Si vous voulez modifier ce Medicament, Ecrivez: -----{'Modifier'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez supprimer ce Medicament, Ecrivez: -----{'Supprimer'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Revenir au Menu des Medicaments, Ecrivez: -----{'Revenir'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Quitter,Ecrivez: -----{'Quitter'}-----\n");
				printf("\n");
				printf("\n--------------------------------------------------------------------\n");
				printf("\n");
				printf("-Entrez votre choix: ");
				fflush(stdin);
				gets(Reponse);
																					//Cas de modifier:
				if(strcmp(Reponse,Modifier)==0)
				{
					system("CLS");
					printf("\n **Les nouvelles informations du Medicament (Nom, Description, Prix)**\n");
					printf("\n -Entrez le nouveau Nom du Medicament: ");
					fflush(stdin);
					gets(M[i].Nom);
					printf("\n -Entrez la nouvelle description du Medicament: ");
					fflush(stdin);
					gets(M[i].Description);
					printf("\n -Entrez le nouveau prix du Medicament: ");
					scanf("%f", &M[i].Prix);
					system("CLS");
					printf("\n---------------------------------------------------\n");
					printf("\n **Le Medicament a ete bien modifier**: \n");
					printf("\n Medicament %d:", M[i].Num);
					printf("\n \t\t*Nom du medicament: %s\n", M[i].Nom);
					printf(" \t\t*Description: %s.\n", M[i].Description);
					printf(" \t\t*Prix: %.2fDh\n", M[i].Prix);
					printf("\n---------------------------------------------------\n");
					printf("\n");
					sleep(2);
					goto Menu;
				}
																					//Cas de Supprimer:
				if(strcmp(Reponse,Supprimer)==0)
				{
					system("CLS");
					for(j=i;j<N;j++)
					{
						M[j]=M[j+1];
						N=N-1;
					}
					printf("\n Le Medicament a ete bien supprime\n");
					sleep(2);
					goto Menu;
				}
																					//Cas de Quitter:

				if(strcmp(Reponse,Quitter)==0)
				{
					sleep(1);
					goto Fin;
				}
																					//Cas de Revenir:

					if(strcmp(Reponse,Revenir)==0)
				{
					goto Menu;
				}
				else
				{
					printf("\n------------------------------------------------------------------------------------------------\n");
					printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s il vous plait######");
					printf("\n------------------------------------------------------------------------------------------------\n");
					sleep(1);
					system("CLS");
					goto Choix2;
				}	
			}
		}	
			if(Trouve==0)
			{
				system("CLS");
				printf("\n '%s' n existe pas dans la list des Medicaments\n", Recherchemed);
Choix3:
				printf("\n-------------------------------------------------------------------------------\n");
				printf("\t\t		=====MENU=====");
				printf("\n-------------------------------------------------------------------------------\n");
				printf("\n");
				printf("=> Si vous voulez ajouter ce Medicament a la list, Ecrivez: -----{'Ajouter'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Revenir au Menu, Ecrivez: -----{'Revenir'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Quitter,Ecrivez: -----{'Quitter'}-----\n");
				printf("\n");
				printf("\n-------------------------------------------------------------------------------\n");
				printf("\n");
				printf("-Entrez votre choix: ");
				fflush(stdin);
				gets(Reponse);
																					//Cas d'ajouter:
Ajout:																					
				if(strcmp(Reponse,Ajouter)==0)
				{
					system("CLS");
					M[N].Num=N+1;
					strcpy(M[N].Nom,Recherchemed);
					printf("\n Entrez la description du '%s': ", Recherchemed);
					fflush(stdin);
					gets(M[N].Description);
					system("CLS");
					printf("\n Entrez le prix de %s: ", M[N].Nom);
					scanf("%f", &M[N].Prix);
					system("CLS");
					printf("\n **'%s' a ete bien ajoute a la list des Medicaments**\n", M[N].Nom);
					printf("\n Medicament %d:", M[N].Num);
					printf("\n \t\t*Nom du medicament: %s\n", M[N].Nom);
					printf(" \t\t*Description: %s.\n", M[N].Description);
					printf(" \t\t*Prix: %.2fDh\n", M[N].Prix);
					printf("\n");
					N++;
					sleep(2);
					goto Affichage;
				}
																					//Cas de Quitter:
					if(strcmp(Reponse,Quitter)==0)
					{
					goto Fin;
					}
																					//Cas de Revenir:
					if(strcmp(Reponse,Revenir)==0)
					{
					goto Menu;
					}
					else
					{
					printf("\n------------------------------------------------------------------------------------------------\n");
					printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s il vous plait######");
					printf("\n------------------------------------------------------------------------------------------------\n");
					goto Choix3;
					}
				}
	}
	if(strcmp(Reponse,Revenir)==0)
	{
		system("CLS");
		main();
	}
	else
	{
		printf("\n------------------------------------------------------------------------------------------------\n");
		printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s il vous plait######");
		printf("\n------------------------------------------------------------------------------------------------\n");
		sleep(2);
		goto Menu;
	}
	Fin:
		system("CLS");
	printf("\n---------------------------------------------------------\n");
	printf("\n");
	printf("\t\tFIN DU PROGRAMME");
	printf("\n");
	printf("\n---------------------------------------------------------\n");
	}
//========================================================================================================================================================================================	
//                                                                                          CLIENTS                                                                                      #
//========================================================================================================================================================================================
void Clients(){	
	 
	char Ajouter[]="Ajouter", Modifier[]="Modifier", Supprimer[]="Supprimer", Rechercher[]="Rechercher", Afficher[]="Afficher", Quitter[]="Quitter", Revenir[]="Revenir";
	char Reponse[20], Rechercheop[50], OUI[]="Oui", NON[]="Non",Rechercheclient[60];
	int i, cmb, j, Trouve=0;
//Menu:
Menu:
	system("CLS");
	printf("\n--------------------------------------------------------------------\n");
	printf("	      =====Bienvenue au MENU des Clients=====");
	printf("\n--------------------------------------------------------------------\n");
	printf("\n");
	printf("=> Pour afficher la list des Clients, Ecrivez -----{'Afficher'}-----");
	printf("\n");
	printf("\n=> Pour rechercher un Client, Ecrivez -----{'Rechercher'}-----");
	printf("\n");
	printf("\n=> Pour revenir au MENU Principal , Ecrivez -----{'Revenir'}-----");
	printf("\n");
	printf("\n((!! N oubliez pas la Majuscule au debut du Mot s il vous plait !!)).");
	printf("\n");
	printf("\n--------------------------------------------------------------------\n");
	printf("\n");
	printf("-Entrez votre choix: ");
	fflush(stdin);
	gets(Reponse);
//traitement d'opération:
																					//Cas d'Afficher:
	if(strcmp(Reponse,Afficher)==0)
	{
Affichage:
		system("CLS");
		printf("\n-------------------------------------\n");
		printf("	======La liste des Clients=====");
		printf("\n-------------------------------------\n");
		for(i=0;i<NC;i++)
		{
			printf("\n Client %d: \n",C[i].Matricule);
			printf(" \t\t*Nom complet: %s\n", C[i].Nomcomplet);
			printf(" \t\t*Telephone: %s.\n", C[i].Tele);
			printf("\n----------------------------------------------------\n");
		}
		sleep(1);
Choix1:
		printf("\n------------------------------------------------------------------------\n");
		printf("\t\t		=====MENU=====");
		printf("\n------------------------------------------------------------------------\n");
		printf("\n");
		printf("=> Si vous voulez Ajouter un Medicament, Ecrivez -----{'Ajouter'}-----");
		printf("\n");
		printf("\n=> Si vous voulez Revenir au Menu des Clients, Ecrivez -----{'Revenir'}-----");
		printf("\n");
		printf("\n=> Si vous voulez Quitter, Ecrivez -----{'Quitter'}-----");
		printf("\n");
		printf("\n------------------------------------------------------------------------\n");
		printf("\n");
		printf("-Entrez votre choix: ");
		fflush(stdin);
		gets(Reponse);
		if(strcmp(Reponse,Quitter)==0)
		{
		goto Fin;
		}
		if(strcmp(Reponse,Revenir)==0)
		{
		goto Menu;
		}
		if(strcmp(Reponse,Ajouter)==0)
		{
			system("CLS");
			printf("\n Entrez le Nom complet de Client a rechercher: ");
			fflush(stdin);
			gets(Rechercheclient);
			printf("\n");
		goto Ajout;
		}
		else
		{
			printf("\n------------------------------------------------------------------------------------------------\n");
			printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s l vous plait######");
			printf("\n------------------------------------------------------------------------------------------------\n");
			goto Choix1;
		}
	}
																					//Cas de Rechercher:		
	Trouve=0;																		
	if(strcmp(Reponse,Rechercher)==0)
	{
		system("CLS");
		printf("\n Entrez le Nom complet de Client a rechercher: ");
		fflush(stdin);
		gets(Rechercheclient);
		printf("\n");
		for(i=0;i<NC;i++)
		{
			if(strcmp(Rechercheclient,C[i].Nomcomplet)==0)
			{
				printf("\n----------------------------------------------\n");
				printf("\n Client %d: \n",C[i].Matricule);
				printf(" \t\t*Nom complet: %s\n", C[i].Nomcomplet);
				printf(" \t\t*Telephone: %s.\n", C[i].Tele);
				printf("\n----------------------------------------------\n");
				printf("\n");
				Trouve=1;
Choix2:
				printf("\n--------------------------------------------------------------------------\n");
				printf("\t\t		=====MENU=====");
				printf("\n--------------------------------------------------------------------------\n");
				printf("\n");
				printf("=> Si vous voulez modifier ce Client, Ecrivez -----{'Modifier'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez supprimer ce Client, Ecrivez -----{'Supprimer'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Revenir au Menu, Ecrivez -----{'Revenir'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Quitter, Ecrivez -----{'Quitter'}-----\n");
				printf("\n");
				printf("\n---------------------------------------------------------------\n");
				printf("\n");
				printf("-Entrez votre choix: ");
				fflush(stdin);
				gets(Reponse);
																					//Cas de modifier:
				if(strcmp(Reponse,Modifier)==0)
				{
					system("CLS");
					printf("\n **Les nouvelles informations du Client (Nom complet, Tele, Matricule)**\n");
					printf("\n -Entrez le nouveau Nom complet du Client: ");
					fflush(stdin);
					gets(C[i].Nomcomplet);
					printf("\n -Entrez le nouveau Numero de Telephone du Client: ");
					fflush(stdin);
					gets(C[i].Tele);
					printf("\n-------------------------------------\n");
					printf("\n Le Client a ete bien modifier: \n");
					printf("\n Client %d: \n",C[i].Matricule);
					printf(" \t\t*Nom complet: %s\n", C[i].Nomcomplet);
					printf(" \t\t*Telephone: %s.\n", C[i].Tele);
					printf("\n-------------------------------------\n");
					printf("\n");
					sleep(2);
					goto Menu;
				}
																					//Cas de Supprimer:
				if(strcmp(Reponse,Supprimer)==0)
				{
					for(j=i;j<NC;j++)
					{
						C[j]=C[j+1];
						NC--;
					}
					system("CLS");
					printf("\n Le Client a ete bien supprime\n");
					sleep(2);
					goto Menu;
				}
																					//Cas de Quitter:

				if(strcmp(Reponse,Quitter)==0)
				{
					sleep(1);
					goto Fin;
				}
																					//Cas de Revenir:

					if(strcmp(Reponse,Revenir)==0)
				{
					goto Menu;
				}
				else
				{
					printf("\n------------------------------------------------------------------------------------------------\n");
					printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s l vous plait######");
					printf("\n------------------------------------------------------------------------------------------------\n");
					goto Choix2;
				}	
			}
		}	
			if(Trouve==0)
			{
				system("CLS");
				printf("\n %s n existe pas dans la list des Clients\n", Rechercheclient);
Choix3:
				printf("\n-----------------------------------------------------------------\n");
				printf("\t\t	=====MENU=====");
				printf("\n-----------------------------------------------------------------\n");
				printf("\n");
				printf("=> Si vous voulez ajouter ce Client a la list, Ecrivez ----{'Ajouter'}----\n");
				printf("\n");
				printf("\n=> Si vous voulez Revenir au Menu, Ecrivez ----{'Revenir'}----\n");
				printf("\n");
				printf("\n=> Si vous voulez Quitter, Ecrivez ----{'Quitter'}----\n");
				printf("\n");
				printf("\n------------------------------------------------------------------\n");
				printf("\n");
				printf("-Entrez votre choix: ");
				fflush(stdin);
				gets(Reponse);
																					//Cas d'ajouter:
Ajout:
				if(strcmp(Reponse,Ajouter)==0)
				{
					system("CLS");
					C[NC].Matricule=NC+1;
					strcpy(C[NC].Nomcomplet,Rechercheclient);
					printf("\n Entrez le Numero de Telephone du %s: ", Rechercheclient);
					fflush(stdin);
					gets(C[NC].Tele);
					system("CLS");
					printf("\n %s a ete bien ajoute a la list des Clients\n", C[NC].Nomcomplet);
					printf("\n------------------------------------------\n");
					printf("\n Client %d: \n",C[NC].Matricule);
					printf(" \t\t*Nom complet: %s\n", C[NC].Nomcomplet);
					printf(" \t\t*Telephone: %s.\n", C[NC].Tele);
					printf("\n------------------------------------------\n");
					printf("\n");
					NC++;
					sleep(2);
					goto Affichage;
				}
																					//Cas de Quitter:
					if(strcmp(Reponse,Quitter)==0)
					{
					goto Fin;
					}
																					//Cas de Revenir:
					if(strcmp(Reponse,Revenir)==0)
					{
					goto Menu;
					}
					else
					{
					printf("\n------------------------------------------------------------------------------------------------\n");
					printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s l vous plait######");
					printf("\n------------------------------------------------------------------------------------------------\n");
					goto Choix3;
					}
				}
	}
	if(strcmp(Reponse,Revenir)==0)
	{
		system("CLS");
		main();
	}
	else
	{
		printf("\n------------------------------------------------------------------------------------------------\n");
		printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s il vous plait######");
		printf("\n------------------------------------------------------------------------------------------------\n");
		sleep(2);
		goto Menu;
	}
	Fin:
		sleep(1);
		system("CLS");
		printf("\n---------------------------------------------------------\n");
		printf("\n");
		printf("\t\tFIN DU PROGRAMME");
		printf("\n");
		printf("\n---------------------------------------------------------\n");
}
//========================================================================================================================================================================================
//                                                                                        VENTES                                                                                         #
//========================================================================================================================================================================================

void Ventes(){
	char Ajouter[]="Ajouter", Modifier[]="Modifier", Supprimer[]="Supprimer", Rechercher[]="Rechercher", Afficher[]="Afficher", Quitter[]="Quitter", Revenir[]="Revenir";
	char Reponse[20], Rechercheop[50], OUI[]="Oui", NON[]="Non", Recherchevente[50]; 
	int i, cmb, j, Annee, Jour, Mois, Trouve=0;
//Declaration des Numero:
	V[0].Numero=1; V[1].Numero=2; V[2].Numero=3;
//Declaration des Date:
	V[0].date.a=2020; V[1].date.a=2020; V[2].date.a=2020;
	V[0].date.m=5; V[1].date.m=6; V[2].date.m=6;
	V[0].date.j=29; V[1].date.j=5; V[2].date.j=30;
	for(i=0;i<NV;i++)
	{
		V[i].Med=M[i];
		V[i].client=C[i];
	}
	
//Menu:
Menu:
	system("CLS");
	printf("\n------------------------------------------------------------\n");
	printf("\t\t=====Bienvenue au MENU de Ventes=====");
	printf("\n------------------------------------------------------------\n");
	printf("\n");
	printf("=> Pour afficher la list des Ventes, Ecrivez -----{'Afficher'}-----");
	printf("\n");
	printf("\n=> Pour rechercher une Vente, Ecrivez -----{'Rechercher'}-----");
	printf("\n");
	printf("\n=> Pour revenir au MENU Principal , Ecrivez -----{'Revenir'}-----");
	printf("\n");
	printf("\n((!! N oubliez pas la Majuscule au debut du Mot s il vous plait !!)).");
	printf("\n");
	printf("\n------------------------------------------------------------\n");
	printf("\n");
	printf("-Entrez votre choix: ");
	fflush(stdin);
	gets(Reponse);
//traitement d'opération:
																					//Cas d'Afficher:
	if(strcmp(Reponse,Afficher)==0)
	{
Affichage:
		system("CLS");
		printf("\n-------------------------------------\n");
		printf("======La liste des Ventes=====");
		printf("\n-------------------------------------\n");
		for(i=0;i<NV;i++)
		{
			printf("\n Vente %d: \n", V[i].Numero);
			printf(" \t\t*Date: %d/%d/%d.\n", V[i].date.j, V[i].date.m, V[i].date.a );
			printf(" \t\t*Medicament pris par Mr. %s : %s\n", V[i].client.Nomcomplet, V[i].Med.Nom);
			printf(" \t\t*Prix total du vente: %.2fDh\n", V[i].Med.Prix);
			printf("\n");
			printf("\n------------------------------------------------------------------\n");
		}
		sleep(1);
Choix1:
		printf("\n-----------------------------------------------------------------\n");
		printf("\t\t	=====MENU=====");
		printf("\n-----------------------------------------------------------------\n");
		printf("\n");
		printf(" => Si vous voulez Ajouter une Vente, Ecrivez -----{'Ajouter'}-----");
		printf("\n");
		printf("\n=> Si vous voulez Revenir au Menu des Ventes, Ecrivez -----{'Revenir'}-----");
		printf("\n");
		printf("\n=> Si vous voulez Quitter, Ecrivez -----{'Quitter'}-----");
		printf("\n");
		printf("\n-----------------------------------------------------------------\n");
		printf("\n");
		printf("-Entrez votre choix: ");
		fflush(stdin);
		gets(Reponse);
		if(strcmp(Reponse,Quitter)==0)
		{
		goto Fin;
		}
		if(strcmp(Reponse,Revenir)==0)
		{
		goto Menu;
		}
		if(strcmp(Reponse,Ajouter)==0)
		{
			system("CLS");
			printf("\n Entrez la date du vente: ");
			scanf("%d/%d/%d", &Jour, &Mois, &Annee);
			while(Jour<1 || Jour>31 || Mois<1 || Mois>12)
			{
				printf("\n ##### Erreur, date invalide, veuillez entrer une date valide s il vous plait#####");
				sleep(2);
				system("CLS");
				printf("\n Entrez la date a rechercher: ");
				scanf("%d/%d/%d", &Jour, &Mois, &Annee);
			}
			printf("\n");
			goto Ajout;
		}
		else
		{
			printf("\n-------------------------------------------------------------------------------------------\n");
			printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s l vous plait######");
			printf("\n-------------------------------------------------------------------------------------------\n");
			goto Choix1;
		}
	}
																					//Cas de Rechercher:		
	Trouve=0;																		
	if(strcmp(Reponse,Rechercher)==0)
	{
		system("CLS");
		printf("\n Entrez la date a rechercher: ");
		scanf("%d/%d/%d", &Jour, &Mois, &Annee);
		while(Jour<1 || Jour>31 || Mois<1 || Mois>12)
		{
			printf("\n ##### Erreur, date invalide, veuillez entrer une date valide s il vous plait#####");
			sleep(2);
			system("CLS");
			printf("\n Entrez la date a rechercher: ");
			scanf("%d/%d/%d", &Jour, &Mois, &Annee);
		}
		printf("\n");
		for(i=0;i<NV;i++)
		{
			if(V[i].date.a==Annee && V[i].date.m==Mois && V[i].date.j==Jour)
			{
			system("CLS");
			printf("\n Vente %d: \n", V[i].Numero);
			printf(" \t\t*Date: %d/%d/%d.\n", V[i].date.j, V[i].date.m, V[i].date.a );
			printf(" \t\t*Medicament pris par Mr. %s : %s\n", V[i].client.Nomcomplet, V[i].Med.Nom);
			printf(" \t\t*Prix total du vente: %.2fDh\n", V[i].Med.Prix);
			printf("\n");
			printf("\n------------------------------------------------------------------\n");
			Trouve=1;
Choix2:
				printf("\n-----------------------------------------------------------------\n");
				printf("\t\t	=====MENU=====");
				printf("\n-----------------------------------------------------------------\n");
				printf("\n");
				printf("=> Si vous voulez modifier cette Vente, Ecrivez -----{'Modifier'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez supprimer cette Vente, Ecrivez -----{'Supprimer'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Revenir au Menu des Ventes, Ecrivez -----{'Revenir'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Quitter, Ecrivez 'Quitter'}-----\n");
				printf("\n");
				printf("\n---------------------------------------------------------------\n");
				printf("\n");
				printf("-Entrez votre choix: ");
				fflush(stdin);
				gets(Reponse);
																					//Cas de modifier:
				if(strcmp(Reponse,Modifier)==0)
				{
					system("CLS");
					printf("\n **Les nouvelles informations du Vente (Date, Client, Medicaments, Prix)**\n");
					printf("\n -Entrez la nouvelle date du Vente: ");
					scanf("%d/%d/%d", &V[i].date.j, &V[i].date.m, &V[i].date.a );
					printf("\n -Entrez le Nom complet du client: ");
					fflush(stdin);
					gets(V[i].client.Nomcomplet);
					printf("\n -Entrez le  Nom du Medicament: ");
					fflush(stdin);
					gets(V[i].Med.Nom);
					printf("\n -Entrez le nouveau prix du Vente: ");
					scanf("%f", &V[i].Med.Prix);
					system("CLS");
					printf("\n-------------------------------------\n");
					printf("\n Vente %d: \n", V[i].Numero);
					printf(" \t\t*Date: %d/%d/%d.\n", V[i].date.j, V[i].date.m, V[i].date.a );
					printf(" \t\t*Medicament pris par Mr. %s : %s\n", V[i].client.Nomcomplet, V[i].Med.Nom);
					printf(" \t\t*Prix total du vente: %.2fDh\n", V[i].Med.Prix);
					printf("\n------------------------------------------------------------------\n");
					printf("\n");
					sleep(2);
					goto Menu;
				}
																					//Cas de Supprimer:
				if(strcmp(Reponse,Supprimer)==0)
				{
					for(j=i;j<NV;j++)
					{
						V[j]=V[j+1];
						NV--;
					}
					system("CLS");
					printf("\n La Vente a ete bien supprime\n");
					sleep(2);
					goto Menu;
				}
																					//Cas de Quitter:

				if(strcmp(Reponse,Quitter)==0)
				{
					goto Fin;
				}
																					//Cas de Revenir:

					if(strcmp(Reponse,Revenir)==0)
				{
					goto Menu;
				}
				else
				{
					printf("\n------------------------------------------------------------------------------------------------\n");
					printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s l vous plait######");
					printf("\n------------------------------------------------------------------------------------------------\n");
					goto Choix2;
				}	
			}
		}	
			if(Trouve==0)
			{
				system("CLS");
				printf("\n Aucune Vente n est associee a cette date: %d/%d/%d \n", Jour, Mois, Annee);
Choix3:
				printf("\n-----------------------------------------------------------------\n");
				printf("\t\t	=====MENU=====");
				printf("\n-----------------------------------------------------------------\n");
				printf("\n");
				printf("=> Si vous voulez ajouter cette Vente a la list des Ventes, Ecrivez -----{'Ajouter'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Revenir au Menu des Ventes, Ecrivez -----{'Revenir'}-----\n");
				printf("\n");
				printf("\n=> Si vous voulez Quitter, Ecrivez -----{'Quitter'}-----\n");
				printf("\n");
				printf("\n---------------------------------------------------------\n");
				printf("\n");
				printf("-Entrez votre choix: ");
				fflush(stdin);
				gets(Reponse);
				
Ajout:																	//Cas d'ajouter:
				if(strcmp(Reponse,Ajouter)==0)
				{
					system("CLS");
					printf("\n -Entrez les information du Vente %d/%d/%d: ", Jour, Mois, Annee);
					V[i].date.j=Jour;
					V[i].date.m=Mois;
					V[i].date.a=Annee;
					printf("\n");
					printf("\n -Entrez le Nom complet de Client: ");
					fflush(stdin);
					gets(V[i].client.Nomcomplet);
					printf("\n -Entrez le Numero Telephone de Client: ");
					fflush(stdin);
					gets(V[i].client.Tele);
					printf("\n -Entrez le Medicament Vendu: ");
					fflush(stdin);
					gets(V[i].Med.Nom);
					printf("\n -Entrez la description de '%s' (Pas obligatoire): ", V[i].Med.Nom);
					fflush(stdin);
					gets(V[i].Med.Description);
					printf("\n -Entrez le prix total du vente: ");
					scanf("%f", &V[i].Med.Prix);
					V[i].Numero=NV+1;
					system("CLS");
					printf("\n La Vente du %d/%d/%d a ete bien ajoutee a la list des Ventes\n", Jour, Mois, Annee);
					printf("\n------------------------------------------------------------------\n");
					printf("\n Vente %d: \n", V[i].Numero);
					printf(" \t\t*Date: %d/%d/%d.\n", V[i].date.j, V[i].date.m, V[i].date.a );
					printf(" \t\t*Medicament pris par Mr. %s : %s\n", V[i].client.Nomcomplet, V[i].Med.Nom);
					printf(" \t\t*Prix total du vente: %.2fDh\n", V[i].Med.Prix);
					printf("\n------------------------------------------------------------------\n");
					printf("\n");
					V[i].Med.Num=NV+1;
					V[i].client.Matricule=NV+1;
					NV++;
					V[i].Numero=NV;
					for(i=0;i<NV;i++)
					{
						M[i]=V[i].Med;
						C[i]=V[i].client;
					}
					sleep(2);
					goto Affichage;
				}
																					//Cas de Quitter:
					if(strcmp(Reponse,Quitter)==0)
					{
					goto Fin;
					}
																					//Cas de Revenir:
					if(strcmp(Reponse,Revenir)==0)
					{
					goto Menu;
					}
					else
					{
					printf("\n------------------------------------------------------------------------------------------------\n");
					printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s l vous plait######");
					printf("\n------------------------------------------------------------------------------------------------\n");
					goto Choix3;
					}
				}
	}
	if(strcmp(Reponse,Revenir)==0)
	{
		system("CLS");
		main();
	}
	else
	{
		printf("\n------------------------------------------------------------------------------------------------\n");
		printf("#######erreur de choix d operation, verifier la Majuscule au debut du Mot et resseyer s il vous plait######");
		printf("\n------------------------------------------------------------------------------------------------\n");
		sleep(2);
		goto Menu;
	}
	Fin:
	system("CLS");
	printf("\n---------------------------------------------------------\n");
	printf("\t\tFIN DU PROGRAMME");
	printf("\n---------------------------------------------------------\n");
	}
