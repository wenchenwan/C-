//#include<iostream>
//
//using namespace std;
//
//class Base {//������
//public:
//	virtual void func() = 0;//���麯��
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
//		cout << "func() �����ĵ��� " << endl;
//
//	}
//};
//void test01() {
//	//Son b;
//	//Base a;  //�������޷�ʵ��������
//	Son1 c;		//�������Ҫʵ��������Ĵ��麯������Ȼ����ʵ��������
//	//Base* base = new Son1;//��̬
//	//base->func();
//	Base& base = c;
//	base.func();
//}
//
//int main() {
//	test01();
//	return 0;
//}