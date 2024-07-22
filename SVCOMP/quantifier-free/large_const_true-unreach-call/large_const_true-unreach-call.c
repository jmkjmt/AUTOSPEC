#include "assert.h"

/*@
requires 0 <= n && n < 2;
requires 0 <= v;
*/
int foo(int n, int v) {
  int c1 = 4000;
  int c2 = 2000;
  int c3 = 10000;
  //int n, v;
  int i, k, j;

  n = __VERIFIER_nondet_int();
  __VERIFIER_assume(0 <= n && n < 10);

  k = 0;
  i = 0;
  // invariant ( k >= i * c2)
  while( i < n ) {
    i++;
    v = __VERIFIER_nondet_int();
    __VERIFIER_assume(0 <= v && n < 2);
    if( v == 0 )
      k += c1;
    else if( v == 1 )
      k += c2;
    else
      k += c3;
  }

  j = 0;
  // invariant (k + j >= n * c2)
  while( j < n ) {
    __VERIFIER_assert(k > 0);
    j++;
    k--;
  }

  return 0;
}