#ifndef WORLD_H_
#define WORLD_H_

#include "broadphase.h"

namespace door
{
class World
{
public:
	void SetBroadPhase(BroadPhase& bp)
	{
		m_bp = &bp;
	}

private:
	BroadPhase* m_bp = nullptr;
	std::vector<Body> m_bodies;
};
}  // namespace door

#endif  // WORLD_H_
