#include"Patient.hpp"
#include<iostream>
using namespace std;

int Patient::c=0;

Patient::Patient(string pPrenom, string pNom, string pEmail, string pTel,Medecin pMedecin){
    c++;
    id = c;
    prenom = pPrenom;
    nom = pNom;
    email = pEmail;
    tel = pTel;
    medecin = pMedecin;
}

void Patient::setPrenom(string pPrenom){
    prenom = pPrenom;
}
void Patient::setNom(string pNom){
    nom = pNom;
}
void Patient::setEmail(string pEmail){
    email = pEmail;
}
void Patient::setTel(string pTel){
    tel = pTel;
}
void Patient::setMedecin(Medecin pMedecin){
    medecin = pMedecin;
}

string Patient::getNom(){
    return nom;
}
string Patient::getEmail(){
    return email;
}
string Patient::getPrenom(){
    return prenom;
}
string Patient::getTel(){
    return tel;
}
Medecin Patient::getMedecin(){
    return medecin;
}



