#include<iostream>
#include"Contact.hpp"
using namespace std;

Contact::Contact(){
    num = "000000000";
}
Contact::Contact(string pNom, string pNum){
    nom = pNom;
    num = pNum;
}
string Contact::getNom(){
    return nom;
}
string Contact::getNum(){
    return num;
}
void Contact::setNom(string pNom){
    nom = pNom;
}
void Contact::setNum(string pNum){
    num = pNum;
}


