#include <algorithm>
#include "aabb.h"
#include "body.h"
#include "geometry.h"

namespace door
{
void Circle::UpdateAABB()
{
	Vector2 dist = Vector2(radius, radius);
	Vector2 pos = parent->GetPos();
	m_aabb = {pos - dist, pos + dist};
}

void Box2::UpdateAABB()
{
	float theta = parent->GetAngle();
	Vector2 pos = parent->GetPos();
	/* lower right corner */
	Vector2 corner_1 = {width / 2, -height / 2};
	/* upper right corner */
	Vector2 corner_2 = {width / 2, height / 2};
	corner_1.Rotate(theta);
	corner_2.Rotate(theta);

	float x_dist = std::max(std::abs(corner_1.x), std::abs(corner_2.x));
	float y_dist = std::max(std::abs(corner_1.y), std::abs(corner_2.y));
	Vector2 dist = Vector2(x_dist, y_dist);

	m_aabb = {pos - dist, pos + dist};
}

}  // namespace door
