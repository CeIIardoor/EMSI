#include <iostream>

using namespace std;

int len(char ch[30]){
    for (int i=0;i<30;i++) if (ch[i]=='\0') return i;
}

void copy(char ch1[30],char ch2[30]){
    for (int i=0;ch1[i]!='\0';i++){
        ch2[i] = ch1[i];
    }
    cout << ch2 << endl;
}

void concat(char ch1[30],char ch2[30]){
    char ch3[60];
    for (int i=0;ch1[i]!='\0';i++){
        ch3[i] = ch1[i];
    }
    for (int i=0;ch2[i]!='\0';i++){
        ch3[i+len(ch1)] = ch2[i];
    }
    cout << ch3 << endl;
}

int main(){
     char ch1[30] = "Bonjour";
     char ch2[30] = "Salam";
    cout << len(ch1) << endl;
    copy(ch1,ch2);
    concat(ch1,ch2);
}