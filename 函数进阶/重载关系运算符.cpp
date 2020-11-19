//#include<iostream>
//
//using namespace std;
////加法运算重载
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
////只能利用全局函数来重载左移运算符
//
//
//void test02() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	if (p2 > p1)
//		cout << "P1大于P2" << endl;
//	if (p2 < p1)
//		cout << "P1小于P2" << endl;
//	if (p1 == p2)
//		cout << "P1等于P2" << endl;
//	cout << "p1的年纪为 " << p1.m_Age << endl;
//	cout << "p2的年纪为 " << p2.m_Age << endl;
//	cout << "p3的年纪为 " << p3.m_Age << endl;
//	//释放p1然后释放P2的时候导致堆区的内存重复释放；
//
//}
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}