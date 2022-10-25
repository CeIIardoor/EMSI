#include<stdio.h>
#include<string.h>

// int main(){
//     char teststring[255];
//     gets(teststring);
//     int i = 0;
//     int nba = 0;

//     for (i = 0; i < strlen(teststring); i++) {
//         (teststring[i] == 'a') ? nba++ : exit(1);
//     }
//     printf("le nombre de a est");
//     (nba % 2) ? printf("\033[1;31mimpair\033[0m") : printf("\033[1;31mpair\033[0m");
//     printf("");

//     return 0;
// }

int main(){
    int etat = 0;
    char c;
    while ((c = getchar()) != EOF) {
        switch (etat) {
            case 0:
                if (c == 'a') {
                    etat = 1;
                }
                break;
            case 1:
                if (c == 'a') {
                    etat = 1;
                } else {
                    etat = 0;
                }
                break;
        }
    }
}