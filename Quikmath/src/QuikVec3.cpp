#include "QuikVec3.h"


namespace Quikmath {

	QuikVec3::QuikVec3() 
		: x(0.0f), y(0.0f), z(0.0f) 
	{};
	QuikVec3::QuikVec3(float uX, float uY, float uZ)
		: x(uX), y(uY), z(uZ)
	{};

	QuikVec3::QuikVec3(const QuikVec3& vec) 
		: x(vec.x), y(vec.y), z(vec.z)
	{};

	QuikVec3& QuikVec3::operator=(const QuikVec3& vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
		
		return *this;
	}
}