#include "Cube.h"
#include<iostream>

using namespace std;

Cube::Cube() {

}

Cube::Cube(int a, int b, int c) {
	Cube_l = a;
	Cube_w = b;
	Cube_h = c;
}
Cube::~Cube() {

	
}

void Cube::SetL(int l) {
	Cube_l = l;
	return;
}

void Cube::SetW(int w) {
	Cube_w = w;
	return;
}
void Cube::SetH(int h) {
	Cube_h = h;
	return;
}

int Cube::GetH() {
	return Cube_h;
}
int Cube::GetW() {
	return Cube_w;
}
int Cube::GetL() {
	return Cube_l;
}

int Cube::GetArea() {
	return 3*(Cube_h * Cube_l + Cube_h * Cube_w + Cube_l * Cube_w);
}

int Cube::GetVolume() {
	return Cube_h * Cube_l * Cube_w;
}

bool Cube::IsSame(Cube *cub2) {
	if ((this->GetH() == cub2->GetH()) && (this->GetL() == cub2->GetL()) && (this->GetW() == cub2->GetW())) {
		return true;
	}
	return false;
}