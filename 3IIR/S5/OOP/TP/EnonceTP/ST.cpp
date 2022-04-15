#include<iostream>
#include"ST.hpp"

using namespace std;

SocieteTransport::SocieteTransport(){
	this->cin="G123456";
	this->nom="default";
	this->tel="06-13-46-79-58";
};

SocieteTransport::SocieteTransport(string cin,string nom,string tel){
	this->cin=cin;
	this->nom=nom;
	this->tel=tel;
};

string SocieteTransport::getcin(){
 	return cin;
};
 	
string SocieteTransport::getnom(){
    return nom;
};

string SocieteTransport::gettel(){
    return tel;
};

Cargaison SocieteTransport::getCargaison(int reference){
	for (int i = 0; i < 20; i++){
		if (c[i].getreference() == reference) return c[i];
	}
};

void SocieteTransport::setcin(string cin){
    this->cin=cin;
};
void SocieteTransport::setnom(string nom){
    this->nom=nom;
};
void SocieteTransport::settel(string tel){
    this->tel=tel;
};
void SocieteTransport::ajouterCargaison(int indice, Cargaison carg){
	c[indice] = carg;
};

void SocieteTransport::consulterCargaison(int reference){
    for(int i=0;i<20;i++){
        if(c[i].getreference()==reference) cout << "La cargaison existe" << endl;
		return;
    }
    cout << "La cargaison n'existe pas" << endl;
};

void SocieteTransport::afficherCargaison(int reference){
	for(int i=0;i<20;i++){
		if(c[i].getreference() == reference) c[i].afficher();
	}
};

void SocieteTransport::afficherToutesCargaisons(){
	for(int i=0;i<20;i++){
		if(c[i].getdistance() != 0) c[i].afficher();
	}
};
	 
	 
void SocieteTransport::consulterMarchandise(int numero){
	for(int i=0;i<20;i++){
		if(c[i].getmarch(numero).getnumero() == numero){
			cout << "La marchandise existe" << endl;
			return;
		} 
    }
    cout << "La marchandise n'existe pas" << endl;
};
	 
void SocieteTransport::afficherMarchandise(int numero){
	for(int i=0;i<20;i++){
		if(c[i].getmarch(numero).getnumero() == numero) c[i].getmarch(numero).afficher() ;
    }
    cout << "La marchandise n'existe pas" << endl;
};

void SocieteTransport::afficherToutesMarchandises(int reference){
	for (int i = 0; i < 20; i++)
    {
        if(c[i].getreference() == reference) c[i].consultertoutMarchandise();
    }
};


float SocieteTransport::ConsulterPoidsCarg(int reference){
	float p=0;
	for(int i=0;i<20;i++){
		if (c[i].getreference() == reference){
			p = c[i].getpoidstotal();
		}
	}
	return p;

};
	 
float SocieteTransport::ConsulterCoutCarg(int reference){
	float s=0;
	for(int i=0;i<20;i++){
		if (c[i].getreference() == reference){
			s = c[i].couT();
		}
	}
	return s;
};

void SocieteTransport::trierCargaison(){
	Cargaison temp;
	for(int i = 0; i<20; i++) {
		for(int j = i+1; j<20; j++)
		{
			if(c[j].couT() < c[i].couT()) {
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
};
