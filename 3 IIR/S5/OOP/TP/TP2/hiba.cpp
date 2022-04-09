#include<iostream>
using namespace std;
void fargspardefaut(int a, int b=13){
    cout << a <<" "<< b ;
}
main(){
    fargspardefaut(5,10);
    fargspardefaut(5);
}