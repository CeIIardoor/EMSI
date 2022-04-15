#include <iostream>

using namespace std;

float sh(int n){
    float f;
    for (int i=1;i<=n;i++){
        f += 1/(float)i;
    }
    return f;
}

int main(){
    cout << sh(3);
    return 0;
}
