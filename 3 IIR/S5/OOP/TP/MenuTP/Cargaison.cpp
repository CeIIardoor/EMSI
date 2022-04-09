#include<iostream>
#include"Cargaison.hpp"

using namespace std;

int Cargaison::cptCarg = 0;
Cargaison::Cargaison(){
    this->distance=0;
    this->type="";
}

Cargaison::Cargaison(float distance,string type){
            cptCarg++;
            this->reference=cptCarg;
            this->distance=distance;
            this->type=type;
}

string Cargaison::gettype(){
    return type;
}
    
int Cargaison::getreference(){
    return reference;
}
float Cargaison::getdistance(){
    return distance;
}

Marchandise Cargaison::getmarch(int numero){
    for(int i=0; i < 20; i++){
            if(numero == m[i].getnumero()){
                return m[i];
            }
    }
}
    
void Cargaison::settype(string type){
    this->type=type;
}
void Cargaison::setdistance(float distance){
        this->distance=distance;
}
void Cargaison::setMarchandise(int indice, Marchandise march){
    m[indice] = march;
}


void Cargaison::afficherMarchandise(int num){
    for(int i=0; i < 20; i++){
            if(num == m[i].getnumero()) m[i].afficher();
            break;
    }
}

void Cargaison::affichertoutMarchandise(){
        for (int i=0;i<20;i++){
            m[i].afficher();
        }
}
        
        
void Cargaison::ajoutMarchandise(int indice ,Marchandise march){
    m[indice]=march;
}
        
float Cargaison::getpoidstotal(){
    float s=0;
        for (int i=0;i<20;i++){
            s+=m[i].getpoids();
        }
    return s;
}
        
        
float Cargaison::getvolumetotal(){
    float s=0;
        for (int i=0;i<20;i++){
            s+=m[i].getvolume();
        }
    return s;
}


void Cargaison::supprimerMarchandise(int num){
    int indice;
    // for(int i=0;i<20;i++){
    //     if(m[i].getnumero()==num){
    //         m[i]=Marchandise();
    //         }
    //     }
    for(int i=0;i<20;i++){
        if(m[i].getnumero()==num){
            indice = i;
            break;
            }
        }
        for(int j=indice;j<19;j++){
            m[j] = m[j+1];
        }
}

float Cargaison::couT(){
    int coef = 0;
    if (gettype()=="aerienne"){
        coef = (getvolumetotal()>=80000) ? 12 : 10;
    } 
    if(gettype()=="routiere"){
        coef = (getvolumetotal()>=380000) ? 6 : 4;
    }
    return coef*distance*getpoidstotal();
};

        
void Cargaison::afficher(){
    cout<<" Cref: "<< reference <<" Type :"<< type <<" Distance : "<<distance << endl;
}
class CargaisonA:public Cargaison{
 	public:
    CargaisonA(float distance){
        cptCarg++;
        this->reference=cptCarg;
        this->type="aerienne";
        this->distance = distance;
    }
 	float couTA(){
        return couT();
    }
};
 
 class CargaisonR:public Cargaison{
 	public:
    CargaisonR(float distance){
        cptCarg++;
        this->reference=cptCarg;
        this->type="routiere";
        this->distance = distance;
    }
    float couTR(){
        return couT();
    }
 };