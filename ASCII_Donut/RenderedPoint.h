
#pragma once
#include "MatrixMath.h"

class RenderedPoint
{
private:
	Vector3 position;
	float brightness;
public:
	RenderedPoint(Vector3 position, float brightness);

	Vector3 GetPosition();
	void SetPosition(Vector3 value);

	float GetBrightness() { return brightness; };
	void SetBrightness(float value) { brightness = value; };
};
