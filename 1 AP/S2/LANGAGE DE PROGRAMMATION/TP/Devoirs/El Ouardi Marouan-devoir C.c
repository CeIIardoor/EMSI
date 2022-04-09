#include<stdio.h>
#include<string.h>
#include<conio.h>
                                                                          /*EL Ouardi Marouan---AP9*/ 
// Définition de la structure Etudiant 
typedef struct{
					char Nom[50],Prenom[50];
					int Matricule, j, m, a;
					float Note;	
			  }Etudiant;
main()
{
 //Déclaration des variables:
	Etudiant E[30], Help;
	int N=2, mat=1, i, j, MaxE, MinE;
	float note1, note2, max=0, min=20;
 //Declaration des Etudiant A et B:
    printf ( " Saisie de %d etudiants : \n ", N);
	strcpy(E[0].Nom, "El Ouardi");strcpy(E[0].Prenom, "Marouan");
	strcpy(E[1].Nom, "Etudiant");strcpy(E[1].Prenom, "Emsi");
	E[0].Matricule = 1; E[1].Matricule = 2;
	E[0].j = 21; E[1].j = 2; 
	E[0].m = 5; E[1].m = 11;
	E[0].a = 1999; E[1].a = 1998;
	E[0].Note = 18; E[1].Note = 14;
  //Affichage des Etudiants:
  for(i=0;i<N;i++)
  {
  	printf("\n Etudiant %d: \n", i+1);
 	printf("\t\tNom et Prenom: %s %s\n", E[i].Nom, E[i].Prenom);
 	printf("\t\tDate de naissance: %d/%d/%d\n", E[i].j, E[i].m, E[i].a);
 	printf("\t\tNote: %.2f/20", E[i].Note);
  }
 // L'affichage de la Note maximal :
	for(i=0; i<1; i++)
	{
		if(E[i].Note<E[i+1].Note)
		{
			printf("\nLa 1er note est : %.2f/20 obtenu par l etudiant: %s %s\n", E[i+1].Note, E[i+1].Nom, E[i+1].Prenom);
		}
		else
		{
			printf("\nLa 1er note est : %.2f/20 obtenu par l etudiant %s: %s\n", E[i].Note, E[i].Nom, E[i].Prenom);
		}
	}
 //Remplissage du Tableau E[30]:
	N=0;
	mat=1;
	printf ( "\n Entrer le nombre des etudiants a saisir: \n ");
	scanf("%d", &N);
	fflush(stdin);
		for(i=0;i<N;i++)
		{
			E[i].Matricule=mat;
			mat++;
			printf( "\n Etudiant %d: \n", E[i].Matricule);
      	    fflush(stdin);
      	    printf("\t\tEntrer le nom: ");
      	    gets( E[i].Nom );
      	    printf("\t\tEntrer le prenom: ");
      	    gets( E[i].Prenom );
      	    printf("\t\tEntrer le jour de naissance: ");
      	    scanf("%d",&E[i].j);
      	    printf("\t\tEntrer le mois de naissance: ");
     	    scanf("%d",&E[i].m);
     	    printf("\t\tEntrer l annee de naissance: ");
     	    scanf("%d",&E[i].a);
     	    printf("\t\tEntrer la note: ");
     	    scanf("%f",&E[i].Note);
	   	}
 //L'affichage des Etudiants du tableau T[30]:
 		for(i=0;i<N;i++)
 		{
 			printf("\n Etudiant %d: \n", i+1);
 			printf("\t\tNom et Prenom: %s %s\n", E[i].Nom, E[i].Prenom);
 			printf("\t\tDate de naissance: %d/%d/%d\n", E[i].j, E[i].m, E[i].a);
 			printf("\t\tNote: %.2f/20", E[i].Note);
	    }
 //L'affichage de la Note maximal et La Note minimal:
 for(i=0;i<N;i++)
 {
 	if(E[i].Note>max)
 	{
 		max=E[i].Note;
 		MaxE=i;
	}
	if(E[i].Note<min)
	{
		min=E[i].Note;
		MinE=i;
	}
 }
 printf("\n La note maximal est %.2f/20 obtenu par l etudiant: %s %s\n", max, E[MaxE].Nom, E[MaxE].Prenom);
 printf("\n La note minimal est %.2f/20 obtenu par l etudiant: %s %s\n", min, E[MinE].Nom, E[MinE].Prenom);
 //Le Tri de tableau par ordre croissant des notes:
 for(i=0;i<N;i++)
 {
 	for(j=i+1;j<N;j++)
 	{
 		
 		if(E[i].Note>E[j].Note)
 		{
 			Help=E[i];
 			E[i]=E[j];
 			E[j]=Help;
		}
	}
}
 //L'affichage final du Tableau par ordre croissant des notes:
 for(i=0;i<N;i++)
 {
 	printf("\n Etudiant %d: \n", i+1);
 	printf("\t\tNom et Prenom: %s %s\n", E[i].Nom, E[i].Prenom);
 	printf("\t\tDate de naissance: %d/%d/%d\n", E[i].j, E[i].m, E[i].a);
 	printf("\t\tNote: %.2f/20", E[i].Note);
 }
 	
 
 
 
 
 	
	
	 
	
	
	


	
	

	
	
}
