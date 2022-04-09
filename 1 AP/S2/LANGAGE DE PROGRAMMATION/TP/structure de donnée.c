#include<stdio.h>
#include<string.h>
#include<Math.h>
struct Complexe
{
	double img;
	double reel;
};
main()
{
	struct Complexe Z;
	double Modulo;
	printf("Entrez la parite imaginaire du nombre complexe: \n");
	scanf("%lf", &Z.img);
	printf("Entrez la parite reel du nombre complexe: \n");
	scanf("%lf", &Z.reel);
	Modulo=sqrt(pow(Z.img,2)+pow(Z.reel,2));
	printf("Le modulo de z=%.lf+%.lfi est : %.lf", Z.reel, Z.reel, Modulo);
	
}
