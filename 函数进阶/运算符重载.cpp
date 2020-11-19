//#include<iostream>
//
//using namespace std;
////加法运算重载
//
//
//class Person {
//public:
//	/*&Person operator+(Person& p) {
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//
//		return temp;
//		}*/
//		int m_a;
//		int m_B;
//};
//
///*void test01() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 20;
//	p2.m_B = 20;
//
//	Person p3 = p1 + p2;
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//}*/
////1、成员函数重载加号
//
////2、通过全局函数重载加号
//Person operator+(Person& p1, Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//
//	return temp;
//}
//Person operator+(Person& p1, int num) {//运算符函数重载
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//
//	return temp;
//}
//
//void test02() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 20;
//	p2.m_B = 20;
//
//	Person p3 = p1 + p2;
//	Person p4 = p1 + 100;
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//
//	cout << "p4.m_A = " << p4.m_A << endl;
//	cout << "p4.m_B = " << p4.m_B << endl;
//}
//int main() {
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}