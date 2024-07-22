#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * From "Simplifying Loop Invariant Generation using Splitter Predicates", Sharma et al. CAV'11
 */

/*@
requires n >= 0;
requires m >= 0;
requires m < n;
*/
void foo(int n, int m)
{
  assume(n>=0);
  assume(m>=0);
  assume(m<n);
  int x = 0; 
  int y = m;
  // invariant (x <= m || (x == y && x <= n))
  while(x < n) {
    x++;
    if(x > m) y++;
  }
  static_assert(y==n);
}
