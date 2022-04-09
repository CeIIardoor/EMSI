#include"Point.hpp"
#include<iostream>
using namespace std;

class Segment
{
public:
    Point ext1;
    Point ext2;
    string couleur;

public:
    Segment();
    Segment(Point pExt1, Point pExt2);
    Segment(Point pExt1, Point pExt2, string pCouleur);
    Segment(const Segment &s);
    ~Segment();

    Point getExt1();
    Point getExt2();
    void afficher();
    int longueur();
    void changer(Point pExt1, Point pExt2);
};

