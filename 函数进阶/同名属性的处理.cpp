//#include<iostream>
//
//using namespace std;
//
//class Base {
//public:
//	int m_A = 10;
//
//	void func() {
//		cout << "Base中的func()被调用" << endl;
//	}
//	void func(int a) {
//		cout << "Base中的func()被调用" << a << endl;
//	}
//};
//
//class Son :public Base {
//public:
//	int m_A = 20;
//	void func() {
//		cout << "Son中的func()被调用" << endl;
//	}
//	
//
//};
//void test01() {
//	Son son;
//	son.func();
//	//son.func(10);//**只要出现一个子类成员函数，就会将所有的父类成员同名函数将全被隐藏**
//	son.Base::func(10);
//	son.Base::func();
//	cout << "son中的m_A数值为" << son.m_A << endl;
//	cout << "Base中的m_A数值为" << son.Base::m_A << endl;
//
//}
//int main() {
//	
//	test01();
//	return 0;
//
//}