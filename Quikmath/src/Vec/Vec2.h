#pragma once
#include <cmath>
namespace Quikmath {

	class Vec2
	{
	public:
		// Constructors
		Vec2();
		Vec2(float uX, float uY);

		// Copy Constructors
		Vec2(const Vec2& vec);
		void operator=(const Vec2& vec);

		// Destructor
		~Vec2();

		// ---------- Operations ----------
		// Addition/Subtraction
		void operator+=(const Vec2& vec);
		Vec2 operator+(const Vec2& vec) const;

		void operator-=(const Vec2& vec);
		Vec2 operator-(const Vec2& vec) const;

		// Scalar Multiplication/Division
		void operator*=(const float n);
		Vec2 operator*(const float n) const;

		void operator/=(const float n);
		Vec2 operator/(const float n) const;

		// Dot/Cross
		float dot(const Vec2& vec) const;
		// Returns length of Vec3(x, y, 0) cross (Vec3(vec.x, vec.y, 0))
		float Vec2::cross(const Vec2& vec) const;

		// Magnitude
		float magnitude();

		// Normalize
		void normalize();

	private:
	public:
		float x, y;
	};
}

