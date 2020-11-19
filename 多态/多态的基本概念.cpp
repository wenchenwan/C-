//#include<iostream>
//
//using namespace std;
////动态多态需要满足的条件
////1、子类和父类之间有继承关系
////2、子类要重写父类的虚函数
//
////动态多态的使用
////1、父类的引用或者指针指向子类的对象(执行子类的对象)
//
//class Animal {
//public:
//	//虚函数
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
//void DoSpeak(Animal &animal) {//父类的对象去接受一个子类的对象
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