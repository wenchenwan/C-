/*#include<iostream>

using namespace std;

class Building;

class GoodGay {


public:
	Building* building;

	GoodGay();
	void Visit();//参观函数，访问building属性的所有属性
	void Visit2();//只能访问building的共有变量

};

class Building {

	friend void GoodGay::Visit();
public:
	Building();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};




void test01()
{
	GoodGay gg;
	gg.Visit();
	gg.Visit2();
}

int main() {

	test01();
	system("pause");
	return 0;
}

GoodGay::GoodGay() {

	building = new Building;
}

void GoodGay::Visit() {

	cout << "好基友的全局函数正在访问" << building->m_SittingRoom << endl;
	cout << "好基友的全局函数正在访问" << building->m_BedRoom << endl;
}

Building::Building() {

	m_BedRoom = "卧室";
	m_SittingRoom = "客厅";
}

void GoodGay::Visit2() {
	cout << "好基友的全局函数正在访问" << building->m_SittingRoom << endl;
	//cout << "好基友的全局函数正在访问" << building->m_BedRoom << endl;
}*/