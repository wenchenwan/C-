#include<iostream>

using namespace std;

//函数重载
//参数个数不同，参数类型不同，参数顺序不同
float func(int a, double b) {
	return a + b;
}

int func(int a, int b, int c = 10) {
	return a + b + c;
}

//int main() {
//	cout << func(1, 23) << endl;
//	cout << func(1, 2.5) << endl;
//	system("pause");
//}