/*#include<iostream>

using namespace std;

class Building {

	friend void GoodGay(Building& building);//ȫ����Ԫ����
public:
	Building()
	{
		m_BedRoom = "����";
		m_SittingRoom = "����";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

void GoodGay(Building &building) {

	cout << "�û��ѵ�ȫ�ֺ������ڷ���" << building.m_SittingRoom << endl;
	cout << "�û��ѵ�ȫ�ֺ������ڷ���" << building.m_BedRoom << endl;

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