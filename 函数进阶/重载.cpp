#include<iostream>

using namespace std;

//函数重载的注意事项
//1.引用作为重载的参数条件
void func(int& a) {
	cout << "int &a" << endl;
}

void func(const int& a) {
	cout << "const int &a" << endl;
}

//2、函数重载遇到默认参数
void func2(int a) {
	cout << "func2(int a)的调用" << endl;
}

void func2(int a, int b=10) {
	cout << "func2(int a, int b=10)的调用" << endl;
}
/*int  main()
{
	int a = 10;
	const int b = 100;
	func(a);
	func(b);

	//func2(10);//函数重载参数出现二义性,函数重载不要有默认参数
	func2(10, 20);
	system("pause");
	return 0;
}*/