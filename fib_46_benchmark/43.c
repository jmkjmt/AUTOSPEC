#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Based on ex16 from NECLA Static Analysis Benchmarks
 */

int foo(int x, int y)
{
  int i=0;
  int t=y;
   
  if (x==y) return x;
  
  // invariant (y >= t)
  while (unknown1()){
    if (x > 0)   
      y = y + x;
  }
   
  static_assert(y >= t);
  return 0;
}


