//#include<iostream>
//
//using namespace std;
////�ӷ���������
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
////ֻ������ȫ�ֺ������������������
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
//	//�º���
//	cout << MyAdd()(100, 100) << endl;//������������
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