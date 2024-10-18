#pragma once
#include "Vec2.h"
#include "Vec3.h"

#include <iostream>

namespace Quikmath {

	// Matrices can either be row major or column major. Mat3 is a column major matrix.
	// 0    3    6
	// 1    4    7
	// 2    5    8

	class Mat3
	{
	public:

		// Constructors
		Mat3();
		Mat3(float m0, float m3, float m6, 
			float m1, float m4, float m7, 
			float m2, float m5, float m8);
		// Copy Constructors
		Mat3& operator=(const Mat3& mat);

		// Destructor
		~Mat3();

		// Display
		void show();

		// Addition/Subtraction
		void operator+=(const Mat3& mat);
		Mat3 operator+(const Mat3& mat);

		void operator-=(const Mat3& mat);
		Mat3 operator-(const Mat3& mat);

		// Scalar Multiplication
		void operator*=(float s);
		Mat3 operator*(float s);

		// Matrix Multiplication
		void operator*=(const Mat3& mat);
		Mat3 operator*(const Mat3& mat);

		void setAsIdentity();
		void setAsInverseOf(const Mat3& mat);
		Mat3 getInverse() const;
		void invert();
		void setAsTransposeOf(const Mat3& mat);
		Mat3 getTranspose() const;

		Vec3 operator*(const Vec3& vec) const;
		Vec3 transformVec(const Vec3& vec) const;

	private:
	public:
		float matData[9] = { 0.0f };
	};
}

