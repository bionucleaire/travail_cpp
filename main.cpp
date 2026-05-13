#include "draw.hpp"
#include "point.hpp"
#include "shapes.hpp"
#include <vector>
#include <iostream>
using namespace std;
int main() {
	
	// Define points in a vector

std::vector<Point> point = {
		Point(0, 0),
		Point(850, 0),
		Point(850, 850),
		Point(0, 850),
		Point(0, 0)
		
	};
std::vector<Point> pointss = {
		Point(0, 0),
		Point(100, 0),
		Point(100, 100),
		Point(0, 100),
		Point(0, 0)
		
	};
	
	// Draw the picture by connecting the points
	draw_picture(point);
	draw_picture(pointss);
	assert(pointss.area()==1000);
	assert(pointss.perimeter()==400);
	assert(point.perimeter()>0);
	assert(point.area()>0);
	assert(pointss.center()==Point(50,50));
	assert(pointss.equal(point)==0);

	
	Circle C(5, Point(0,0));
	Circle E(5, Point(1,0));
	Circle H(6,Point(3,0));
	if(not C.equals(E)){
		std::cout<< "not OK";
	}
	C.draw();
	E.draw();
	H.draw();
Circle c1(15.7, Point(1,1));
	Circle c2(4, Point(1,1));
	Circle c3(4, Point(0,0));
	assert(abs(c1.area() - 774.3711) <= 0.0001);
	assert(abs(c2.area() - 4*4*numbers::pi) <= 0.0001);
	assert(abs(c3.area() - 50.2654) <= 0.0001);
	assert(abs(c1.circumference() - 2*15.7*numbers::pi) <= 0.0001);
	assert(abs(c2.circumference() - 2*4*numbers::pi) <= 0.0001);
	assert(abs(c3.circumference() - 2*4*numbers::pi) <= 0.0001);
	c1.translate(Point(0,0));
	c2.translate(Point(5,5));
	assert(c1.center.x == Point(0,0).x && c1.center.y == Point(0,0).y);
	assert(c1.center.x == Point(5,5).x && c1.center.y == Point(5,5).y);
	c2.translate(Point(0,0));
	assert(c2.equals(c3));
	assert(c1.equals(c2) == false);
	assert(c3.equals(Circle(4, Point(5,5)))== false);
	c1.resize(2);
	c3.resize(0);
	c2.resize(-5);
	assert(abs(c1.radius - 2*15.7) <=0.0001);
	assert(abs(c2.radius - 4) <= 0.0001);
	assert(abs(c3.radius - 4) <= 0.0001);
	Triangle T1(Point(0,0),Point(100,0),Point(50,80));
	Triangle T2(Point(0,0),Point(1000,0),Point(500,800));
	Triangle T3(Point(55,32),Point(10,90),Point(550,80));

assert(T1.isIsoceles()==1);
assert(T2.isIsoceles()==0);
assert(T3.isIsoceles()==0);
assert(T1.isEquilateral()==0);
assert(T2.isEquilateral()==0);
assert(T3.isEquilateral()==0);

T1.draw();
T2.draw();
T3.draw();


	std::cout<<T1.perimeter();

	return 0;

}
