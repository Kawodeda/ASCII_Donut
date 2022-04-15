
#include "Renderer.h"

void Renderer::SetScreenResolution(int width, int height)
{
	screenWidth = width;
	screenHeight = height;
}

void Renderer::SetLightDirection(Vector3 value)
{
	lightDirection = Normalize(value);
}


