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
	cout << "Բ������Ϊ" << name << endl;
	cout << "Բ�İ뾶Ϊ" << r << endl;
	return ;
}
Circle::Circle(string Name,double R=10) {
	r = R;
	name = Name;
}

Circle::~Circle(){

}