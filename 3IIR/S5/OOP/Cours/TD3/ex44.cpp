#include <iostream>
#include <vector>
using namespace std;

vector<int> tableau_des_carres(int n) {
        vector <int> Tab(n);
        for(int &var : Tab)
        {
            cin >> var;
           var *= var;
        }
        return Tab;
    }

main(){
    int n;
    cin >> n;
    vector <int> T( tableau_des_carres(n));
    for (int i = 0; i < T.size(); i++)
    {
        cout << T[i] << "-";
    }
}


