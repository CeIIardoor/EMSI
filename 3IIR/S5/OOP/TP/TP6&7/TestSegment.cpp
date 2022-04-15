#include"Point.cpp"
#include<math.h>
using namespace std;

main()
{
Point p0=Point();
Point p1=Point(4,7);
Point p2=Point(2,4.8);
p1.afficher();
p2.afficher();
cout << Point::nbrPoints;
}

