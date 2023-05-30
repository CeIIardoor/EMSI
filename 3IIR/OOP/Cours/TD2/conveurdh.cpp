#include <iostream>

using namespace std;
float taux = 11;
float eurtomad(float eur){
        return eur * taux;
    }
float madtoeur(float mad){
    return mad / taux;
}


int main() {
    int n;
    float montant,resultat;
    string monnaie;
    cout << "1- Convertir euro > mad " << endl << " 2- Convertir mad > euro";
    cin >> n;
    cout << "Montant : ";
    cin >> montant;
    resultat = (n=1) ? eurtomad(montant)  : madtoeur(montant);
    monnaie = (n=1) ? "mad" : "eur";
    cout << "L'equivalent de " << montant << " est "<< resultat << monnaie << endl;
    cout << "Mettre a jour le taux de change" << endl;
    cin >> taux;
    resultat = (n=1) ? eurtomad(montant)  : madtoeur(montant);
    cout << "Entrer la somme";
    cout << "L'equivalent de " << montant << " est "<< resultat << monnaie << endl;
}