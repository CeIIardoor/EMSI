#include<iostream>
#include<iomanip>
#include <unistd.h>
#include <conio.h>

#include"Marchandise.cpp"
#include"Cargaison.cpp"
#include"ST.cpp"
#include"Client.cpp"
#include"Admin.cpp"
 
using namespace std;

void menu_client(Client ClientST){
	int choix;
	Marchandise m1 = Marchandise(1001,11);
    Marchandise m2 = Marchandise(1002,12);
    Marchandise m3 = Marchandise(1003,13);
    Marchandise m4 = Marchandise(1004,14);
    Marchandise m5 = Marchandise(1005,15);
	Marchandise m6 = Marchandise(1004,16);
    Marchandise m7 = Marchandise(3000,17);
	Marchandise m8 = Marchandise(5000,18);
    Marchandise m9 = Marchandise(1200,19);
	
    CargaisonR CR1 = CargaisonR(1100);
    CargaisonR CR2 = CargaisonR(1200);
    CargaisonR CR3 = CargaisonR(2300);
    CargaisonA CA1 = CargaisonA(10100);
	
	///////////////////////////////////////////
	CR1.m[1] = m1;
    CR1.m[2] = m2;
    CR1.m[3] = m3;

    CA1.m[1] = m4;
    CA1.m[2] = m5;

	CR2.m[1] = m6;
    CR2.m[2] = m7;

	CR3.m[1] = m1;
    CR3.m[2] = m2;
	///////////////////////////////////////////
	ClientST.c[1] = CA1;
	ClientST.c[2] = CR1;
	ClientST.c[3] = CR2;
	ClientST.c[4] = CR3;

	menuclient:

    system("cls");
    cout<<"-----------------------------------------------"<<endl;
    cout<<"|||||| Menu Client : " << ClientST.getcin() << "-" << ClientST.getnom() << "-" << ClientST.gettel() << "||||" << endl;
    cout<<"1.Consulter une Cargaison"<<endl;
    cout<<"2.Consulter une marchandise"<<endl;
    cout<<"3.Consulter toutes les Marchandises que contient une Cargaison"<<endl;
    cout<<"4.Consulter toutes les Cargaisons"<<endl;
    cout<<"5.Consulter le poids total d'une cargaison"<<endl;
    cout<<"6.Consulter le cout de transport d'une cargaison"<<endl;
    cout<<"7.Trier les cargaisons"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Veuillez tapez votre choix: ";
    cin>>choix;
	
    if(choix==1){
		system("cls");
		int ref;
		cout << "Saisir la ref de la Cargaison a consulter: " << endl;
		cin >> ref;
		ClientST.getCargaison(ref).afficher();
		for (int i = 0; i < 20; i++)
		{
			ClientST.getCargaison(ref).m[i].afficher();
		}
		getch();
		goto menuclient;
	}
	if(choix==2){
		system("cls");
		int num;
		cout << "Saisir le num de la marchandise a consulter: " << endl;
		cin >> num;

		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if(ClientST.c[i].m[j].numero == num){
					ClientST.c[i].m[j].afficher();
				}
			}
		}
		getch();
		goto menuclient;
	}

	if(choix==3){
		system("cls");
		int ref;
		cout << "Saisir la ref de la Cargaison a consulter: " << endl;
		cin >> ref;

		for (int i = 0; i < 20; i++)
		{
			if(ClientST.c[i].reference == ref){
				ClientST.c[i].afficher();
				ClientST.c[i].affichertoutMarchandise();
			}
		}
		getch();
		goto menuclient;
	}
	if(choix==4){
		system("cls");
		ClientST.afficherToutesCargaisons();
		getch();
		goto menuclient;
	}
	if(choix==5){
		system("cls");
		int ref;
		cout << "Saisir la ref de la Cargaison a consulter: " << endl;
		cin >> ref;
		cout << "Poids total Carg " << ref << " : ";
		cout << ClientST.getCargaison(ref).getpoidstotal();
		getch();
		goto menuclient;
	}
	if(choix==6){
		system("cls");
		int ref;
		cout << "Saisir la ref de la Cargaison a consulter: " << endl;
		cin >> ref;
		cout << "Cout transport Carg " << ref << " : ";
		cout << ClientST.getCargaison(ref).couT();
		getch();
		goto menuclient;
	}
	if(choix==7){
		system("cls");
		cout << "Avant tri: " << endl;
        ClientST.afficherToutesCargaisons();
		cout << "Apres tri: " << endl;
		ClientST.trierCargaison();
        ClientST.afficherToutesCargaisons();
		getch();
		goto menuclient;
	}

}

void menu_admin(Admin AdminST){
	
	int choix;
	menuadmin:

    system("cls");
    cout<<"-----------------------------------------------"<<endl;
    cout<<"|||||| Menu Admin : " << AdminST.getcin() << "-" << AdminST.getnom() << "-" << AdminST.gettel() << "||||" << endl;
    cout<<"1.Ajouter une Cargaison"<<endl;
    cout<<"2.ajouter une Marchandise a une Cargaison"<<endl;
    cout<<"3.Consulter toutes les Cargaisons"<<endl;
    cout<<"4.Consulter toutes les Marchandise qui contient une Cargaison"<<endl;
    cout<<"5.Supprimer une Marchandise d'une Cargaison donnee"<<endl;
    cout<<"6.Supprimer une Cargaison"<<endl;
    cout<<"7.Modifier les informations d'une Marchandise donnee"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Veuillez tapez votre choix: ";
    cin>>choix;
	
    if(choix==1){
		int distance;
		string type;
		system("cls");
		cout<<"Saisir le Type: " << endl;
		cin>>type;
		cout<<"Saisir la Distance: " << endl;
		cin>>distance;
		Cargaison C = Cargaison(distance,type);
		C.afficher();
		AdminST.ajouterCargaison(C.getreference(),C);
		cout<<"Cargaison ajoutee"<<endl;
		getch();
		goto menuadmin;
	}
	if(choix==2){
		int ref;
		float poids,volume;
		system("cls");
		cout<<"Saisir le Poids: " << endl;
		cin>>poids;
		cout<<"Saisir la Volume: " << endl;
		cin>>volume;
		cout<<"Saisir la ref de la Cargaison: " << endl;
		cin >> ref;
		Marchandise M = Marchandise(poids,volume);
		M.afficher();
		AdminST.ajouterMarchandiseCarg(AdminST.getCargaison(ref).getreference(),M.getnumero(),M);
		cout<<"Marchandise ajoutee"<<endl;
		getch();
		goto menuadmin;
	}
	if(choix==3){
		system("cls");
		AdminST.afficherToutesCargaisons();
		getch();
		goto menuadmin;
	}
	if(choix==4){
		system("cls");
		int ref;
		cout << "Saisir la ref de la Cargaison : " << endl;
		cin >> ref;
		AdminST.getCargaison(ref).afficher();
		AdminST.afficherToutesMarchandises(ref);
		getch();
		goto menuadmin;
	}
	if(choix==5){
		system("cls");
		int ref,num;
		cout << "Saisir la ref de la Cargaison : " << endl;
		cin >> ref;
		cout << "Saisir le num de la Marchandise a supprimer"<< endl;
		cin >> num;
		AdminST.c[ref].m[num] = Marchandise();
		AdminST.afficherToutesMarchandises(ref);
		cout << "Machandise supprimee";
		getch();
		goto menuadmin;
	}
	if(choix==6){
		system("cls");
		int ref;
		cout << "Saisir la ref de la Cargaison a supprimer : " << endl;
		cin >> ref;
		AdminST.c[ref] = Cargaison();
		AdminST.afficherToutesCargaisons();
		cout << "Cargaison supprimee";
		getch();
		goto menuadmin;
	}
	if(choix==7){
		system("cls");
		int num, needle;
		float p,v;

		cout << "Saisir le numero de la marchadise a supprimer : " << endl;
		cin >> num;
		cout << "Saisir le nouveau poids"<< endl;
		cin >> p;
		cout << "Saisir le nouveau volume"<< endl;
		cin >> v;
		for (int i = 1; i < 20; i++)
		{
			if(AdminST.c[i].getmarch(num).getnumero() == num){
				needle = i;
				AdminST.c[i].m[num].numero = num;
				AdminST.c[i].m[num].poids = p;
				AdminST.c[i].m[num].volume = v;
			}
		}
		AdminST.c[needle].m[num].afficher();
		cout << "Marchandise Modifiee";
		getch();
		goto menuadmin;
	}
}

int main(){
	std::cout.precision(12);
	int x = 0;
	string nom, cin, tel;
	system("cls");
    cout<<"------------Menu Principal-----------------------------------"<<endl;
    cout<<"1. Admin"<<endl;
    cout<<"2. Client"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Veuillez tapez votre choix: "<< endl;
    std::cin >> x;
	if(x == 1){
		system("cls");
		cout << "Entrer votre nom"<< endl;
		std::cin >> nom;
		cout << "Entrer votre cin"<< endl;
		std::cin >> cin;
		cout << "Entrer votre tel"<< endl;
		std::cin >> tel;
		Admin AdminST = Admin(cin,nom,tel);
		menu_admin(AdminST);
	}
	if(x == 2){
		system("cls");
		cout << "Entrer votre nom"<< endl;
		std::cin >> nom;
		cout << "Entrer votre cin"<< endl;
		std::cin >> cin;
		cout << "Entrer votre tel"<< endl;
		std::cin >> tel;
		Client ClientST = Client(cin,nom,tel);
		menu_client(ClientST);
	}

	return 0;
}