#include<stdio.h>
#include<string.h>

int main(){

char teststring[255];

int p = 0;

gets(teststring);
int i;

for (i = 0; i < strlen(teststring); i++) {
    if (teststring[i] == '(') {
        p++;
    } else if (teststring[i] == ')') {
        p--;
    }
}

if (p == 0) {
    printf("les parentheses sont bien equilibrees");
}
if (p > 0) {
    printf("il manque %d parentheses fermantes", p);
}
if (p < 0) {
    printf("il manque %d parentheses ouvrantes", -p);
}

return 0;

}