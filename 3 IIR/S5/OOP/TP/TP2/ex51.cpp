#include <iostream>

using namespace std;

void afficherNom(string s){
    cout << s;
}
void afficherNom(string s , int a){
    cout << s;
    cout << a;
}

int main(){
    string s;
    cin >> s;
    int a;
    cin >> a;
    afficherNom(s);
    afficherNom(s,a);

}