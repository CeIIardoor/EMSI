#include"Segment.cpp"

using namespace std;

int main(){
    Segment c1;
    Segment c2 = Segment(2,5);
    Segment c3 = Segment(4,8,"rouge");

    c1.afficher();
    c2.afficher();
    c3.afficher();

    cout << c2.longueur();
    
    if(c3.appartient(6)){
        cout << "appartient" << endl;
    }else{
        cout << "n'appartient pas" << endl;
    }

    c1.changer(3,6);

}

