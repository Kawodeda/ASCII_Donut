
#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <math.h>
#include "MatrixMath.h"
#include "Constructor.h"

int main()
{
	Vector3 a = Vector3(10.7f, 0.7f, 0.f);
	PrintVector3(a);
	std::cout << a.GetLength() << std::endl;
	
	Vector3 an = Normalize(a);
	PrintVector3(an);
	std::cout << an.GetLength();

	return 0;
}
