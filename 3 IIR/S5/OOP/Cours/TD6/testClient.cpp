#include"Client.cpp"


using namespace std;

int main(){
    Client c1("G691625","Laouina", "Yassine","06-62-62-62-62");
    cout << c1.getNom();
    cout << c1.getNum();
    c1.setNom("Abdlbaset");
    Client c2("G123456","Ahmed", "Java","06-62-62-62-62");
    c2.setNom("Yassine");
    c2.setNum("07.62.62.62.62");
    cout << c2.getNom();
    cout << c2.getNum();
    return 0;
}

