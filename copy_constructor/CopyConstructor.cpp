#include <cstdio>
#include "CopyConstructor.h"
using namespace std;

CopyConstructor::CopyConstructor(int _x, int _y) {
	puts("Normal Constructor");
	x = _x;
	y = _y;
}

CopyConstructor::CopyConstructor(const CopyConstructor& copy) {
	puts("Copy Constructor");
	x = copy.x;
	y = copy.y;
}

void CopyConstructor::display() {
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}

CopyConstructor::~CopyConstructor() {
	puts("Distructor called");
}
