//#include<iostream>
//
//using namespace std;
////��̬��̬��Ҫ���������
////1������͸���֮���м̳й�ϵ
////2������Ҫ��д������麯��
//
////��̬��̬��ʹ��
////1����������û���ָ��ָ������Ķ���(ִ������Ķ���)
//
//class Animal {
//public:
//	//�麯��
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
//void DoSpeak(Animal &animal) {//����Ķ���ȥ����һ������Ķ���
//	animal.Speak();
//}
//
//void test01() {
//	Cat cat;
//	DoSpeak(cat);
//}
//int main() {
//	test01();
//	return 0;
//
//}