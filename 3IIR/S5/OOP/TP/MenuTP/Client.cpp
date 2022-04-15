#include<iostream>
#include"Client.hpp"

using namespace std;

Client::Client(){
    this->cin="g123456";
	this->nom="Client";
	this->tel="06-13-46-79-58";
};

Client::Client(string cin, string nom, string tel){
 	this->cin=cin;
	this->nom=nom;
	this->tel=tel;
};
void Client::ajouterCargaison(int indice, Cargaison carg){
	return SocieteTransport::ajouterCargaison(indice, carg);
};

void Client::afficherCargaison(int reference){
	return SocieteTransport::afficherCargaison(reference);
};
void Client::afficherMarchandise(int numero){
	return SocieteTransport::afficherMarchandise(numero);
};
void Client::afficherToutesMarchandises(int reference){
	return SocieteTransport::afficherToutesMarchandises(reference);
};

void Client::afficherToutesCargaisons(){
	return SocieteTransport::afficherToutesCargaisons();
};

float Client::ConsulterPoidsCarg(int reference){
	return SocieteTransport::ConsulterPoidsCarg(reference);
};
float Client::ConsulterCoutCarg(int reference){
	return SocieteTransport::ConsulterPoidsCarg(reference);
};

void Client::trierCargaison(){
	return SocieteTransport::trierCargaison();
};

