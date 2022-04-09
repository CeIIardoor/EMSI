#include<iostream>
#include<string>

using namespace std;


class Document
{
public:
    int code;
    string titre;
    float prix;
    static int c;
    Document();
    Document(string pTitre, float pPrix);
    Document(Document &d);

    void afficher();

    void solder(int p);

    bool operator==(Document const &d){
        if (code == d.code) return 1;
        return 0;
    };
    bool operator<(Document const &d){
        if(prix<d.prix) return 1;
        return 0;
    };
    bool operator>(Document const &d){
        if(prix>d.prix) return 1;
        return 0;
    };
    
    // ostream& operator<<(ostream& os){
    // os << code << " " << titre;
    // return os;
    // };
};
