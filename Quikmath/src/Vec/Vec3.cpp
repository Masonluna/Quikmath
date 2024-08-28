#include "Vec3.h"



namespace Quikmath {

	// Constructors
	Vec3::Vec3() 
		: x(0.0f), y(0.0f), z(0.0f) 
	{};
	Vec3::Vec3(float uX, float uY, float uZ)
		: x(uX), y(uY), z(uZ)
	{};

	// Copy Constructors
	Vec3::Vec3(const Vec3& vec) 
		: x(vec.x), y(vec.y), z(vec.z)
	{};

	Vec3& Vec3::operator=(const Vec3& vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
		
		return *this;
	}
	
	// Destructor
	Vec3::~Vec3() {};

	// ---------- Operations ----------

	// Addition/Subtraction
	Vec3& Vec3::operator+=(const Vec3& vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;

		return *this;
	}

	Vec3 Vec3::operator+(const Vec3& vec) const
	{
		return Vec3(x + vec.x, y + vec.y, z + vec.z);
	}

	Vec3& Vec3::operator-=(const Vec3& vec)
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return *this;
	}

	Vec3 Vec3::operator-(const Vec3& vec) const
	{
		return Vec3(x - vec.x, y - vec.y, z - vec.z);
	}
	
	// Scalar Multiplication/Division
	Vec3& Vec3::operator*=(const float n)
	{
		x *= n;
		y *= n;
		z *= n;

		return *this;
	}

	Vec3 Vec3::operator*(const float n) const
	{
		return Vec3(x * n, y * n, z * n);
	}

	Vec3& Vec3::operator/=(const float n)
	{
		x /= n;
		y /= n;
		z /= n;

		return *this;
	}

	Vec3 Vec3::operator/(const float n) const
	{
		return Vec3(x / n, y / n, z / n);
	}

	// Dot/Cross

	float Vec3::dot(const Vec3& vec) const
	{
		return x * vec.x + y * vec.y + z * vec.z;
	}


	Vec3 Vec3::cross(const Vec3& vec) const
	{
		return Vec3(
			y * vec.z - z * vec.y,
			z * vec.x - x * vec.z,
			x * vec.y - y * vec.x);
	}

	// Magnitude
	float Vec3::magnitude()
	{
		float magnitude = std::sqrt(x * x + y * y + z * z);
		return magnitude;
	}

	// Normalize
	void Vec3::normalize()
	{
		float mag = std::sqrt(x * x + y * y + z * z);

		if (mag > 0.0f) {

			float oneOverMag = 1.0f / mag;

			x *= oneOverMag;
			y *= oneOverMag;
			z *= oneOverMag;
		}
	}
}
