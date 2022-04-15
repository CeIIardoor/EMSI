#include"stdio.h"
main(){
	int n,i,j,T[20][20],c,S=0;
	printf("Dimension de la matrice:\t");scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("T[%d][%d]= ",i+1,j+1);scanf("%d",&T[i][j]);
		}
	}
	
	printf("choisisez:\n\t1: mettre les éléments de la diagonale a 0\n\t2: calculer la somme de la diagonale\n\t3: calculer la somme des deux diagonales\n\t");
	scanf("%d",&c);
	
	switch(c){
	case 1:
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==j) T[i][j]=0;
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("T[%d][%d]= %d\t",i+1,j+1,T[i][j]);
			}printf("\n");
		}
		break;
	case 2:	
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==j) S+=T[i][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("T[%d][%d]= %d\t",i+1,j+1,T[i][j]);
			}printf("\n");
		}
		printf("La somme de la diagonale:\tS= %d",S);
		break;
	case 3:
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==j||i+j==n-1) S+=T[i][j];
			}
		}
		for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("T[%d][%d]= %d\t",i,j,T[i][j]);
				}printf("\n");
			}
			printf("La somme de la diagonale:\tS= %d",S);	
	
	}
	
}
