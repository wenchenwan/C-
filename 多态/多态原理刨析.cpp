//#include<iostream>
//
//using namespace std;
//
//class Animal {
//public:
//	//虚函数
//	//加了virtual关键字，创建对象时，就会你生成一个指针vfptr指向vftable（vftable中存储的就是函数的入口地址），大小为4
//	virtual void Speak() {//virtual 实现地址在运行阶段，进行晚绑定
//		cout << "动物在说话" << endl;
//
//	}
//};
//
//class Cat :public Animal {
//public:
//	void Speak() {
//		cout << "小猫在说话" << endl;
//	}
//};
//
////地址早绑定
////如果想让猫说话，则在执行阶段进行晚绑定
//
//void DoSpeak(Animal& animal) {//父类的对象去接受一个子类的对象
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
//	cout << "cat 类的大小为 " << sizeof(cat1) << endl;
//}
//int main() {
//	//test01();
//
//	test02();
//	return 0;
//
//}