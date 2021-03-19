#include "debughelper.h"

#include <cstdlib>
#include <cstdio>

namespace door
{
void ReportAssertFailure(const char* msg, const char* filename, int line)
{
  std::fprintf(stderr, "%s:%d - Assertion \"%s\" failed\n", filename, line, msg);
  std::abort();
}
}
