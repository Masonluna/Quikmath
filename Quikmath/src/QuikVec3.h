#pragma once


namespace Quikmath {
	class QuikVec3
	{
	public:
		// Constructors
		QuikVec3();
		QuikVec3(float uX, float uY, float uZ);
		
		// Copy Constructors
		QuikVec3(const QuikVec3& vec);
		QuikVec3& operator=(const QuikVec3& vec);

		// Destructor
		~QuikVec3();

		// ---------- Operations ----------
		// Addition/Subtraction
		QuikVec3& operator+=(const QuikVec3& vec);
		QuikVec3 operator+(const QuikVec3& vec) const;

		QuikVec3& operator-=(const QuikVec3& vec);
		QuikVec3 operator-(const QuikVec3& vec) const;
		
		// Scalar Multiplication/Division
		QuikVec3& operator*=(const float n);
		QuikVec3 operator*(const float n) const;

		QuikVec3& operator/=(const float n);
		QuikVec3 operator/(const float n) const;

		// Dot/Cross
		float dot(const QuikVec3& vec) const;
		QuikVec3 cross(const QuikVec3& vec) const;

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

