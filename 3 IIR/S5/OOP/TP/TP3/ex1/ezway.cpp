  
#include <bits/stdc++.h> 
using namespace std; 

class Salutation 
{ 
    protected: 
    string name; 
    int age; 
    
    Salutation(string *pName,int *pAge){
        this->name = pName;
        this->age = pAge;
    };

    public:
    void printname(){ 
        cout << "Geekname is: " << name;  
    }; 
      
    void printage() 
    { 
        cout << "age : " << age; 
    };
}; 


int main() { 
      
    Salutation Ahmed = new Salutation("Ahmed Skefkef"); 

    Ahmed.printname(); 
    
    cout << endl; 
      
    Ahmed->printage(); 
    return 0; 
} 