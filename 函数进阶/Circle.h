#pragma once
#include<iostream>
#include<string.h>

using namespace std;
class Circle
{
private:
	double r;
	string name;
public:
	Circle(string ,double R);
	double CircleArea();
	double CirDistance();
	void Show();
	void SetR(double r);
	 ~Circle();
protected:

};

