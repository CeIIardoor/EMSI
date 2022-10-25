#include<stdio.h>

int main(){
    union {
        char c;
        int i;
    } u;

    u.i = 65;

    printf("%c", u.c);

    return 0;
}