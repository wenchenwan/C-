//#include<iostream>
//
//using namespace std;
//
//class Base {
//public:
//	//煮水
//	virtual void boiled() = 0;
//	//泡茶
//	virtual void Pao() = 0;
//	//装杯
//	virtual void Cup() = 0;
//	//打包
//	virtual void Pack() = 0;
//
//	void Make() {
//		boiled();
//		Pao();
//		Cup();
//		Pack();
//	}
//
//};
//
//class Tea : public Base
//{
//public:
//	void boiled() {
//		cout << "煮茶水" << endl;
//	}
//	void Pao() {
//		cout << "泡茶" << endl;
//	}
//	void Cup() {
//		cout << "装杯子" << endl;
//	}
//	void Pack() {
//		cout << "打包茶" << endl;
//	}
//
//};
//class MilkTea : public Base
//{
//public:
//	void boiled() {
//		cout << "煮茶水+牛奶" << endl;
//	}
//	void Pao() {
//		cout << "泡茶+混合牛奶" << endl;
//	}
//	void Cup() {
//		cout << "装杯子" << endl;
//	}
//	void Pack() {
//		cout << "打包奶茶" << endl;
//	}
//
//};
//
//
//void test01() {
//	Base* base = new Tea;
//	base->Make();
//	delete base;
//	base = new MilkTea;
//	base->Make();
//	delete base;
//	cout << "------------------------------------" << endl;
//	MilkTea milke;
//	Base& base1 = milke;
//	base1.Make();
//}
//
//int main() {
//
//	test01();
//	return 0;
//}