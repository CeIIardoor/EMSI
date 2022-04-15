#include <iostream>

using namespace std;

int puissance(int x, int n){
    if (n == 0) return 1;
    if (n == 1) return x;
    return x*puissance(x,n-1);
}
int main(){
    int a = 0;
    cout << "breakpoint";
    a++;
    cout << a;
    cout << puissance(3,3);
}