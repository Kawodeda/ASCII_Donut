
#include <iostream>
#include "MatrixMath.h"

Vector3::Vector3(float _x, float _y, float _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Vector3::Vector3()
{
	x = 0.f;
	y = 0.f;
	z = 0.f;
}

Matrix::Matrix(float _elements[rank][rank])
{
	for (int i = 0; i < rank; ++i)
	{
		for (int j = 0; j < rank; ++j)
		{
			elements[i][j] = _elements[i][j];
		}
	}
}

Vector3 operator - (Vector3 a)
{
	Vector3 result;
	result.x = -a.x;
	result.y = -a.y;
	result.z = -a.z;

	return result;
}

Vector3 operator + (Vector3 a, Vector3 b)
{
	Vector3 result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;

	return result;
}

Vector3 operator - (Vector3 a, Vector3 b)
{
	Vector3 result = a + -b;

	return result;
}

Vector3 operator * (Vector3 a, float scalar)
{
	Vector3 result;
	result.x = a.x * scalar;
	result.y = a.y * scalar;
	result.z = a.z * scalar;

	return result;
}

Vector3 operator * (float scalar, Vector3 a)
{
	Vector3 result = a * scalar;

	return result;
}

Vector3 operator * (Vector3 a, Matrix b)
{
	Vector3 result;
	result.x = b.elements[0][0] * a.x + b.elements[0][1] * a.y + b.elements[0][2] * a.z;
	result.y = b.elements[1][0] * a.x + b.elements[1][1] * a.y + b.elements[1][2] * a.z;
	result.z = b.elements[2][0] * a.x + b.elements[2][1] * a.y + b.elements[2][2] * a.z;

	return result;
}

Vector3 operator * (Matrix a, Vector3 b)
{
	Vector3 result = b * a;

	return result;
}

float Vector3::GetLength()
{
	return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

Vector3 Normalize(Vector3 vector)
{
	float length = vector.GetLength();
	return Vector3(vector.x / length, vector.y / length, vector.z / length);
}

Vector3 DotProduct(Vector3 a, Vector3 b)
{
	return Vector3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}

void PrintVector3(Vector3 vector)
{
	std::cout << vector.x << ' ' << vector.y << ' ' << vector.z << std::endl;
}

void PrintVector3Array(Vector3* vectors, int length)
{
	for (int i = 0; i < length; ++i)
	{
		PrintVector3(vectors[i]);
	}
}
