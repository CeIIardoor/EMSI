#include<iostream>


using namespace std;

class SocieteTransport{
 	public:
    string cin;
    string nom;
    string tel;
    Cargaison c[20];
    
    SocieteTransport();
    SocieteTransport(string cin,string nom,string tel);
    string getcin();
    string getnom();
    string gettel();
    void ajouterCargaison(int indice, Cargaison carg);
    Cargaison getCargaison(int reference);
    void setcin(string cin);
    void setnom(string nom);
    void settel(string tel);
    void afficherToutesMarchandises(int reference);
    void consulterCargaison(int reference);
    void consulterMarchandise(int numero);
    void afficherMarchandise(int numero);
    void afficherCargaison(int numero);
    void afficherToutesCargaisons();
    float ConsulterPoidsCarg(int reference);
	float ConsulterCoutCarg(int reference);
	void trierCargaison();


};
 