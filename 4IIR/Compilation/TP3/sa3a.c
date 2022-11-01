#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    //verify if the string is a valid time hh:mm
    char ssa3a[255];
    gets(ssa3a);
    int i = 0;
    int etat = 0;

while(1){
    switch(etat){
        case 0:
            if(ssa3a[i] == '0' || ssa3a[i] == '1' ){
                etat = 11;
            } 
            else if(ssa3a[i] == '2'){
                etat = 12;
            } else {
                printf("invalid time");exit(1);
            }
            break;
        case 11:
           
            if(ssa3a[i] >= '0' && ssa3a[i] <= '9' ){
                etat = 2;
            } else {
                printf("invalid time");exit(1);
            }
            
            break;
        case 12:
            if(ssa3a[i] >= '0' && ssa3a[i] <= '3' ){
                etat = 2;
            } else {
                printf("invalid time");exit(1);
            }
            break;
        case 2:
            if(ssa3a[i] == ':'){
                etat = 3;
            } else {
                printf("invalid time");exit(1);
            }
            break;
        case 3:
            if(ssa3a[i] >= '0' && ssa3a[i] <= '5' ){
                etat = 4;
            } else {
                printf("invalid time");exit(1);
            }
            break;
        case 4:
            if(ssa3a[i] >= '0' && ssa3a[i] <= '9' ){
                etat = 5;
            } else {
                printf("invalid time");exit(1);
            }
            break;
        case 5:
            if(i==strlen(ssa3a)){
                printf("valid time");
                exit(1);
            } else {
                printf("invalid time");exit(1);
            }
    }
    i++;
}
return 0;
}
