#include"Document.hpp"

int Document::c = 0;

Document::Document(){
    Document::c++;
    code = Document::c;
}

Document::Document(Document &d){
    this->code = d.code;
    this->titre = d.titre;
    this->c++;
}

Document::Document(string pTitre, float pPrix)
{
    c++;
    code = c;
    titre = pTitre;
    prix = pPrix;
}

void Document::solder(int p){
    prix -= prix*(p/100);
}

void Document::afficher(){
    cout << "Document : " << titre << " " << prix << endl;
}
