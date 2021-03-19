#include "aabb.h"

#include <algorithm>

namespace door
{
void AABB::FromPoints(const std::vector<Vector2>& pts)
{
  if(pts.empty())
    return;

  // A bit crude, but it's fine.
  m_min = m_max = pts[0];
  for(auto& it = pts.begin() + 1; it != pts.end(); it++)
  {
    auto p = *it;
    m_min.x = std::min(m_min.x, p.x);
    m_min.y = std::min(m_min.y, p.y);
    m_max.x = std::max(m_max.x, p.x);
    m_max.y = std::max(m_max.y, p.y);
  }
}

void AABB::FromCircle(const Vector2& center, float radius)
{
  m_min = center - Vector2(radius);
  m_max = center + Vector2(radius);
}

bool AABB::Overlaps(AABB& other)
{
  return m_min.x < other.m_max.x &&
    m_max.x > other.m_min.x &&
    m_min.y < other.m_max.y &&
    m_max.y > other.m_min.y;
}
}
