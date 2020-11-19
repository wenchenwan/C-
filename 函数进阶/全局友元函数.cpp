/*#include<iostream>

using namespace std;

class Building {

	friend void GoodGay(Building& building);//全局友元函数
public:
	Building()
	{
		m_BedRoom = "卧室";
		m_SittingRoom = "客厅";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

void GoodGay(Building &building) {

	cout << "好基友的全局函数正在访问" << building.m_SittingRoom << endl;
	cout << "好基友的全局函数正在访问" << building.m_BedRoom << endl;

}

void test01()
{
	Building building;
	GoodGay(building);
}

int main() {

	test01();
	system("pause");
	return 0;
}*/