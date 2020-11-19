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
//	Person(int age) {
//		m_Age = new int(age);
//	}
//
//	~Person() {
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}	
//	}
//
//
//	int *m_Age;
//	int m_A;
//	Person &operator=(Person &p) {//如果直接按值传递，则会创建默认拷贝构造函数，
//								//从而使得对象的属性进行浅拷贝，在函数结束的时候会出现重复释放堆区内存的情况
//		if (this->m_Age != NULL) {//因为在对象自身的属性中已经包括有堆区的属性，所以需要先判断，然后释放
//			delete m_Age;
//			this->m_Age = NULL;
//		}
//		this->m_Age = new int(*p.m_Age);
//		return *this;
//	}
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
//	p1 = p2 = p3;
//	cout << "p1的年纪为 " << *p1.m_Age << endl;
//	cout << "p2的年纪为 " << *p2.m_Age << endl;
//	cout << "p3的年纪为 " << *p3.m_Age << endl;
//	//释放p1然后释放P2的时候导致堆区的内存重复释放；
//
//}
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}