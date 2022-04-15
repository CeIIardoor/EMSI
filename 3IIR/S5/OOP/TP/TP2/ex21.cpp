#include <iostream>

using namespace std;

bool estPair(int n) { return (n%2) ? false : true; }

int main(){
    int n;
    cin >> n;
    cout  << estPair(n);
    return 0;
}