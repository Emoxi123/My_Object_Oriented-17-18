#include <iostream>
using namespace std;
 

 
class Point{
    double x_, y_;
public:
    Point(double x, double y)
        : x_(x), y_(y) {}
 
    double get_x(){return x_;}
    double get_y(){return y_;}
    Point& set_x(double x){
        x_ = x;
        return *this;
    }
    Point& set_y(double y){
        y_ = y;
        return *this;
    }
 
    void print() const{
        cout << "Point(" << x_ << "," << y_ << ")" << endl;
    }
 
    Point& add(const Point& other){
        x_ += other.x_;
        y_ += other.y_;
        return *this;
    }
 
    Point& sub(const Point& other){
        x_ -= other.x_;
        y_ -= other.y_;
        return *this;
    }
 
    Point operator+= (const Point& other) {
        add(other);
        return *this;
    }
};
 
Point operator+(const Point& p1, const Point& p2)
{
    Point result(p1.get_x(), p1.get_y());
    return result.add(p2);
}
 
Point operator-(const Point& p1, const Point& p2)
{
    Point result(p1.get_x(), p1.get_y());
    return result.sub(p2);
}
Point operator*(double a, const Point& p){
		Point result(p.get_x(), p.get_y());
		result*= a;
		return result;
	}
 
	ostream& operator<<(ostream& out, const Point& p){
		out<< "Point(" << p.get_x() << "," << p.get_y() << ")";
		return out;
	}


int main(int argc, char *argv[])
{
    Point p(0,0);
    (p.set_x(1)).set_y(2);
    p.print();

		
	
		cout << p << p1 << p2 << endl;


    return 0;
}
