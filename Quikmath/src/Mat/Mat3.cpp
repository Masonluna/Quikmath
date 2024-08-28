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
		// 0    3    6
		// 1    4    7
		// 2    5    8

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
}