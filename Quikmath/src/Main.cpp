#include "Vec3.h"

#include <iostream>
int main()
{
	Quikmath::Vec3 vec(1.0f, 1.0f, 1.0f);
	Quikmath::Vec3 vec1(2.0f, 2.0f, 3.0f);

	Quikmath::Vec3 vec2 = vec1 - vec;
	std::cout << vec2.x << "  " << vec2.y << "  " << vec2.z << std::endl;
}