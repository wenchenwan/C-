#include<iostream>
#include<fstream>

using namespace std;

class Person {
public:
	char m_Name[64];
	int m_Age;

};

void test01() {
	Person p;
	fstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
	}
	ifs.read((char*)&p,sizeof(ifs));
	cout << "����" << p.m_Name << " ���� " << p.m_Age << endl;
	
}
int main() {
	test01();
	return 0;
}