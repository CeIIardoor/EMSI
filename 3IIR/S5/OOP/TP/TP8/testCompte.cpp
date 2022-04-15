#include"Compte.cpp"


using namespace std;

int main(){
    Compte c1 = Compte(1001,10500.58);
    c1.verser(100);
    c1.retirer(10000);
    cout << "le solde du compte "<< c1.code << " : " << c1.getSolde() << endl;
    Compte c2 = Compte();
    cout << "le solde du compte "<< c2.code << " : " <<  c2.getSolde() << endl;
    return 0;
}

