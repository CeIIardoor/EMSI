#include<iostream>

using namespace std;
class Cargaison{
protected:
		int reference;
		float distance;
		float poids;
		Marchandise m[20];
		string type;
		
public:
	static int cptCarg;

	Cargaison();
	Cargaison(float distance,string type);
    string gettype();
    int getreference();
    float getdistance();
    Marchandise getmarch(int num);
    void settype(string type);
	void setdistance(float distance);
	void setMarchandise(int indice, Marchandise march);
    void consulterMarchandise(int num);
	void consultertoutMarchandise();
    void ajoutMarchandise(int indice, Marchandise march);
    void supprimerMarchandise(int num);
	float getpoidstotal();
	float getvolumetotal();					
	void afficher();
    float couT();
};
