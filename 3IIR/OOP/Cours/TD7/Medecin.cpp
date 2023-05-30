#include"Medecin.hpp"
#include<iostream>
using namespace std;

int Medecin::c=0;

Medecin::Medecin(string pPrenom, string pNom, string pEmail, string pTel, string pSpecialite){
    c++;
    id = c;
    nom = pNom;
    prenom = pPrenom;
    tel = pTel;
    email = pEmail;
    specialite = pSpecialite;
}
// -----------------------------------
void Medecin::setPrenom(string pPrenom){
    prenom = pPrenom;
}
void Medecin::setNom(string pNom){
    nom = pNom;
}
void Medecin::setEmail(string pEmail){
    email = pEmail;
}
void Medecin::setTel(string pTel){
    tel = pTel;
}
void Medecin::setSpecialite(string pSpecialite){
    specialite = pSpecialite;
}
// -----------------------------------
string Medecin::getPrenom(){
    return prenom;
}
string Medecin::getNom(){
    return nom;
}
string Medecin::getEmail(){
    return email;
}
string Medecin::getTel(){
    return tel;
}
string Medecin::getSpecialite(){
    return specialite;
}


