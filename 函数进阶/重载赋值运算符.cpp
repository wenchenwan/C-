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
//	Person &operator=(Person &p) {//���ֱ�Ӱ�ֵ���ݣ���ᴴ��Ĭ�Ͽ������캯����
//								//�Ӷ�ʹ�ö�������Խ���ǳ�������ں���������ʱ�������ظ��ͷŶ����ڴ�����
//		if (this->m_Age != NULL) {//��Ϊ�ڶ���������������Ѿ������ж��������ԣ�������Ҫ���жϣ�Ȼ���ͷ�
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
////ֻ������ȫ�ֺ������������������
//
//
//void test02() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p1 = p2 = p3;
//	cout << "p1�����Ϊ " << *p1.m_Age << endl;
//	cout << "p2�����Ϊ " << *p2.m_Age << endl;
//	cout << "p3�����Ϊ " << *p3.m_Age << endl;
//	//�ͷ�p1Ȼ���ͷ�P2��ʱ���¶������ڴ��ظ��ͷţ�
//
//}
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}