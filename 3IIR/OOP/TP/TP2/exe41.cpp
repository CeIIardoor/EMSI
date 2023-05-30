#include <iostream>

using namespace std;

void fArgsParDefaut(int a, int b=13){
    cout << a;
    cout << " ";
    cout << b;
    cout << endl;
}

int main(){
    fArgsParDefaut(2,3);
    fArgsParDefaut(2);
}