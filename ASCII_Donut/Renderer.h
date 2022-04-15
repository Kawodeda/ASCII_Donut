
#pragma once
#include "MatrixMath.h"

class Renderer
{
private:
	int screenWidth;
	int screenHeight;
	Vector3 lightDirection;

public:
	int GetScreenWidth() { return screenWidth; };
	void SetScreenWidth(int value) { screenWidth = value; };

	int GetScreenHeight() { return screenHeight; };
	void SetScreenHeight(int value) { screenHeight = value; };

	Vector3 GetLightDirection() { return lightDirection; };
	void SetLightDirection(Vector3 value);

	void SetScreenResolution(int width, int height);


};
