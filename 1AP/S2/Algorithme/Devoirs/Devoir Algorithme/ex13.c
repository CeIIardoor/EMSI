#include<stdio.h>
  //Code crée par Marouan El Ouardi.

main()
{
    int T[100];
    int j,i,n,k,aide,f;
   //Demande des données:
    printf("Entrer N (dimension ): ");
    scanf("%d",&n);
    printf("Entrer le nombre de permutation: ");
    scanf("%d", &k);
   //Remplissage du tableau:
    for(i=0;i<n;i++)
    {
        printf("T[%d] : ",i);
        scanf("%d",&T[i]);
    }
   
    //affichge du tableau:
    for(i=0;i<n;i++)
    {
        printf("%d \t",T[i]);
    }
   
    printf("\n");
   
    //Traitement:
    j=1;
    while(j<=k)
    {
    	aide=T[n-1];
    		for(i=0;i<n;i++)
    		{
        		T[n-i]=T[n-(i+1)];
    		}
   	 	T[0]=aide;
   	 	j++;
   	 	i=0;
	}
	
   //affichage finale:
    for(i=0;i<n;i++)
    {
        printf("%d \t",T[i]);
    }
   
}
