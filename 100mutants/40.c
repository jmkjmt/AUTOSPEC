#include <assert.h>
int unknown1();
int unknown2();

/*@
requires flag > 0;
*/
void foo(int flag) {
  int i, j, k;
  j = 1;
  if (flag) {
    i = 0;
  } else {
    i = 1;
  }

  // invariant (!flag || j - i == 1)
  while (unknown1()) {
    i += 2;
    if (i % 2 == 0) {
      j += 2;
    } else j++;
  }

  int a = 0;
  int b = 0;

  // invariant (!flog || a == b)
  while (unknown2()) {
    a++;
    b += (j - i);
  }
  if (flag) {
    static_assert(a == b);
  }
}