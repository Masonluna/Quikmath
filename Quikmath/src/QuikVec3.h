#pragma once


namespace Quikmath {
	class QuikVec3
	{
	public:
		float x;
		float y;
		float z;

		QuikVec3();
		QuikVec3(float uX, float uY, float uZ);

		~QuikVec3();

		QuikVec3(const QuikVec3& vec);
		QuikVec3& operator=(const QuikVec3& vec);
	private:
	};
}

