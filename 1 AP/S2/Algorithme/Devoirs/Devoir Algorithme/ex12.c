#include<stdio.h>
 //Code crée par Marouan El Ouardi.
 
main()
{
    int T[100];
    int j,i,n,k,aide,f;
   //Demande des données:
    printf("Entrer N (dimension ): ");
    scanf("%d",&n);
   //Remplissage du tableau:
    for(i=0;i<n;i++)
    {
        printf("T[%d] : ",i);
        scanf("%d",&T[i]);
    }
   
    //Affichge du tableau:
    for(i=0;i<n;i++)
    {
        printf("%d \t",T[i]);
    }
   
    printf("\n");
   
    //Traitement:
    aide=T[n-1];
    	for(i=0;i<n;i++)
    	{
        	T[n-i]=T[n-(i+1)];
    	}
    T[0]=aide;
   //Affichage finale:
    for(i=0;i<n;i++)
    {
        printf("%d \t",T[i]);
    }
   
}
