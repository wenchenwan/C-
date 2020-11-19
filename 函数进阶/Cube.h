#pragma once
class Cube
{
public:
	Cube();
	Cube(int a, int b, int c);
	~Cube();
	void SetL(int l);
	int GetL();
	void SetW(int w);
	int GetW();
	void SetH(int h);
	int GetH();

	int GetVolume();
	int GetArea();

	bool IsSame(Cube *cub2);
private:
	int Cube_l, Cube_w, Cube_h;


	
};

