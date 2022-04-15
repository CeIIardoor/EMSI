#include"Segment.hpp"
#include<math.h>

using namespace std;

Segment::Segment(int pExt1, int pExt2){
    ext1 = pExt1;
    ext2 = pExt2;
    couleur = "bleu";
}
Segment::Segment(int pExt1, int pExt2, string pCouleur){
    ext1 = pExt1;
    ext2 = pExt2;
    couleur = pCouleur;
}
Segment::Segment(const Segment &s){
    this->ext1 = s.ext1;
    this->ext2 = s.ext2;
    this->couleur = s.couleur;
}

Segment::~Segment(){
    cout << " Segment " << ext1 << "," << ext2 << " detruit " << endl;
}


int Segment::getExt1(){
    return ext1;
}
int Segment::getExt2(){
    return ext2;
}
void Segment::afficher(){
    cout << " Segment " << ext1 << "," << ext2 << "," << couleur << endl;
}

bool Segment::appartient(int pX){
    return((pX > ext1) && (pX < ext2));
}

void Segment::changer(int pExt1, int pExt2){
    ext1 = pExt1;
    ext2 = pExt2;
}
float Segment::longueur(){
    return sqrt(pow(ext2.getAbscisse() - ext1.getAbscisse(),2)-pow(ext2.getOrdonnee() - ext1.getOrdonnee(),2));
}