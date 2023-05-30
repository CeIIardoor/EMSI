#include <iostream>
#include <math.h>
using namespace std;

float Un(int n);
float Vn(int n);

int main() {
    cout << Un(5);
    cout << endl << "--" << endl;
    cout << Vn(7);
}


float Un(int n){
    if (n==0) return 0.5F;
    return Un(n-1)+Vn(n-1);
    }
float Vn(int n){
    if (n==0) return -1.5F;
    return 2*Un(n-1)+Vn(n-1);
    }