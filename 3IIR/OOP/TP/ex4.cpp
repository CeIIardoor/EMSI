// class Point with attributes : int x and int y, contructor(x,y) throw exception1 eq if x or y are equal, throw exception2 if only one of x or y is given to constructor, throw exception3 if x and y are not given
#include <iostream>
#include <string>
#include <exception>
using namespace std;


class exception1 : public exception {
public:
    const char* what() const throw() {
        return "x and y are equal";
    }
};

class exception2 : public exception {
public:
    const char* what() const throw() {
        return "only one of x or y is given";
    }
};

class exception3 : public exception {
    public:
    const char* what() const throw() {
        return "x and y are not given";
    }
};

class Point {
public:
    int x,y;
    Point(){
        throw exception3();
    };
    Point(int x){
        throw exception2();
    };
    Point(int x, int y){
        if (x == y)
            throw exception1();
    };
};

int main(){
    try {
        Point p1(1,2);
        Point p2(1);
        Point p3;
    }
    catch (exception1 e) {
        cout << e.what() << endl;
    }
    catch (exception2 e) {
        cout << e.what() << endl;
    }
    catch (exception3 e) {
        cout << e.what() << endl;
    }
    return 0;
}