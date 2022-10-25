#include<stdio.h>
#include<stdlib.h> 
#include<conio.h> 

quatrifier(int n){
    if (n==1) return n="4/4";
    if (n==2) return "(4+4)/4";
    if (n==3) return "4-4/4";
    if (n>=3) return printf("%d = %d * 4 + %d", n, quatrifier(n/4), quatrifier(n%4));

}

int main(){
    int a = 3;
    quatrifier(a);
    return 1;
}


