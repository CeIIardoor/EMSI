#include<iostream>
using namespace std;

class Segment
{
public:
    int ext1;
    int ext2;
    string couleur;

public:
    Segment();
    Segment(int pExt1, int pExt2);
    Segment(int pExt1, int pExt2, string pCouleur);
    ~Segment();

    int getExt1();
    int getExt2();
    void afficher();
    int longueur();
    bool appartient(int pX);
    void changer(int pExt1, int pExt2);
    void ordonner(int pExt1, int pExt2);
};

