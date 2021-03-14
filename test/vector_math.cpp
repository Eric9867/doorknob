#include "vector2.h"
#include "matrix2.h"
#include <cmath>
#include "gtest/gtest.h"

#define PI 3.14159265358979

TEST(Vector2, VectorAddition1)
{
	Vector2 vec1(1,2);
	Vector2 vec2(-101,25);
	Vector2 vec3 = vec1 + vec2;
	EXPECT_FLOAT_EQ(-100, vec3.x);
	EXPECT_FLOAT_EQ(27, vec3.y);
}

TEST(Matrix2, VectorRotation)
{
	Matrix2 mat(std::cos(PI/2), - std::sin(PI/2), std::sin(PI/2), std::cos(PI/2));
	Vector2 vec1(1, 0);
	vec1 = mat*vec1;
	EXPECT_NEAR(0, vec1.x, 0.00001);
	EXPECT_NEAR(1, vec1.y, 0.00001);
}
