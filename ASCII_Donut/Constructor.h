
#pragma once
#include "MatrixMath.h"

class Constructor
{
private:
	float const PIx2 = M_PI * 2;

public:
	Vector3* ConstructCircle(float radius, Vector3 origin, int density);
	Vector3* ConstructCuboid(float xSize, float ySize, float zSize, Vector3 origin);
	Vector3* ConstructCuboid(float xSize, float ySize, float zSize);
	Vector3* ConstructCube(float size, Vector3 origin);
	Vector3* ConstructCube(float size);
};


