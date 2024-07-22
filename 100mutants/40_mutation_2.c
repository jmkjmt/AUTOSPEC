#include <assert.h>
int unknown1();
int unknown2();

/*@
requires flag > 0;
*/
void foo(int flag) {
  int x, y, z;
  y = 1;
  if (flag) {
    x = 0;
  } else {
    x = 1;
  }

  // invariant (!flag || y - x == 1)
  while (unknown1()) {
    x += 2;
    if (x % 2 == 0) {
      y += 2;
    } else y++;
  }

  int m = 0;
  int n = 0;

  // invariant (!flog || m == n)
  while (unknown2()) {
    m++;
    n += (y - x);
  }
  if (flag) {
    static_assert(m == n);
  }
}
