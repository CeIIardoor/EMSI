#include<iostream>
#include"Medecin.cpp"
#include"Patient.cpp"
#include"Rendezvous.hpp"

using namespace std;

Rendezvous::Rendezvous(string pDate, string pHeure, string pNum, Patient pPatient ,Medecin pMedecin){
    date = pDate;
    heure = pHeure;
    num = pNum;
    patient = pPatient;
    medecin = pMedecin;
}
void Rendezvous::setdate(string pDate){
    date = pDate;
}
void Rendezvous::setHeure(string pHeure){
    heure = pHeure;
}
void Rendezvous::setNum(string pNum){
    num = pNum;
}
void Rendezvous::setPatient(Patient pPatient){
    patient = pPatient;
}
void Rendezvous::setMedecin(Medecin pMedecin){
    medecin = pMedecin;
}

string Rendezvous::getDate(){
    return date;
}
string Rendezvous::getHeure(){
    return heure;
}
string Rendezvous::getNum(){
    return num;
}
Patient Rendezvous::getPatient(){
    return patient;
}
Medecin Rendezvous::getMedecin(){
    return medecin;
}


