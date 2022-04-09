#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int c;
    do{
        cout << "Donner un nombre positif" << endl;
        cin >> c;
        if (c == 0) {
            break;
        }
        if(c < 0) {
            cout << "Error: c is not a positive integer" << endl;
            continue;
        }
        cout << "Sa racine carrée est : " << sqrt(c) << endl;
        
    }while(c != 0);
}