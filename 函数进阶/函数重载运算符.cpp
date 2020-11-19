//#include<iostream>
//
//using namespace std;
////加法运算重载
//
//
//class MyPrint {
//
//public:
//
//	void operator()(string str) {
//
//		cout << str << endl;
//
//	}
//
//};
//
//class MyAdd {
//
//public:
//
//	int operator()(int num1,int num2) {
//
//		return num1 + num2;
//	}
//};
//
////只能利用全局函数来重载左移运算符
//void PrintStr(string str1) {
//
//	cout << str1 << endl;
//	return;
//
//}
//
//void test02() {
//	MyPrint obj1;
//	MyAdd myAdd;
//	int ret = myAdd(100,200);
//
//	cout << "myAdd(100,200)" << ret << endl;
//	//仿函数
//	cout << MyAdd()(100, 100) << endl;//匿名函数对象
//	obj1("hello world!!!!");
//	obj1("hello world!!!!");
//	PrintStr("hello world!!!!");
//
//}
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}