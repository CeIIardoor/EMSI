#include <iostream>

using namespace std;

float Division(int a,int b){
    while (b==0) cout << "b != 0"; cin >> b;
    return (float)a/b;
}

int fact(int a){
    if (a==1) return 1;
    return a*fact(a-1);
}

int main(){
    cout << Division(5,3) << endl;
    cout << fact(5);
    return 0;
}