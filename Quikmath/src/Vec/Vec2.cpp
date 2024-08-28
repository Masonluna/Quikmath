#include "Vec2.h"

namespace Quikmath {

	Vec2::Vec2() : x(0), y(0)
	{};

	Vec2::Vec2(float uX, float uY) : x(uX), y(uY)
	{}

	Vec2::Vec2(const Vec2& vec) : x(vec.x), y(vec.y)
	{}

	Vec2& Vec2::operator=(const Vec2& vec)
	{
		x = vec.x;
		y = vec.y;

		return *this;
	}

	Vec2::~Vec2()
	{}

	Vec2& Vec2::operator+=(const Vec2& vec)
	{
		x += vec.x;
		y += vec.y;

		return *this;
	}

	Vec2 Vec2::operator+(const Vec2& vec) const
	{
		return Vec2(x + vec.x, y + vec.y);
	}

	Vec2& Vec2::operator-=(const Vec2& vec)
	{
		x -= vec.x;
		y -= vec.y;

		return *this;
	}

	Vec2 Vec2::operator-(const Vec2& vec) const
	{
		return Vec2(x - vec.x, y - vec.y);
	}

	Vec2& Vec2::operator*=(const float n)
	{
		x *= n;
		y *= n;

		return *this;
	}

	Vec2 Vec2::operator*(const float n) const
	{
		return Vec2(x * n, y * n);
	}

	Vec2& Vec2::operator/=(const float n)
	{
		x /= n;
		y /= n;

		return *this;
	}

	Vec2 Vec2::operator/(const float n) const
	{
		return Vec2(x / n, y / n);
	}

	float Vec2::dot(const Vec2& vec) const
	{
		return x * vec.x + y * vec.y;
	}

	float Vec2::cross(const Vec2& vec) const
	{
		return x * vec.y - y * vec.x;
	}

	float Vec2::magnitude()
	{
		return std::sqrt(x * x + y * y);
	}

	void Vec2::normalize()
	{
		float mag = std::sqrt(x * x + y * y);

		if (mag > 0.0f) {
			float oneOverMag = 1.0f / mag;

			x *= oneOverMag;
			y *= oneOverMag;
		}
	}
}