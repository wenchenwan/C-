//#include<iostream>
//
//using namespace std;
////�ӷ���������
//
//
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//
//	//void operator<<(Person &person) { //p.operator<<(p1)
//		//operator<<(cout)   p << cout
//		//һ�㲻��ʹ�ó�Ա�����������������������Ϊ����ʵ��cout�����
//	//}
//
//	int m_A;
//	int m_B;
//private:
//	int m_C =0;
//};
//
////ֻ������ȫ�ֺ������������������
//
//ostream &operator<<(ostream &cout,Person &p ) {
//
//	cout << p.m_A << endl;
//	cout << p.m_B << endl;
//	cout << p.m_C << endl;
//	return cout;
//
//}
//
//
//void test02() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 20;
//	p2.m_B = 20;
//
//	cout << "p1.m_A = " << p1.m_A << endl;
//	cout << "p1.m_B = " << p1.m_B << endl;
//
//	cout << "p2.m_A = " << p2.m_A << endl;
//	cout << "p2.m_B = " << p2.m_B << endl;
//
//	cout << p1 << endl << "hello world";
//}
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}