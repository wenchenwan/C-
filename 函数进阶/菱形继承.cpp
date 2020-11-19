//#include<iostream>
//
//using namespace std;
//
//class Anmial {
//public:
//	int m_Age;
//};
//
//
//
//
////利用虚继承解决菱形继承问题，在继承前加上virtual关键字
//class Sheep :virtual public Anmial{
//
//
//};
//
//class Tuo :virtual public Anmial{
//
//};
//
//class SheepTuo :public Sheep, public Tuo {};
//
//
//
//void test01() {
//	SheepTuo St1;
//	//当菱形继承具的父类具有相同的属性，需要加以作用域进行区分
//	//菱形继承导致数据有双份，导致资源浪费
//	St1.Sheep::m_Age = 10;
//	St1.Tuo::m_Age = 18;
//
//	cout << "St1.Sheep::m_Age" << St1.Sheep::m_Age << endl;
//	cout << "St1.Tuo::m_Age" << St1.Tuo::m_Age << endl;
//	cout << "St1.m_Age" << St1.m_Age << endl;
//}
//int main() {
//
//	test01();
//
//	return 0;
//}