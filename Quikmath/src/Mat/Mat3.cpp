#include "Mat3.h"

namespace Quikmath {

	// Constructors
	Mat3::Mat3()
	{
		// Default to Identity matrix
		for (int i = 0; i < 9; i++)
		{
			matData[i] = 0;
		}
		matData[0] = matData[4] = matData[8] = 1.0f;
	
	}

	Mat3::Mat3(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8)
	{

		matData[0] = m0;
		matData[3] = m3;
		matData[6] = m6;

		matData[1] = m1;
		matData[4] = m4;
		matData[7] = m7;

		matData[2] = m2;
		matData[5] = m5;
		matData[8] = m8;


	}

	// Copy Constructor

	Mat3& Mat3::operator=(const Mat3& mat)
	{
		for (int i = 0;  i < 9;  i++)
		{
			matData[i] = mat.matData[i];
		}

		return *this;
	}

	// Destructor
	Mat3::~Mat3()
	{}

	// Display
	void Mat3::show()
	{
		std::cout << "[" << matData[0] << "," << matData[3] << "," << matData[6] << "," << std::endl;
		std::cout << matData[1] << "," << matData[4] << "," << matData[7] << "," << std::endl;
		std::cout << matData[2] << "," << matData[5] << "," << matData[8] << "]" << std::endl;
	}

	// Addition/Subtraction
	void Mat3::operator+=(const Mat3& mat)
	{
		for (int i = 0; i < 9; i++) {
			matData[i] += mat.matData[i];
		}
	}

	Mat3 Mat3::operator+(const Mat3& mat)
	{
		return Mat3(
			matData[0] + mat.matData[0], matData[3] + mat.matData[3], matData[6] + mat.matData[6],
			matData[1] + mat.matData[1], matData[4] + mat.matData[4], matData[7] + mat.matData[7],
			matData[2] + mat.matData[2], matData[5] + mat.matData[5], matData[8] + mat.matData[8]);
	}

	void Mat3::operator-=(const Mat3& mat)
	{
		for (int i = 0; i < 9; i++) {
			matData[i] -= mat.matData[i];
		}
	}

	Mat3 Mat3::operator-(const Mat3& mat)
	{
		return Mat3(
			matData[0] - mat.matData[0], matData[3] - mat.matData[3], matData[6] - mat.matData[6],
			matData[1] - mat.matData[1], matData[4] - mat.matData[4], matData[7] - mat.matData[7],
			matData[2] - mat.matData[2], matData[5] - mat.matData[5], matData[8] - mat.matData[8]);
	}

	// Scalar Multiplication/Division
	void Mat3::operator*=(float s)
	{
		for (int i = 0; i < 9; i++) {
			matData[i] *= s;
		}
	}

	Mat3 Mat3::operator*(float s)
	{
		return Mat3(
			matData[0] * s, matData[3] * s, matData[6] *  s,
			matData[1] * s, matData[4] * s, matData[7] *  s,
			matData[2] * s, matData[5] * s, matData[8] *  s);
	}

	void Mat3::operator*=(const Mat3& mat)
	{
		// 0, 3, 6
		// 1, 4, 7
		// 2, 5, 8
		float t1 = matData[0] * mat.matData[0] + matData[3] * mat.matData[1] + matData[6] * mat.matData[2];
		float t2 = matData[0] * mat.matData[3] + matData[3] * mat.matData[4] + matData[6] * mat.matData[5];
		float t3 = matData[0] * mat.matData[6] + matData[3] * mat.matData[7] + matData[6] * mat.matData[8];

		matData[0] = t1;
		matData[3] = t2;
		matData[6] = t3;

		t1 = matData[1] * mat.matData[0] + matData[4] * mat.matData[1] + matData[7] * mat.matData[2];
		t2 = matData[1] * mat.matData[3] + matData[4] * mat.matData[4] + matData[7] * mat.matData[5];
		t3 = matData[1] * mat.matData[6] + matData[4] * mat.matData[7] + matData[7] * mat.matData[8];

		matData[1] = t1;
		matData[4] = t2;
		matData[7] = t3;

		t1 = matData[2] * mat.matData[0] + matData[5] * mat.matData[1] + matData[8] * mat.matData[2];
		t2 = matData[2] * mat.matData[3] + matData[5] * mat.matData[4] + matData[8] * mat.matData[5];
		t3 = matData[2] * mat.matData[6] + matData[5] * mat.matData[7] + matData[8] * mat.matData[8];

		matData[2] = t1;
		matData[5] = t2;
		matData[8] = t3;
	}

	Mat3 Mat3::operator*(const Mat3& mat)
	{
		Mat3 m;
		float t1 = matData[0] * mat.matData[0] + matData[3] * mat.matData[1] + matData[6] * mat.matData[2];
		float t2 = matData[0] * mat.matData[3] + matData[3] * mat.matData[4] + matData[6] * mat.matData[5];
		float t3 = matData[0] * mat.matData[6] + matData[3] * mat.matData[7] + matData[6] * mat.matData[8];

		m.matData[0] = t1;
		m.matData[3] = t2;
		m.matData[6] = t3;

		t1 = matData[1] * mat.matData[0] + matData[4] * mat.matData[1] + matData[7] * mat.matData[2];
		t2 = matData[1] * mat.matData[3] + matData[4] * mat.matData[4] + matData[7] * mat.matData[5];
		t3 = matData[1] * mat.matData[6] + matData[4] * mat.matData[7] + matData[7] * mat.matData[8];

		m.matData[1] = t1;
		m.matData[4] = t2;
		m.matData[7] = t3;

		t1 = matData[2] * mat.matData[0] + matData[5] * mat.matData[1] + matData[8] * mat.matData[2];
		t2 = matData[2] * mat.matData[3] + matData[5] * mat.matData[4] + matData[8] * mat.matData[5];
		t3 = matData[2] * mat.matData[6] + matData[5] * mat.matData[7] + matData[8] * mat.matData[8];

		m.matData[2] = t1;
		m.matData[5] = t2;
		m.matData[8] = t3;

		return m;
	}
	void Mat3::setAsIdentity()
	{
		for (int i = 0; i < 9; i++) {
			matData[i] = 0.0f;
		}

		matData[0] = 1.0f;
		matData[4] = 1.0f;
		matData[8] = 1.0f;
	}

	void Mat3::setAsInverseOf(const Mat3& mat)
	{
		float t1 = mat.matData[0] * mat.matData[4];
		float t2 = mat.matData[0] * mat.matData[7];
		float t3 = mat.matData[3] * mat.matData[1];
		float t4 = mat.matData[6] * mat.matData[1];
		float t5 = mat.matData[3] * mat.matData[2];
		float t6 = mat.matData[6] * mat.matData[2];

		float det = (t1 * mat.matData[8] - t2 * mat.matData[5] - t3 * mat.matData[8] + t4 * mat.matData[5] + t5 * mat.matData[7] - t6 * mat.matData[4]);

		if (det == 0.0) return;

		float invd = 1.0f / det;

		float m0 = (mat.matData[4] * mat.matData[8] - mat.matData[7] * mat.matData[5]) * invd;
		float m3 = -(mat.matData[3] * mat.matData[8] - mat.matData[6] * mat.matData[5]) * invd;
		float m6 = (mat.matData[3] * mat.matData[7] - mat.matData[6] * mat.matData[4]) * invd;

		float m1 = -(mat.matData[1] * mat.matData[8] - mat.matData[7] * mat.matData[2]) * invd;
		float m4 = (mat.matData[0] * mat.matData[8] - t6) * invd;
		float m7 = -(t2 - t4) * invd;

		float m2 = (mat.matData[1] * mat.matData[5] - mat.matData[4] * mat.matData[2]) * invd;
		float m5 = -(mat.matData[0] * mat.matData[5] - t5) * invd;
		float m8 = (t1 - t3) * invd;

		matData[0] = m0;
		matData[3] = m3;
		matData[6] = m6;
		matData[1] = m1;
		matData[4] = m4;
		matData[7] = m7;
		matData[2] = m2;
		matData[5] = m5;
		matData[8] = m8;
	}

	Mat3 Mat3::getInverse() const
	{
		Mat3 temp;
		temp.setAsInverseOf(*this);
		return temp;
	}

	void Mat3::invert()
	{
		setAsInverseOf(*this);
	}
	void Mat3::setAsTransposeOf(const Mat3& mat)
	{
		matData[0] = mat.matData[0];
		matData[3] = mat.matData[1];
		matData[6] = mat.matData[2];

		matData[1] = mat.matData[3];
		matData[4] = mat.matData[4];
		matData[7] = mat.matData[5];

		matData[2] = mat.matData[6];
		matData[5] = mat.matData[7];
		matData[8] = mat.matData[8];
	}
	Mat3 Mat3::getTranspose() const
	{
		Mat3 temp;
		temp.setAsTransposeOf(*this);
		return temp;
	}
	Vec3 Mat3::operator*(const Vec3& vec) const
	{
		return Vec3(matData[0] * vec.x + matData[3] * vec.y + matData[6] + vec.z,
					matData[1] * vec.x + matData[4] * vec.y + matData[7] * vec.z,
					matData[2] * vec.x + matData[5] * vec.y + matData[8] * vec.z);
	}
	Vec3 Mat3::transformVec(const Vec3& vec) const
	{
		return (*this) * vec;
	}
}