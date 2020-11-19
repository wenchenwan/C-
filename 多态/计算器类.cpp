//#include<iostream>
//
//using namespace std;
//
//class Calculator {
//public:
//	int get_result(string oper) {
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}if (oper == "/") {
//			return m_Num1 / m_Num2;
//		}
//
//	}
//	int m_Num1;
//	int m_Num2;
//
//
//};
//
////实现计算机的抽象类
//class AbstractCalculatior {
//public:
//	virtual int getResult() {
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//class AddCalculatior :public AbstractCalculatior {
//public:
//	int getResult() {
//		return m_Num1 + m_Num2;
//	}
//
//};
//
//class SubCalculatior :public AbstractCalculatior {
//public:
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//
//};
//
//class ChenCalculatior :public AbstractCalculatior {
//public:
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//
//};
//
//void test01() {
//	Calculator cal;
//	cal.m_Num1 = 10;
//	cal.m_Num2 = 20;
//
//	cout << "cal.m_Num1 + cal.m_Num2  =" << cal.get_result("+") << endl;
//	cout << "cal.m_Num1 - cal.m_Num2  =" << cal.get_result("-") << endl;
//	cout << "cal.m_Num1 * cal.m_Num2  =" << cal.get_result("*") << endl;
//	cout << "cal.m_Num1 / cal.m_Num2  =" << cal.get_result("/") << endl;
//	//如果进行扩展，就需要修改源码
//	//在实际的开发中，提倡开闭原则
//	//开闭原则：对扩展开放，对修改进行关闭
//
//	//多态带来好处
//	//1、组织结构清晰
//	//2、可读性强
//	//3、后期进行扩展
//}
//
//void test02() {
//	//多态的使用条件，父类的指针或者引用指向子类的对象
//	//
//
//	AbstractCalculatior* abc = new AddCalculatior;
//
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//
//	delete abc;
//
//	abc = new SubCalculatior;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	abc = new ChenCalculatior;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//}
//int main() {
//	//test01();
//	test02();
//
//	return 0;
//}