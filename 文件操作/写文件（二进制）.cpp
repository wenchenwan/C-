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
//	Person p = { "����",20 };
//
//	file.write((const char *)&p,sizeof(p));//д������������
//	cout << " д����� " << endl;
//	return 0;
//}