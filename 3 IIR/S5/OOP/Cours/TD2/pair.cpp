#include <iostream>

using namespace std;

bool estPair(int n){
    return !(n%2);
}

int main(){
    estPair(8) ? cout << "pair" : cout << "impair";
    return 0;
}


