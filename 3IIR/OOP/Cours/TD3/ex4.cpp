#include <iostream>

using namespace std;


main(){
    int *T, *Tcarre, *p, *q;

    int n;
    cout << "Saisir la taille du tableau" << endl;
    cin >> n;

    T = new int[n];

    cout << "Remplir le tableau";
    for(p = T; p < T+n; p++){
        cin >> *p;
    }

    Tcarre = new int[n];
    q= Tcarre;

    for (p = T; p < T+n; p++)
    {
        *q = (*p)*(*p);
        q++;
    }
    delete T;

    for (q = Tcarre; q < Tcarre+n; q++)
    {
        cout << *q << '-';
    }
    delete Tcarre;
}


