//#include<iostream>
//
//using namespace std;
////加法运算重载
//
//
//class Person {
//
//	friend ostream& operator<<(ostream& cout, Person p);
//public:
//	//重载++运算符
//	//Person operator++() {//如果按值传递，则最后加出来的值不会再加到原来的变量上，按引用则仍然可以加到原来的变量上
//	Person& operator++(){
//
//		this->m_A = this->m_A++;
//		this->m_B = this->m_B++;
//
//		return *this;
//	}
//
//	Person& operator++(int) {//后置++
//		//先记录
//		//Person new *temp = *this;
//		Person* temp = new Person;
//		temp = this;
//
//		//后递增
//		this->m_A = this->m_A + 1;
//		this->m_B = this->m_B + 1;
//		this->m_C = this->m_C + 1;
//		//再返回
//
//		return *temp;
//
//	}
//	
//public:
//
//	int m_A;
//	int m_B;
//private:
//	int m_C =0;
//};
//
//ostream& operator<<(ostream& cout, Person p) {
//	
//	cout << p.m_C;
//	return cout;
//
//}
//
////Person operator++(Person &p ) {
////
////	p.m_A = p.m_A++;
////	p.m_B = p.m_B++;
////
////	return p;
////
////}
//
//
//void test02() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 20;
//	p2.m_B = 20;
//
//	++(++p1);//按值传递p1还是11；按引用传递则值为12
//	(p2++)++;
//	cout << "p1.m_A = " << p1.m_A << endl;
//	cout << "p1.m_B = " << p1.m_B << endl;
//
//	cout << "p2.m_A = " << p2.m_A << endl;
//	cout << "p2.m_B = " << p2.m_B << endl;
//
//}
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}