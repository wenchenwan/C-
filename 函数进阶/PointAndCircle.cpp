#include "PointAndCircle.h"
#include<iostream>
#include<math.h>

using namespace std;
double num;

Point::Point() {

}
Point::Point(double x,double y) {
	m_X = x;
	m_Y = y;
}

Point::Point(const Point& p) {
	//¿½±´¹¹Ôìº¯Êý
	m_X = p.m_X;
	m_Y = p.m_Y;
}
Point::~Point() {

}
void Point::Set_m_X(double x) {
	m_X = x;
	return;
}
void Point::Set_m_Y(double y) {
	m_Y = y;
	return;
}

double Point::Get_m_X() {
	return m_X;
}

double Point::Get_m_Y() {
	return m_Y;
}

double Point::Distance(Point *point) {
	 num = (pow((Get_m_X() - point->Get_m_X()),2) + pow((Get_m_Y() - point->Get_m_Y()),2));
	 num = sqrt(num);
	//num = this->Get_m_X();
	//num = 0;
	return num;
}




PointAndCircle::PointAndCircle() {

}


PointAndCircle::PointAndCircle(double r, Point point) {
	m_R = r;
	m_Center = point;
}
PointAndCircle::~PointAndCircle() {

}
void PointAndCircle::Set_m_R(double r) {
	m_R = r;
	return;
}

double PointAndCircle::Get_m_R() {
	return m_R;
}

Point PointAndCircle::Get_m_Center(){
	return m_Center;
}

void PointAndCircle::Set_m_Center(Point point) {
	m_Center = point;
}