//#include<iostream>
//
//using namespace std;
//
////BasePage
//class BasePage {
//public:
//		void Header() {
//			cout << "首页 公开课 登录 ......" << endl;
//
//		}
//		void Footer() {
//			cout << "帮助中心、交流合作、站内地图......" << endl;
//		}
//
//		void Left() {
//			cout << "Python C++ JAVA......" << endl;
//
//		}
//};
////C++
//class Java : public BasePage {
//public:
//	void Content() {
//		cout << "Java 学科视频 " << endl;
//	}
//};
//
//class Python : public BasePage {
//public:
//	void Content() {
//		cout << "Python 学科视频" << endl;
//
//	}
//};
//class Cpp : public BasePage {
//public:
//	void Content() {
//		cout << "C++ 学科视频" << endl;
//	}
//};
//
//void test01() {
//	Java ja;
//	ja.Header();
//	ja.Footer();
//	ja.Left();
//	ja.Content();
//	Cpp cpp;
//	cpp.Content();
//	Python py;
//	py.Content();
//}
//int main() {
//
//	test01();
//	return 0;
//}