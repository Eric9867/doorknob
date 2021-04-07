#ifndef BODY_H_
#define BODY_H_

#include "geometry.h"
#include "vector2.h"

namespace door
{
class Body
{
public:
	Body(float mass_, Vector2 position_, Vector2 velocity_, Geometry geom_)
	    : mass(mass_), position(position_), velocity(velocity_), geom(geom_);

	float GetAngle() { return angle; }
	Vector2 GetPos() { return position; }

private:
	Vector2 position;
	Vector2 velocity = Vector2({0, 0});
	float angle = 0;
	float angular_v = 0;
	float mass;
	Geometry geom;
};

}  // namespace door

#endif  // BODY_H_
