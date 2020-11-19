#include "Circle.h"
#include<iostream>

const double PI = 3.1415926;

double Circle::CircleArea() {
	return PI * r * r;
}

double Circle::CirDistance() {
	return 2 * PI * r;
}
void Circle::SetR(double a) {
	r = a;
	return ;
}

void Circle::Show() {
	cout << "圆的名称为" << name << endl;
	cout << "圆的半径为" << r << endl;
	return ;
}
Circle::Circle(string Name,double R=10) {
	r = R;
	name = Name;
}

Circle::~Circle(){

}