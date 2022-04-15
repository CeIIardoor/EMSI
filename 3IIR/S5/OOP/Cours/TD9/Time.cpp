#include<iostream>
using namespace std;

class Time{
	double Heure;
	double minute;
	public :
	Time(double Heure, double minute){
		this->Heure=Heure;
		this->minute=minute;
	}
	Time(){
	
	}
Time operator+(Time const &Obj1 ){
	
	Time Obj;
	Obj.Heure=Obj1.Heure+this->Heure;
	Obj.minute=Obj1.minute+this->minute;
	return Obj;
}
bool operator==(Time const &Obj){
	if(this->Heure==Obj.Heure && this->minute==Obj.minute)
	return true;
	return false;
}
friend ostream &operator<<(ostream & sortie, Time &Obj);
friend istream &operator>>(istream & entHeure, Time &Obj);
/*void afficher(){
	cout<<Heure<<"+"<<minute<<"i"<<endl;
}
bool operator!=(Time const &Obj){
 return !(Obj==*this);
}*/
};

ostream &operator<<(ostream & sortie, Time &Obj){
	sortie<<Obj.Heure<<"+"<<Obj.minute<<"i"<<endl;
	return sortie;
}
istream &operator>>(istream & entHeure, Time &Obj){
	cout<<"entrer partie Heureel :";
	entHeure>>Obj.Heure;
	cout<<"entrer partie minute :";
	entHeure>>Obj.minute;
	return entHeure;
}
main(){
	Time A(3,2),B;
	cin>>B;
	Time C=A+B;
	
cout<<C;

	if(A==B)
	cout<<"egal";
	else
	cout<<"non";
}
