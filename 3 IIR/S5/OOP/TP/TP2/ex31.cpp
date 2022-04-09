#include <iostream>
#include <chrono>
#include <unistd.h>

using namespace std;


void permuterParAdr(int* a, int* b){
    *a = (*b + *a)-(*b = *a);
}
void permuterParRef(int& a, int& b){
    a = (b + a)-(b = a);
}

int main(){
    int n = 10, p = 20;
    cout << "permuter par valeur" << endl;
    cout << "avant permutation : n=" << n << " p="<< p << endl;
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    permuterParRef(n,p);
    cout << "apres permutation : n=" << n << " p="<< p << endl;
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;

    int q = 10, r = 20;
    cout << "permuter par ref" << endl;
    cout << "avant permutation : q=" << q << " r="<< r << endl;
    permuterParAdr(&q,&r);
    cout << "apres permutation : q=" << q << " r="<< r << endl;
    
    return 0;
}