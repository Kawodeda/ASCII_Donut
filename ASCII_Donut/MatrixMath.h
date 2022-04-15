
#pragma once

struct Vector3
{
	float x;
	float y;
	float z;

	Vector3(float _x, float _y, float _z);
	Vector3();

	float GetLength();
};

struct Matrix
{
	static const int rank = 3;
	float elements[rank][rank];

	Matrix(float _elements[rank][rank]);
};

Vector3 operator - (Vector3 a);

Vector3 operator + (Vector3 a, Vector3 b);

Vector3 operator - (Vector3 a, Vector3 b);

Vector3 operator * (Vector3 a, float scalar);

Vector3 operator * (float scalar, Vector3 a);

Vector3 operator * (Vector3 a, Matrix b);

Vector3 operator * (Matrix a, Vector3 b);

Vector3 Normalize(Vector3 vector);

Vector3 DotProduct(Vector3 a, Vector3 b);

void PrintVector3(Vector3 vector);

void PrintVector3Array(Vector3* vectors, int length);
