#include "QuikVec3.h"


namespace Quikmath {
	
	// Constructors
	QuikVec3::QuikVec3() 
		: x(0.0f), y(0.0f), z(0.0f) 
	{};
	QuikVec3::QuikVec3(float uX, float uY, float uZ)
		: x(uX), y(uY), z(uZ)
	{};

	// Copy Constructors
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
	
	// Destructor
	QuikVec3::~QuikVec3() {};

	// ---------- Operations ----------

	// Addition/Subtraction
	QuikVec3& QuikVec3::operator+=(const QuikVec3& vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;

		return *this;
	}

	QuikVec3 QuikVec3::operator+(const QuikVec3& vec) const
	{
		return QuikVec3(x + vec.x, y + vec.y, z + vec.z);
	}

	QuikVec3& QuikVec3::operator-=(const QuikVec3& vec)
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return *this;
	}

	QuikVec3 QuikVec3::operator-(const QuikVec3& vec) const
	{
		return QuikVec3(x - vec.x, y - vec.y, z - vec.z);
	}
	
	// Scalar Multiplication/Division
	QuikVec3& QuikVec3::operator*=(const float n)
	{
		x *= n;
		y *= n;
		z *= n;

		return *this;
	}

	QuikVec3 QuikVec3::operator*(const float n) const
	{
		return QuikVec3(x * n, y * n, z * n);
	}

	QuikVec3& QuikVec3::operator/=(const float n)
	{
		x /= n;
		y /= n;
		z /= n;

		return *this;
	}

	QuikVec3 QuikVec3::operator/(const float n) const
	{
		return QuikVec3(x / n, y / n, z / n);
	}

	// Dot/Cross

	float QuikVec3::operator*(const QuikVec3& vec) const
	{
		return x * vec.x + y * vec.y + z * vec.z;
	}

	float QuikVec3::dot(const QuikVec3& vec) const
	{
		return x * vec.x + y * vec.y + z * vec.z;
	}


	QuikVec3 QuikVec3::cross(const QuikVec3& vec) const
	{
		return QuikVec3(
			y * vec.z - z * vec.y,
			z * vec.x - x * vec.z,
			x * vec.y - y * vec.x);
	}
}