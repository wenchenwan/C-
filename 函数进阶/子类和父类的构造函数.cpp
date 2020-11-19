//#include<iostream>
//
//using namespace std;
//
//class Base {
//public:
//	Base() {
//		cout << "Base构造函数被调用" << endl;
//	}
//	~Base() {
//		cout << "Base析构函数被调用" << endl;
//	}
//};
//
//
//class Son :public Base {
//public:
//	Son() {
//		cout << "Son的构造函数被调用" << endl;
//
//	}
//	~Son() {
//		cout << "Son的析构函数被调用" << endl;
//	}
//};
//
//void test01() {
//	Son son;
//	return;
//}
//int main() {
//
//	test01();
//
//	return 0;
//}