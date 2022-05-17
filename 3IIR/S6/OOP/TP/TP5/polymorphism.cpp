#include <string>
#include <iostream>

using namespace std;

// class Batiment avec str adresse float superficie float prixmcarre constuctor Batiment() and constructor Batiment(str a, float s, float pm)
class Batiment {

    public:
    string adresse;
    float superficie;
    float prixmcarre;

    void affichBatiment(){
        cout << "Adresse: " << adresse << endl;
        cout << "Superficie: " << superficie << endl;
        cout << "Prix mcarre: " << prixmcarre << endl;
    }
    virtual float prixBatiment(){
        return superficie * prixmcarre;
    }
    Batiment() {
        adresse = "";
        superficie = 0;
        prixmcarre = 0;
    }
    Batiment(string a, float s, float pm) {
        adresse = a;
        superficie = s;
        prixmcarre = pm;
    }

};

// class Maison avec int nbPieces bool existJardin int superficieJardin constuctor Maison() and constructor Maison(int n, bool e, int s, int sj)

class Maison : public Batiment {
    
    public:
    int nbPieces;
    bool existJardin;
    float superficieJardin;
    
    void affichBatiment(){
        Batiment::affichBatiment();
        cout << "Nombre de pieces: " << nbPieces << endl;
        cout << "Existe un jardin: " << existJardin << endl;
        cout << "Superficie du jardin: " << superficieJardin << endl;
    }
    float prixBatiment(){
        return existJardin ? Batiment::prixBatiment() : Batiment::prixBatiment() / 2;
    }

    Maison() : Batiment("", 0, 0)  {
        nbPieces = 0;
        existJardin = false;
        superficieJardin = 0;
    }
    Maison(string a, int n, bool e, float s, float sj, float pm) : Batiment(a, s, pm) {
        nbPieces = n;
        existJardin = e;
        superficieJardin = sj;
    }
};

int main() {
    Batiment batiment1;
    Batiment batiment2("rue de la paix", 100, 10);
    batiment1.affichBatiment();
    batiment2.affichBatiment();
    cout << "Prix du batiment: " << batiment2.prixBatiment() << endl;

    Maison maison1("rue de la paix", 4, true, 100, 10, 10);
    Maison maison2("sans jardin", 4, false, 100, 10, 0);
    maison1.affichBatiment();
    maison2.affichBatiment();
    cout << "Prix 1: " << maison1.prixBatiment() << endl;
    cout << "Prix 2: " << maison2.prixBatiment() << endl;
    return 0;
}