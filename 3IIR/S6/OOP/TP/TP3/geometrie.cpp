#include<iostream>
#include<string>

using namespace std;

//abstract class Point with x,y coordinates and a virtual method afficher_coord() et changer_coord(x,y)

class Point {
    protected:
        int x;
        int y;
    public:
        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }
        void afficher(){
            cout << "(" << x << "," << y << ")" << endl;
        }
        void changer_coord(int x, int y) {
            this->x = x;
            this->y = y;
        }
};

// class Figure with a virtual method afficher() and attributes Couleur et Epaisseur

class Figure {
    protected:
        string couleur;
        int epaisseur;
    public:
        Figure(string couleur, int epaisseur) {
            this->couleur = couleur;
            this->epaisseur = epaisseur;
        }
        void afficher() {
            cout << "Couleur: " << couleur << endl;
            cout << "Epaisseur: " << epaisseur << endl;
        }
        void changer_epaisseur(int epaisseur) {
            this->epaisseur = epaisseur;
        }
};

//Cercle that inherits both (Point and Figure) with a virtual method afficher() and changer_rayon(r) and attributes rayon

class Cercle: public Point, public Figure {
    protected:
        int rayon;
    public:
        Cercle(int x, int y, int rayon, string couleur, int epaisseur): Point(x,y), Figure(couleur, epaisseur) {
            this->rayon = rayon;
        }
        void afficher() {
            Point::afficher();
            Figure::afficher();
            cout << "Rayon: " << rayon << endl;
        }
        void changer_rayon(int rayon) {
            this->rayon = rayon;
        }
};

class Cylindre: public Cercle {
    protected:
        int hauteur;
    public:
        Cylindre(int x, int y, int rayon, int hauteur, string couleur, int epaisseur): Cercle(x,y,rayon,couleur,epaisseur) {
            this->hauteur = hauteur;
        }
        void afficher() {
            Cercle::afficher();
            cout << "Hauteur: " << hauteur << endl;
        }
        void changer_hauteur(int hauteur) {
            this->hauteur = hauteur;
        }
};

int main(){
    Cercle c1(1,2,3,"rouge",4);
    Cylindre c2(1,2,3,4,"rouge",4);
    c1.afficher();
    c2.afficher();
    c1.changer_rayon(5);
    c2.changer_hauteur(5);
    c1.afficher();
    c2.afficher();
    return 0;
}