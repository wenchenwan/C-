#include<iostream>

using namespace std;

//��������
//����������ͬ���������Ͳ�ͬ������˳��ͬ
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