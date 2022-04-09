#include<iostream>
#include"Championnat.cpp"

using namespace std;

int main(){
    Matchfoot M1("Maroc", "France");
    M1.butsA = 4;
    M1.butsB = 1;

    Matchfoot M2("France","Brazil");
    M2.marquerBut("France");
    M2.marquerBut("Brazil");

    Matchfoot M3("Maroc","Niger");
    M3.butsA = 2;
    M3.butsB = 1;

    M1.affichMatch();
    M2.affichMatch();
    M3.affichMatch();

    Championnat groupeA;
    groupeA.AjouterMatch(1,M1);
    groupeA.AjouterMatch(2,M2);
    groupeA.AjouterMatch(3,M3);
    cout << groupeA.pointParEquipe("Brazil") << endl;
    groupeA.listeEquipes();
    groupeA.calculPts();
    groupeA.afficher();

    return 0;
}

