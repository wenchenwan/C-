//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
////void test01() {
////	fstream File;
////	File.open("test.txt", ios::in);
////	char s[1000];
////	while (File.getline(s, 1000)) {
////		cout << s <<endl;
////	}
////}
////void test02() {
////	fstream F1;
////	F1.open("test.txt", ios::in);
////	if (!F1.is_open()) {
////		cout << " 文件打开失败 " << endl;
////	}
////	char buffer[1024] = {};
////	while (F1>>buffer)
////	{
////		cout << buffer << endl;
////	}
////
////}
//
////void test03() {
////	string str;
////	fstream F1;
////	F1.open("test.txt", ios::in);
////	while (getline(F1,str))
////	{
////		cout << str << endl;
////	}
////}
//
//void test04() {
//	fstream F3;
//	F3.open("test.txt",ios::in);
//	char s;
//	while ((s = F3.get()) != EOF) {
//		cout << s ;
//	}
//	F3.close();
//}
//int main() {
//	
//	//test01();
//	//test02();
//	//test03();
//	test04();
//	return 0;
//
//}