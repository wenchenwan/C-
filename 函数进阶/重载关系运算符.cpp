//#include<iostream>
//
//using namespace std;
////�ӷ���������
//
//
//class Person {
//	
//public:
//
//	bool operator>(Person p) {
//		if (this->m_Age>p.m_Age) {
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool operator<(Person p) {
//		if (this->m_Age < p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	bool operator==(Person p) {
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	Person(int age) {
//		m_Age = age;
//	}
//
//	~Person() {
//	}
//
//
//	int m_Age;
//	int m_B;
//private:
//	int m_C =0;
//	
//};
//
////ֻ������ȫ�ֺ������������������
//
//
//void test02() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	if (p2 > p1)
//		cout << "P1����P2" << endl;
//	if (p2 < p1)
//		cout << "P1С��P2" << endl;
//	if (p1 == p2)
//		cout << "P1����P2" << endl;
//	cout << "p1�����Ϊ " << p1.m_Age << endl;
//	cout << "p2�����Ϊ " << p2.m_Age << endl;
//	cout << "p3�����Ϊ " << p3.m_Age << endl;
//	//�ͷ�p1Ȼ���ͷ�P2��ʱ���¶������ڴ��ظ��ͷţ�
//
//}
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}