#include "vector2.h"

#include <cmath>

namespace door
{
Vector2 Vector2::Normalized() const
{
	float inv_sqrt = 1.f / std::sqrt(SqLength());
	return {x * inv_sqrt, y * inv_sqrt};
}
}  // namespace door
