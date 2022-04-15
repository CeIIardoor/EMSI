#include<iostream>
#include"Admin.hpp"
using namespace std;

Admin::Admin(){
    this->cin="ga123789";
    this->nom="Admin";
    this->tel="06-13-46-79-58";
};
Admin::Admin(string cin, string nom, string tel){
    this->cin=cin;
    this->nom=nom;
    this->tel=tel;
};

// Methodes Client
void Admin::afficherCargaison(int reference){
	return SocieteTransport::afficherCargaison(reference);
};
void Admin::afficherMarchandise(int numero){
	return SocieteTransport::afficherMarchandise(numero);
};
void Admin::afficherToutesMarchandises(int reference){
	return SocieteTransport::afficherToutesMarchandises(reference);
};

void Admin::afficherToutesCargaisons(){
	return SocieteTransport::afficherToutesCargaisons();
};


float Admin::ConsulterPoidsCarg(int reference){
	return SocieteTransport::ConsulterPoidsCarg(reference);
};
float Admin::ConsulterCoutCarg(int reference){
	return SocieteTransport::ConsulterCoutCarg(reference);
};

void Admin::trierCargaison(){
	return SocieteTransport::trierCargaison();
};


void Admin::ajouterCargaison(int indice, Cargaison carg){
    return SocieteTransport::ajouterCargaison(indice, carg);
};

// Methodes Admin

void Admin::ajouterMarchandiseCarg(int reference, int indice,Marchandise march){
    for (int i = 0; i < 20; i++)
    {
        if(c[i].getreference() == reference)
        {
            c[i].ajoutMarchandise(indice,march);
        }
    }
};

void Admin::supprimerMarchandise(Cargaison carg, int num){
    carg.supprimerMarchandise(num);
};
void Admin::supprimerCargaison(int reference){
    int indice;
    for(int i=0;i<20;i++){
        if(c[i].getreference()==reference){
            indice = i;
            break;
            }
        }
        for(int j=indice;j<19;j++){
            c[j]=c[j+1];
        }
    c[19] = Cargaison();
};

void Admin::modifierInfoMarchandise(int numero,float p, float v){
    for(int i=0;i<20;i++){
        if(c[i].getmarch(numero).getnumero() == numero){
            c[i].getmarch(numero).setpoids(p);
            c[i].getmarch(numero).setvolume(v);
        }
    }
};