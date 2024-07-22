#include <assert.h>
/*@
ensures \result >= 0;
*/
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Adapted from "Automated Error Diagnosis Using Abductive Inference" by Dillig et al.
 */
/*@
requires n > 0;
*/
void foo(int n, int flag) {
  assume(n >= 0);
  int k = 1;
  if (flag) {
    k = unknown1();
    assume(k >= 0);
  }
  int i = 0, j = 0;
  // invariant (0 < i && i <= n + 1)
  // invariant (0 <= j && j = i * (i + 1) / 2)
  while (i <= n) {
    i++;
    j += i;
  }
  int z = k + i + j;
  static_assert(z > 2 * n);
}