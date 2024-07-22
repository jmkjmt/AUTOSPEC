#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * From "The Octagon Abstract Domain" HOSC 2006 by Mine.
 */

int main() {
  int a = 0;
  int j;
  int m;
  if(m<=0)
    return 0;
  // invariant (1 <= j && j <= m + 1 && a <= (j-1) && a >= -(j-1))
  for(j = 1; j <= m ; j++){
    if(unknown1()) 
       a++;
    else
       a--; 
  }
  static_assert(a>=-m);
  static_assert(a<=m);
}
