#include<stdio.h>
#include<Math.h>
main()
{
	float N1, N2, N3, MG;
	int C1, C2, C3;
	printf("donnez la 1ere note et son coefficient\n");
	scanf("%f%d", &N1,&C1);
	printf("donnez la 2eme note et son coefficient\n");
	scanf("%f%d", &N2,&C2);
	printf("donnez la 3eme note et son coefficient\n");
	scanf("%f%d", &N3,&C3);
	MG=((N1*C1)+(N2*C2)+(N3*C3))/(C1+C2+C3);
	printf("La moyenne general est :%.2f", MG);
}
