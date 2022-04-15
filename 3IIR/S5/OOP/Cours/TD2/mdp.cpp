#include <iostream>

using namespace std;

bool maxreps(string s){
    int count = 1;
    for(int i=0; s[i]!='\0'; i++){
        for (int j=i+1; s[j]!='\0'; j++) {
            if (s[i] == s[j]) count++;
        }
        if(count > 2) return false;
    }
    return true;
}
bool hasNonAlpha(string s){
    for(int i=0;s[i]!='\0';i++){
        if (!isalpha(s[i])) return true;
    }
    return false;
}
float upperCasePercent(string s){
    int count = 0;
    for(int i=0;s[i]!=0;i++){
        if (s[i] >= 'A' && s[i] <= 'Z') count++; //isUpper()
    }
    return (float)count/s.size();
}

int forcemdp(string s){
    int f = 0;
    if (s.size() > 9) f++;
    if (maxreps(s)) f++;
    if (hasNonAlpha(s)) f++;
    if (upperCasePercent(s) >= 0.2) f++;
    return f;
}
void printForceMDP(string s){
    switch (forcemdp(s))
    {
    case 1:
        cout << "Faible";
        break;
    case 2:
        cout << "Moyen";
        break;
    case 3:
        cout << "Fort";
        break;
    case 4:
        cout << "Tres fort";
        break;
    
    default:
        cout << "Saisir un nouveau mdp";
    }
}

int main(){
    string s;
    getline(cin, s);
    // cout << "size " << (s.size() > 9) << endl;
    // cout << "maxrep " << (maxreps(s)) << endl;
    // cout << "nonalpha " << (hasNonAlpha(s)) << endl;
    // cout << "uppercasepercent " << upperCasePercent(s);
    printForceMDP(s);
    return 0;
}
