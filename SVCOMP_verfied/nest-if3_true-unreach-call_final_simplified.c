#include <limits.h>
#include "assert.h"

int unknown1();

/*@
requires l > 0;
requires l < INT_MAX;
requires n < INT_MAX;
*/
void foo(int n, int l) {
  int i,k;
  //int n,l;
  /*@
  loop invariant 1 <= l;
  loop invariant 1 <= k;
  loop assigns l;
  loop assigns k;
  loop assigns i;
  */
  for (k = 1; k < n; k++){
    /*@
    loop invariant 1 <= i;
    loop assigns i;
    */
    for (i = l; i < n; i++){  
      //@ assert 1 <= i;
    }
    if(unknown1()) {
      l = l + 1;
    }
  }
 }