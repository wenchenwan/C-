#pragma once
class Point
{
public:
	Point();
	Point(double x,double y);
	Point(const Point& p);//¿½±´¹¹Ôìº¯Êý
	~Point();
	void Set_m_X(double x);
	void Set_m_Y(double y);
	double Get_m_X();
	double Get_m_Y();

	double Distance(Point *point);

private:
	double m_X, m_Y;
};
class PointAndCircle
{
public:
	PointAndCircle();
	PointAndCircle(double r,Point point);
	~PointAndCircle();
	double Get_m_R();
	void Set_m_R(double r);
	Point Get_m_Center();
	void Set_m_Center(Point point);
private:
	double m_R;
	Point m_Center;

};

