#include<iostream>
#include <iomanip> 

#include"Marchandise.cpp"
#include"Cargaison.cpp"
#include"ST.cpp"
#include"Client.cpp"
#include"Admin.cpp"
 
using namespace std;
 

int main(){
	std::cout.precision(12);
	system("cls");
	system("color a");
	
    Marchandise m1 = Marchandise(1001,11);
    Marchandise m2 = Marchandise(1002,12);
    Marchandise m3 = Marchandise(1003,13);
    Marchandise m4 = Marchandise(1004,14);
    Marchandise m5 = Marchandise(1005,15);
 
    CargaisonR CR1 = CargaisonR(1100);
    CargaisonR CR2 = CargaisonR(1200);
    CargaisonR CR3 = CargaisonR(2300);
    CargaisonA CA1 = CargaisonA(10100);
	
	///////////////////////////////////////////
	CR1.ajoutMarchandise(m1.getnumero(),m1);
    CR1.ajoutMarchandise(m2.getnumero(),m2);
    CR1.ajoutMarchandise(m3.getnumero(),m3);

    CA1.ajoutMarchandise(m4.getnumero(),m4);
    CA1.ajoutMarchandise(m5.getnumero(),m5);
	
	///////////////////////////////////////////
	Admin AdminST=Admin("A123","Admin1","06111111");
    AdminST.ajouterCargaison(CA1.getreference(),CA1);
	AdminST.ajouterCargaison(CR1.getreference(),CR1);
	AdminST.ajouterCargaison(CR2.getreference(),CR2);
	AdminST.ajouterCargaison(CR3.getreference(),CR3);
	///////////////////////////////////////////

	
	cout << "---------------INFOS CR1---------------"<< endl;
	cout << "Poids Total : " << CR1.getpoidstotal() << endl;
	cout << "Volume Total : " << CR1.getvolumetotal() << endl;
	cout <<  "type : " << CR1.gettype() << endl;
	cout << "cout : " << CR1.couTR() << endl;
	CR1.consultertoutMarchandise();
	cout << "---------------------------------------"<< endl;
	///////////////////////////////////////////
	cout << "-----------INFOS m3 MODIFIEE-----------"<< endl;
	m3.afficher();
	m3.setpoids(800);
	m3.setvolume(20);
	m3.afficher();
	cout << "---------------------------------------"<< endl;
	///////////////////////////////////////////
	cout << "----------SUPPR m2 Depuis CR1----------" << endl;
	cout << "_________ Avant _________" << endl;
	cout << "Poids Total : " << CR1.getpoidstotal() << endl;
	cout << "Volume Total : " << CR1.getvolumetotal() << endl;
	cout << "type : " << CR1.gettype() << endl;
	cout << "cout : " << CR1.couTR() << endl;
	CR1.supprimerMarchandise(m2.getnumero());

	cout << "_________ Apres _________" << endl;
	cout << "Poids Total : " << CR1.getpoidstotal() << endl;
	cout << "Volume Total : " << CR1.getvolumetotal() << endl;
	cout << "type : " << CR1.gettype() << endl;
	cout << "cout : " << CR1.couTR() << endl;
	CR1.consultertoutMarchandise();
	cout << "---------------------------------------"<< endl;
	///////////////////////////////////////////
	cout << "---------------SUPPR CR1---------------" << endl;
	cout << "_________ Avant _________" << endl;
	AdminST.afficherToutesCargaisons();
	cout << "_________ Apres _________" << endl;
	AdminST.supprimerCargaison(CR1.getreference());
	AdminST.afficherToutesCargaisons();
	cout << "---------------------------------------"<< endl;
	cout << "---------------ClientST----------------"<< endl;
	cout << "---------------------------------------"<< endl;
	///////////////////////////////////////////
	Client ClientST=Client("C123","Yassine","0610111213");

	Marchandise m6 = Marchandise(1004,16);
    Marchandise m7 = Marchandise(3000,17);
	CR2.ajoutMarchandise(1,m6);
    CR2.ajoutMarchandise(2,m7);
	Marchandise m8 = Marchandise(5000,18);
    Marchandise m9 = Marchandise(1200,19);
	CR3.ajoutMarchandise(1,m1);
    CR3.ajoutMarchandise(2,m2);


	ClientST.ajouterCargaison(1,CA1);
	ClientST.ajouterCargaison(2,CR1);
	ClientST.ajouterCargaison(3,CR2);
	ClientST.ajouterCargaison(4,CR3);

	///////////////////////////////////////////
	cout << "--------------Infos Cargs--------------" << endl;
	ClientST.afficherToutesCargaisons();
	cout << "---------------------------------------"<< endl;

	cout << "-----------Infos March CA1-------------" << endl;
	ClientST.getCargaison(CA1.getreference()).consultertoutMarchandise();
	cout << "---------------------------------------"<< endl;

	cout << "-----------Poids Total CR1-------------" << endl;
	cout << ClientST.getCargaison(CR1.getreference()).getpoidstotal() << endl;
	cout << "---------------------------------------"<< endl;

	cout << "-----------Cout Transp CR1-------------" << endl;
	cout << ClientST.getCargaison(CR1.getreference()).couT() << endl;
	cout << "---------------------------------------"<< endl;

	cout << "--------------Tri ClientST-------------" << endl;
	cout << "CA1 : " <<CA1.couT() << endl;
	cout << "CR1 : " <<CR1.couT() << endl;
	cout << "CR2 : " <<CR2.couT() << endl;
	cout << "CR3 : " <<CR3.couT() << endl;
	ClientST.afficherToutesCargaisons();
	cout << "_________ Apres Tri_________" << endl;
	ClientST.trierCargaison();
	ClientST.afficherToutesCargaisons();
	cout << "---------------------------------------"<< endl;



	return 0;
}