//#include<iostream>
//
//using namespace std;
//
//class Animal {
//public:
//	//�麯��
//	//����virtual�ؼ��֣���������ʱ���ͻ�������һ��ָ��vfptrָ��vftable��vftable�д洢�ľ��Ǻ�������ڵ�ַ������СΪ4
//	virtual void Speak() {//virtual ʵ�ֵ�ַ�����н׶Σ��������
//		cout << "������˵��" << endl;
//
//	}
//};
//
//class Cat :public Animal {
//public:
//	void Speak() {
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////��ַ���
////�������è˵��������ִ�н׶ν������
//
//void DoSpeak(Animal& animal) {//����Ķ���ȥ����һ������Ķ���
//	animal.Speak();
//}
//
//void test01() {
//	Cat cat;
//	DoSpeak(cat);
//}
//
//void test02() {
//	Cat cat1;
//	cout << "cat ��Ĵ�СΪ " << sizeof(cat1) << endl;
//}
//int main() {
//	//test01();
//
//	test02();
//	return 0;
//
//}