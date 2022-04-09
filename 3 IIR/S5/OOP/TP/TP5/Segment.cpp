#include"Segment.hpp"

using namespace std;

Segment::Segment(){
    cout << "Saisir ext1" << endl;
    cin >> ext1;
    cout << "Saisir ext2" << endl;
    cin >> ext2;
    cout << "Saisir la couleur" << endl;
    cin >> couleur;
}
Segment::Segment(Point pExt1, Point pExt2){
    ext1 = pExt1;
    ext2 = pExt2;
    couleur = "bleu";
}
Segment::Segment(Point pExt1, Point pExt2, string pCouleur){
    ext1 = pExt1;
    ext2 = pExt2;
    couleur = pCouleur;
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
int Segment::longueur(){
    return (ext2 - ext1);
}
bool Segment::appartient(int pX){
    return((pX > ext1) && (pX < ext2));
}

void Segment::changer(int pExt1, int pExt2){
    ext1 = pExt1;
    ext2 = pExt2;
}