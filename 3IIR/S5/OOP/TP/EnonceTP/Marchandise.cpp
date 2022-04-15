#include<iostream>
#include"Marchandise.hpp"
using namespace std;
    int Marchandise::cptMarch = 0;
    Marchandise::Marchandise(){
        cptMarch++;
        this->numero = cptMarch;
        this->poids=0;
		this->volume=0;
    }

	Marchandise::Marchandise(float poids,float volume){
        cptMarch++;
		this->numero=cptMarch;
        this->poids=poids;
		this->volume=volume;
	}
		
    int Marchandise::getnumero(){
        return numero;
    }
		  
    float Marchandise::getpoids(){
        return poids;
    }

    float Marchandise::getvolume(){
        return volume;
    }
		 
    void Marchandise::setpoids(float poids){
        this->poids=poids;
    }
		 
    void Marchandise::setvolume(float volume){
        this->volume=volume;
    }
		 
    void Marchandise::afficher(){
        if (volume != 0 && poids != 0) cout<<"Marchandise Numero: "<<numero<<" poids: "<<poids<<" volume: "<<volume<< endl;
    }