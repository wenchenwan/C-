#include<iostream>

using namespace std;

//�������ص�ע������
//1.������Ϊ���صĲ�������
void func(int& a) {
	cout << "int &a" << endl;
}

void func(const int& a) {
	cout << "const int &a" << endl;
}

//2��������������Ĭ�ϲ���
void func2(int a) {
	cout << "func2(int a)�ĵ���" << endl;
}

void func2(int a, int b=10) {
	cout << "func2(int a, int b=10)�ĵ���" << endl;
}
/*int  main()
{
	int a = 10;
	const int b = 100;
	func(a);
	func(b);

	//func2(10);//�������ز������ֶ�����,�������ز�Ҫ��Ĭ�ϲ���
	func2(10, 20);
	system("pause");
	return 0;
}*/