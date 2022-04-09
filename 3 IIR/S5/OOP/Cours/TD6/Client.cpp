#include<iostream>
#include"Client.hpp"
using namespace std;

Client::Client(string pCIN, string pNom, string pNum, string pTel){
    CIN = pCIN;
    nom = pNom;
    num = pNum;
    tel = pTel;
}
void Client::setCIN(string pCIN){
    CIN = pCIN;
}
void Client::setNom(string pNom){
    nom = pNom;
}
void Client::setNum(string pNum){
    num = pNum;
}
void Client::setTel(string pTel){
    tel = pTel;
}
string Client::getNom(){
    return nom;
}
string Client::getNum(){
    return num;
}
string Client::getCIN(){
    return CIN;
}
string Client::getTel(){
    return tel;
}


