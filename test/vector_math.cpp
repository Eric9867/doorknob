#include <cmath>

#include "vector2.h"
#include "matrix2.h"

#include "gtest/gtest.h"

constexpr auto PI = 3.14159265358979f;

TEST(VectorMath, VectorAddition)
{
	door::Vector2 a(1, 2);
	door::Vector2 b(-101, 25);
	auto res = a + b;
	EXPECT_FLOAT_EQ(-100, res.x);
	EXPECT_FLOAT_EQ(27, res.y);
}

TEST(VectorMath, MatVecRot)
{
	door::Matrix2 m(std::cos(PI / 2), -std::sin(PI / 2), std::sin(PI / 2), std::cos(PI / 2));
	door::Vector2 v(1, 0);
	auto res = m * v;
	EXPECT_NEAR(0, res.x, 0.00001);
	EXPECT_NEAR(1, res.y, 0.00001);
}
