//#include<iostream>
//
//using namespace std;
//
//class Base {//抽象类
//public:
//	virtual void func() = 0;//纯虚函数
//};
//
//
//class Son : public Base {
//
//};
//
//class Son1 :public Base {
//	void func() {
//		
//		cout << "func() 函数的调用 " << endl;
//
//	}
//};
//void test01() {
//	//Son b;
//	//Base a;  //抽象类无法实例化对象
//	Son1 c;		//子类必须要实例化父类的纯虚函数，不然不能实例化对象
//	//Base* base = new Son1;//多态
//	//base->func();
//	Base& base = c;
//	base.func();
//}
//
//int main() {
//	test01();
//	return 0;
//}