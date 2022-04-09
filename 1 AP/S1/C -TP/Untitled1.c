#include<stdio.h>
#include<Math.h>
	main()
	{
		int A, B, C;
		float hypt, tan;
		printf("Donnez un nombre\n");
		scanf("%d", &A);
		printf("donnez un autre nombre\n");
		scanf("%d", &B);
		C=pow(A,B);
		hypt=sqrt(pow(A,2)+pow(B,2));
		tan=sin(A)/cos(A);
		printf("%d a la puissance %d c'est: %d\n", A, B, C);
		printf("L'hypotenuse d'un triangle rectangle de cote %d et %d est:%.2f\n", A, B, hypt);
		println("La tangente de l'angle %d en Radian: %.2f", A, tan );
			
	}
