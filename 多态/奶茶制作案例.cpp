//#include<iostream>
//
//using namespace std;
//
//class Base {
//public:
//	//��ˮ
//	virtual void boiled() = 0;
//	//�ݲ�
//	virtual void Pao() = 0;
//	//װ��
//	virtual void Cup() = 0;
//	//���
//	virtual void Pack() = 0;
//
//	void Make() {
//		boiled();
//		Pao();
//		Cup();
//		Pack();
//	}
//
//};
//
//class Tea : public Base
//{
//public:
//	void boiled() {
//		cout << "���ˮ" << endl;
//	}
//	void Pao() {
//		cout << "�ݲ�" << endl;
//	}
//	void Cup() {
//		cout << "װ����" << endl;
//	}
//	void Pack() {
//		cout << "�����" << endl;
//	}
//
//};
//class MilkTea : public Base
//{
//public:
//	void boiled() {
//		cout << "���ˮ+ţ��" << endl;
//	}
//	void Pao() {
//		cout << "�ݲ�+���ţ��" << endl;
//	}
//	void Cup() {
//		cout << "װ����" << endl;
//	}
//	void Pack() {
//		cout << "����̲�" << endl;
//	}
//
//};
//
//
//void test01() {
//	Base* base = new Tea;
//	base->Make();
//	delete base;
//	base = new MilkTea;
//	base->Make();
//	delete base;
//	cout << "------------------------------------" << endl;
//	MilkTea milke;
//	Base& base1 = milke;
//	base1.Make();
//}
//
//int main() {
//
//	test01();
//	return 0;
//}