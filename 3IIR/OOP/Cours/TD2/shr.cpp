#include <iostream>

using namespace std;

float shr(int n){
    if (n==1) return 1;
    return 1/(float)n+shr(n-1);
}

int main(){
    cout << shr(3);
    return 0;
}
