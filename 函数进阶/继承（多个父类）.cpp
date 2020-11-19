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
//	cout << "Son 中的m_A为" << son.m_A << endl;
//	cout << "Base1 中的m_A为" << son.Base1::m_A << endl;
//	cout << "Base2 中的m_A为" << son.Base2::m_A << endl;
//}
//int main()
//{
//
//	test01();
//	return 0;
//}