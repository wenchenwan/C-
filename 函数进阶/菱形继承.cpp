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
////������̳н�����μ̳����⣬�ڼ̳�ǰ����virtual�ؼ���
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
//	//�����μ̳оߵĸ��������ͬ�����ԣ���Ҫ�����������������
//	//���μ̳е���������˫�ݣ�������Դ�˷�
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