//include classes
#include "Document.cpp"
#include "CollectionLivre.cpp"
//main funtion with instantiation of classes
int main()
{
    //instantiation of classes
    Document d1("titre1", 10);
    Document d2("titre2", 20);

    Livre l1("auteur1", 100, d1);
    Livre l2("auteur2", 200, d2);
    Livre l3("auteur3", 300, d1);

    CollectionLivre c1(10);
    c1.ajouterLivre(l1);
 
    c1.afficher();
    return 0;
}

