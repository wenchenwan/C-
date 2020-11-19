//#include<iostream>
//
//using namespace std;
//
////继承中的对象模型
//
//class Base {
//public:
//	int m_A;
//private:
//	int m_B;
//protected:
//	int m_C;
//};
//
//class Son :public Base {
//public:
//	int m_D;
//};
//
//void test01() {
//	Son son1;
//	//16父类中所有非静态的成员都会被子类继承下去
//	//父类的私有变量只是访问不到，但是它是确实存在的
//	cout << "son1 的大小为" << sizeof(Son) << endl;
//}
//
//int main() {
//	test01();
//	return 0;
//}