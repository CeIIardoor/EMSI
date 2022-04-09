#include <iostream>
using namespace std;

class article
{
private:
    int code;
    string type;
    int price;
    string desc;
    int qte;
public:
    article(int pCode,string pType, int pPrice,string pDesc,int pQte);
    ~article();
    int getcode();
    void afficher();
    void entree();
    void sortie();
    void promo();
};

article::article(int pCode,string pType, int pPrice,string pDesc,int pQte)
{
    code = pCode;
    type = pType;
    price = pPrice;
    qte = pQte;

};

article::~article()
{

}
 void article::afficher(){
     cout<< code<<endl;
     cout<< price<<endl;
     cout<< type<<endl;
     cout<< desc<<endl;
     cout<< qte<<endl;
}

int article::getcode()
{
    return code;
}
void article::entree(int pQte){
    this.qte += pQte;    
}
void article::sortie(int pQte){
    this.qte -= pQte;    
}
void article::promo(int pPromo){
    return this.price * (1-promo/100);    
}
