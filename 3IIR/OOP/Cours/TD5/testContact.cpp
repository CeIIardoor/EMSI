#include"Contact.cpp"


using namespace std;

int main(){
    Contact c1("Yassine Laouina","06-62-62-62-62");
    cout << c1.getNom();
    cout << c1.getNum();
    c1.setNom("Yassine");
    Contact c2;
    c2.setNom("Yassine");
    c2.setNum("06.62.62.62.62");
    cout << c2.getNom();
    cout << c2.getNum();
    return 0;
}

