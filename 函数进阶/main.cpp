//#include"Circle.h"
//#include"Cube.h"
/*#include"PointAndCircle.h"
#include<iostream>

void test01();

using namespace std;

class Person {
	int m_a;
	};

void test02(){
	Person p2;
	cout << "sizeof p2 = " << sizeof(p2) << endl;
}
int main() {
	//test01();
	test02();

	return 0;
	
}*/

/*void test01()
{
	Person p;
	//�ն�����ڴ�Ϊ1
	//C++ Ϊ�ն���Ҳ������һ���ֽڿռ䣬��Ϊ�˿ն���ռ�ڴ��λ��
	cout << "sizeof p = " << sizeof(p) << endl;

	system("pause");
	

	return ;

}*/


/*int main() {

	Point point1,center,center1;
	PointAndCircle M1;

	point1.Set_m_X(3);
	point1.Set_m_Y(4);

	center.Set_m_X(0);
	center.Set_m_Y(0);


	M1.Set_m_Center(center);
	M1.Set_m_R(5);

	center1 = M1.Get_m_Center();
	if (point1.Distance(&center1) > M1.Get_m_R()) {
		cout << "����Բ��" << endl;
	}
	else
	{
		if (point1.Distance(&center1) < M1.Get_m_R()) {
			cout << "����Բ��" << endl;
		}
		else
		{
			cout << "����Բ��" << endl;
		}

	}
	

	system("pause");
	return 0;
}*/
//cubeʹ��
/*
bool Is_Same(Cube *cub1, Cube *cub2)
{
	if ((cub1->GetH() == cub2->GetH()) && (cub1->GetW() == cub2->GetW()) && (cub1->GetL() == cub2->GetL())) {
		return true;
	}
	else
	{
		return false;
	}
}




int  main() {

	
	Cube cube1,cube2(10,10,10);
	int a, b, c;
	cout << "�����������峤���" << endl;
	cin >> a >> b >> c;
	cube1.SetH(a);
	cube1.SetW(b);
	cube1.SetL(c);
	
	cout << "������cube1�ĳ���߷ֱ�Ϊ" << cube1.GetL() << " " << cube1.GetW() << " " << cube1.GetH() << endl;
	cout << "cube1�����Ϊ"<<cube1.GetArea() << endl;
	cout << "cube1�����Ϊ" << cube1.GetVolume() << endl;
	//if (cube1.IsSame(&cube2)) 
	if(Is_Same(&cube1,&cube2)){
		cout << "�������������" << endl;
	}
	else {
		cout << "���������岻��" << endl;
	}
	
	system("pause");
	return 0;

}*/

//1.Circleʹ��
/*int main()
{
	Circle C1("MyFirstCircle",10);
	C1.SetR(20);
	C1.Show();
	cout <<  "Բ�����" << C1.CircleArea() << endl;
	C1.Show();
	cout <<  "Բ���ܳ�" << C1.CirDistance() << endl;

	system("pause");
	
	return 0;
}*/