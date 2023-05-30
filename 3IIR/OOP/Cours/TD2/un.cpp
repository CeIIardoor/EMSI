#include <iostream>

using namespace std;

float Un(int n){
    if (n == 0) return 1.5F;
    if (n == 1) return -0.4F;
    return Un(n-1)+1.5*Un(n-2);
}

int main(){
    cout << Un(3);
    return 0;
}
