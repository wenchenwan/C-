/*#include<iostream>

using namespace std;

class Building;

class GoodGay {


public:
	Building* building;

	GoodGay();
	void Visit();//�ιۺ���������building���Ե���������
	void Visit2();//ֻ�ܷ���building�Ĺ��б���

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

	cout << "�û��ѵ�ȫ�ֺ������ڷ���" << building->m_SittingRoom << endl;
	cout << "�û��ѵ�ȫ�ֺ������ڷ���" << building->m_BedRoom << endl;
}

Building::Building() {

	m_BedRoom = "����";
	m_SittingRoom = "����";
}

void GoodGay::Visit2() {
	cout << "�û��ѵ�ȫ�ֺ������ڷ���" << building->m_SittingRoom << endl;
	//cout << "�û��ѵ�ȫ�ֺ������ڷ���" << building->m_BedRoom << endl;
}*/