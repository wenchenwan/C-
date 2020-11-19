/*#include<iostream>

using namespace std;





class Building {

	friend class GoodGay;
public:
	Building();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

class GoodGay {


public:
	Building* building;

	GoodGay();
	void Visit();//参观函数，访问building属性


};


void test01()
{
	GoodGay gg;
	gg.Visit();
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
}*/