#include<iostream>

using namespace std;

class Marchandise{
	private:
	int numero;
	float poids;
	float volume;
	
	public:
    static int cptMarch;
    Marchandise();
	Marchandise(float poids,float volume);

    int getnumero();
    float getpoids();
    float getvolume();

    void setpoids(float poids);
    void setvolume(float volume);
		 
    void afficher();
};