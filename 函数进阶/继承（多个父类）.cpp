//#include<iostream>
//
//using namespace std;
//
//class Base1 {
//public:
//	int m_A = 10;
//};
//
//class Base2 {
//public:
//	int m_A = 20;
//};
//
//class Son :public Base1, public Base2 {
//public:
//	int m_A = 30;
//};
//
//void test01() {
//
//	Son son;
//	cout << "Son �е�m_AΪ" << son.m_A << endl;
//	cout << "Base1 �е�m_AΪ" << son.Base1::m_A << endl;
//	cout << "Base2 �е�m_AΪ" << son.Base2::m_A << endl;
//}
//int main()
//{
//
//	test01();
//	return 0;
//}