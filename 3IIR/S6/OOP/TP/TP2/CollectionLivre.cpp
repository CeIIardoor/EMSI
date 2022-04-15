#include<iostream>
#include<string>
#include"Livre.cpp"

// create collectionlivre class with a table of livre, int taille, int nbr_livre, and a char* Res

class CollectionLivre
{
public:
    Livre* CL;
    int taille;
    int nbr_livre;
    char* Res;
    CollectionLivre(int pTaille);
    void ajouterLivre(Livre pLivre);
    bool verifierCode(int pCode);
    bool verifierLivre(Livre livre);
    void reserverLivre(int pCode);
    void afficher();
    Livre rechercher(int pCode);
    void supprimer(int pCode);
    ostream& operator<<(ostream& os);
    ~CollectionLivre();  
};

CollectionLivre::CollectionLivre(int pTaille)
{
    taille = pTaille;
    nbr_livre = 0;
    Res = new char[taille];
    CL = new Livre[taille];
}

CollectionLivre::~CollectionLivre()
{
    delete[] CL;
    delete[] Res;
}

bool CollectionLivre::verifierCode(int pCode){
    for(int i=0; i<nbr_livre; i++){
        if(CL[i].code == pCode){
            return 1;
        }
    }
    return 0;
}

bool CollectionLivre::verifierLivre(Livre livre){
    for(int i=0; i<nbr_livre; i++){
        if(CL[i] == livre){
            return 1;
        }
    }
    return 0;
}

void CollectionLivre::ajouterLivre(Livre pLivre){
    if(verifierLivre(pLivre) == 0){
        CL[nbr_livre] = pLivre;
        Res[nbr_livre] = 'L';
        nbr_livre++;
    }
}

void CollectionLivre::reserverLivre(int pCode){
    if(verifierCode(pCode) == 1){
        for(int i=0; i<nbr_livre; i++){
            if(CL[i].code == pCode){
                Res[i] = 'R';
            }
        }
    }
}

void CollectionLivre::afficher(){
    for(int i=0; i<nbr_livre; i++){
        CL[i].afficher();
    }
}
