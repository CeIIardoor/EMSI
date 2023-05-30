class Point
{
public:
    static int nbrPoints;
    int abscisse;
    int ordonnee;
    Point();
    Point(float abscisse,float ordonnee);
    Point(const Point &p);
    ~Point();
    float getAbscisse();
    float getOrdonnee();
    void setAbscisse(float abs);
    void setOrdonnee(float ord);
    void afficher();
    void deplacer(float dAbs,float dOrd);
};




