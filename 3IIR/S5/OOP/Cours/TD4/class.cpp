#include <iostream>
#include <vector>
class Point {       
    public:             
        float x;       
        float y;
    public: 
        void init(float pX,float pY){
            x = pX;
            y = pY;
        }
        void deplace(float pX,float pY){
            x += pX;
            y += pY;
        }
        void print(){
            std::cout << "x : " << x << " y : " << y;
        }
    };
int main(){
    Point p;
    p.init(3,4);
    p.deplace(1,2);
    p.print();

    std::vector<Point> Points;
    for(int i=0; i<20;i++){
        Points[i].init(std::rand() % 100,std::rand() % 100);  
    }
    Points.push_back(p);

    for (Point var: Points){
        var.print();
    }
    
}

