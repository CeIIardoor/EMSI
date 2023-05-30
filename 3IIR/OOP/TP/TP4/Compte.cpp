#include<iostream>
#include"Compte.hpp"
using namespace std;

Compte::Compte(){
    cout << "Saisir le code" << endl;
    cin >> code;
    cout << "Saisir le Solde" << endl;
    cin >> solde;
}
Compte::Compte(int pCode, float pSolde){
    code = pCode;
    solde = pSolde;
}
Compte::~Compte(){
    cout << " Compte " << code << " detruit " << endl;
}

void Compte::verser(float pSolde){
    solde += pSolde;
}
void Compte::retirer(float pSolde){
    solde -= pSolde;
}
float Compte::getSolde(){
    return solde;
}

