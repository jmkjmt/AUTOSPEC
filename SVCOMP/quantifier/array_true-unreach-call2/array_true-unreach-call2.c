#include "assert.h"

#define SZ 2048

int main(void) {
  int A[SZ];
  int B[SZ];
  int i;
  int tmp;

  // invariant (forall i: 0 <= i && i < SZ => B[i] == A[i])
  for (i = 0; i < SZ; i++) {
    tmp = A[i];
    B[i] = tmp;
  }

  __VERIFIER_assert(A[SZ/2] == B[SZ/2]);
}