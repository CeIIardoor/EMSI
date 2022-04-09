#include"Point.hpp"

int Point::nbrPoints=0;

Point::Point(){
	abscisse=0;
	ordonnee=0;
	nbrPoints++;
}
Point::Point(float abscisse,float ordonnee){
	this->abscisse=abscisse;
	this->ordonnee=ordonnee;
	nbrPoints++;
}
Point::Point(const Point &p){
	this->abscisse=p.abscisse;
	this->ordonnee=p.ordonnee;
	nbrPoints++;
}
Point::~Point(){
	std::cout<<"destruction de l'objet"<<this<<endl;
}
float Point::getAbscisse(){
	return abscisse;
}
float Point::getOrdonnee(){
	return ordonnee;
}
void Point::setAbscisse( float abs){
	abscisse=abs;
}
void Point::setOrdonnee(float ord){
	ordonnee=ord;
}
void Point::afficher(){
	std::cout<<abscisse<<" "<<ordonnee<<endl;
}
void Point::deplacer(float dAbs,float dOrd){
	abscisse += dAbs;
	ordonnee += dOrd;
}
