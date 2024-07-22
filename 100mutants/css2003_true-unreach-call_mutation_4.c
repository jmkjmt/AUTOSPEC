// Source: Michael Colon, Sriram Sankaranarayanan, Henny Sipma: "Linear
// Invariant Generation using Non-Linear Constraint Solving", CAV 2003.
#include "assert.h"
# define LARGE_INT 1000000

/*@ 
requires 0 <= k && k <= 1;
*/
int foo(int k) {
    int i,j;
    i = 1;
    j = 1;
    k = __VERIFIER_nondet_int();
    __VERIFIER_assume(k <= 1 && 0 <= k);
    // invariant (i + k <= 2 && i + k >=1 && i >=1)
    while (i < LARGE_INT) {
        i = i + 1;
        j = j + k;
        k = k - 1;
        __VERIFIER_assert(1 <= i + k && i + k <= 2 && i >= 1);
    }
    return 0;
}
