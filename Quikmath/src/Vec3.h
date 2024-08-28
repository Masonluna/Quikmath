#pragma once
#include <cmath>

namespace Quikmath {
	class Vec3
	{
	public:
		// Constructors
		Vec3();
		Vec3(float uX, float uY, float uZ);
		
		// Copy Constructors
		Vec3(const Vec3& vec);
		Vec3& operator=(const Vec3& vec);

		// Destructor
		~Vec3();

		// ---------- Operations ----------
		// Addition/Subtraction
		Vec3& operator+=(const Vec3& vec);
		Vec3 operator+(const Vec3& vec) const;

		Vec3& operator-=(const Vec3& vec);
		Vec3 operator-(const Vec3& vec) const;
		
		// Scalar Multiplication/Division
		Vec3& operator*=(const float n);
		Vec3 operator*(const float n) const;

		Vec3& operator/=(const float n);
		Vec3 operator/(const float n) const;

		// Dot/Cross
		float dot(const Vec3& vec) const;
		Vec3 cross(const Vec3& vec) const;

		// Magnitude
		float magnitude();

		// Normalize
		void normalize();
	private:

	public:
		float x;
		float y;
		float z;
	};
}

