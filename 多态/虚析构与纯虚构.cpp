//#include<iostream>
//
//using namespace std;
//
//class Animal {
//public:
//	Animal() {
//		cout << "animal 的构造函数调用" << endl;
//	}
//	//利用虚构造函数可以解决父类指针释放子类对象不干净的问题；
//	//virtual ~Animal() {
//	//	cout << "animal 的析构函数调用" << endl;
//	//}
//
//	//纯虚析构要有声明，同时也需要有实现
//	//有了纯虚析构就不能实例化对象
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//};
//Animal::~Animal() {
//	cout << "animal 的析构函数调用" << endl;
//}
//
//class Cat :public Animal {
//public:
//	void speak() {
//		cout << *m_Name << " 小猫在说话" << endl;
//	}
//	string* m_Name;
//	Cat(string name) {
//		cout << "cat 构造函数的调用" << endl;
//		m_Name = new string(name);
//	}
//
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << " Cat 析构函数被调用" << endl;
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
//	//父类指针在析构的时候，不会调用子类中的析构函数，子类如果有堆区的属性，会出现内存泄漏问题
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