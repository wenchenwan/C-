//#include<iostream>
//
//using namespace std;
//
//class Base {
//public:
//	int m_A = 10;
//
//	void func() {
//		cout << "Base�е�func()������" << endl;
//	}
//	void func(int a) {
//		cout << "Base�е�func()������" << a << endl;
//	}
//};
//
//class Son :public Base {
//public:
//	int m_A = 20;
//	void func() {
//		cout << "Son�е�func()������" << endl;
//	}
//	
//
//};
//void test01() {
//	Son son;
//	son.func();
//	//son.func(10);//**ֻҪ����һ�������Ա�������ͻὫ���еĸ����Աͬ��������ȫ������**
//	son.Base::func(10);
//	son.Base::func();
//	cout << "son�е�m_A��ֵΪ" << son.m_A << endl;
//	cout << "Base�е�m_A��ֵΪ" << son.Base::m_A << endl;
//
//}
//int main() {
//	
//	test01();
//	return 0;
//
//}