
#define _USE_MATH_DEFINES
#include <math.h>
#include "Constructor.h"

Vector3* Constructor::ConstructCircle(float radius, Vector3 origin, int density)
{
	Vector3* circle = new Vector3[density];
	float step = PIx2 / density;

	for (int i = 0; i < density; ++i)
	{
		float angle = step * i;
		circle[i] = Vector3(cos(angle) * radius, sin(angle) * radius, 0.f) + origin;
	}

	return circle;
}

Vector3* Constructor::ConstructCuboid(float xSize, float ySize, float zSize, Vector3 origin)
{
	float xSize_2 = xSize / 2.f;
	float ySize_2 = ySize / 2.f;
	float zSize_2 = zSize / 2.f;

	Vector3* cuboid = new Vector3[8];
	cuboid[0] = Vector3(xSize_2, ySize_2, zSize_2) + origin;
	cuboid[1] = Vector3(-xSize_2, ySize_2, zSize_2) + origin;
	cuboid[2] = Vector3(-xSize_2, ySize_2, -zSize_2) + origin;
	cuboid[3] = Vector3(xSize_2, ySize_2, -zSize_2) + origin;
	cuboid[4] = Vector3(xSize_2, -ySize_2, zSize_2) + origin;
	cuboid[5] = Vector3(-xSize_2, -ySize_2, zSize_2) + origin;
	cuboid[6] = Vector3(-xSize_2, -ySize_2, -zSize_2) + origin;
	cuboid[7] = Vector3(xSize_2, -ySize_2, -zSize_2) + origin;

	return cuboid;
}

Vector3* Constructor::ConstructCuboid(float xSize, float ySize, float zSize)
{
	return ConstructCuboid(xSize, ySize, zSize, Vector3());
}

Vector3* Constructor::ConstructCube(float size, Vector3 origin)
{
	return ConstructCuboid(size, size, size, origin);
}

Vector3* Constructor::ConstructCube(float size)
{
	return ConstructCuboid(size, size, size, Vector3());
}
