//#include<iostream>
//
//using namespace std;
//
//class Animal {
//public:
//	Animal() {
//		cout << "animal �Ĺ��캯������" << endl;
//	}
//	//�����鹹�캯�����Խ������ָ���ͷ�������󲻸ɾ������⣻
//	//virtual ~Animal() {
//	//	cout << "animal ��������������" << endl;
//	//}
//
//	//��������Ҫ��������ͬʱҲ��Ҫ��ʵ��
//	//���˴��������Ͳ���ʵ��������
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//};
//Animal::~Animal() {
//	cout << "animal ��������������" << endl;
//}
//
//class Cat :public Animal {
//public:
//	void speak() {
//		cout << *m_Name << " Сè��˵��" << endl;
//	}
//	string* m_Name;
//	Cat(string name) {
//		cout << "cat ���캯���ĵ���" << endl;
//		m_Name = new string(name);
//	}
//
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << " Cat ��������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//
//
//void test02() {
//
//	Animal *animal = new Cat("Tom");
//	animal->speak();
//	//����ָ����������ʱ�򣬲�����������е�������������������ж��������ԣ�������ڴ�й©����
//
//	delete animal;
//
//}
//
//int main() {
//	test02();
//
//	return 0;
//}