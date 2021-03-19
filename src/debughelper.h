#ifndef DBGHELPER_H_
#define DBGHELPER_H_

namespace door
{
void ReportAssertFailure(const char* msg, const char* filename, int line);
}

// Warning: the condition is only evaluated in debug builds!
#ifdef _DEBUG
#define DOOR_ASSERT(cond) do { \
  if(!(cond)) door::ReportAssertFailure(#cond, __FILE__, __LINE__); \
} while(0)
#else
#define DOOR_ASSERT(cond) ((void)0)
#endif

#endif // DBGHELPER_H_
