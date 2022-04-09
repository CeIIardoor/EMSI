#include<iostream>
#include"Compte.hpp"
using namespace std;
x
Compte::Compte(int pCode, float pSolde){
    id = nbrCpt++;
    code = pCode;
    solde = pSolde;
}
Compte::Compte(Compte &c){
    id = nbrCpt++;
    code = c.code;
    solde = c.solde;
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

static int Compte::nbrCpt;
