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
	//空对象的内存为1
	//C++ 为空对象也分配了一个字节空间，是为了空对象占内存的位置
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
		cout << "点在圆外" << endl;
	}
	else
	{
		if (point1.Distance(&center1) < M1.Get_m_R()) {
			cout << "点在圆内" << endl;
		}
		else
		{
			cout << "点在圆上" << endl;
		}

	}
	

	system("pause");
	return 0;
}*/
//cube使用
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
	cout << "请输入立方体长宽高" << endl;
	cin >> a >> b >> c;
	cube1.SetH(a);
	cube1.SetW(b);
	cube1.SetL(c);
	
	cout << "立方体cube1的长宽高分别为" << cube1.GetL() << " " << cube1.GetW() << " " << cube1.GetH() << endl;
	cout << "cube1的面积为"<<cube1.GetArea() << endl;
	cout << "cube1的体积为" << cube1.GetVolume() << endl;
	//if (cube1.IsSame(&cube2)) 
	if(Is_Same(&cube1,&cube2)){
		cout << "两个立方体相等" << endl;
	}
	else {
		cout << "两个立方体不等" << endl;
	}
	
	system("pause");
	return 0;

}*/

//1.Circle使用
/*int main()
{
	Circle C1("MyFirstCircle",10);
	C1.SetR(20);
	C1.Show();
	cout <<  "圆的面积" << C1.CircleArea() << endl;
	C1.Show();
	cout <<  "圆的周长" << C1.CirDistance() << endl;

	system("pause");
	
	return 0;
}*/