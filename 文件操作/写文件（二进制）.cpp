//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//class Person {
//public:
//	char m_Name[64];
//	int m_Age;
//
//};
//
//int main()
//{
//	fstream file;
//	file.open("person.txt", ios::out|ios::binary);
//
//	Person p = { "张三",20 };
//
//	file.write((const char *)&p,sizeof(p));//写抽象数据类型
//	cout << " 写入完成 " << endl;
//	return 0;
//}