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
////ʵ�ּ�����ĳ�����
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
//	//���������չ������Ҫ�޸�Դ��
//	//��ʵ�ʵĿ����У��ᳫ����ԭ��
//	//����ԭ�򣺶���չ���ţ����޸Ľ��йر�
//
//	//��̬�����ô�
//	//1����֯�ṹ����
//	//2���ɶ���ǿ
//	//3�����ڽ�����չ
//}
//
//void test02() {
//	//��̬��ʹ�������������ָ���������ָ������Ķ���
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