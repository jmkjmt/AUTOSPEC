#include <assert.h>

int unknown3();
int unknown4();
int unknown2();
int unknown1();

/*
 * ex49 from NECLA Static Analysis Benchmarks
 */
/*@
requires n >= 0;
*/
void foo(int n) {
  assume(n >= 0);
  int sum = 0, i;

  // invariant (0 <= i && i <= n && sum = i * (i + 1) / 2) 
  for (i = 0; i < n; ++i)
    sum = sum + i;

  static_assert(sum >= 0);
}
