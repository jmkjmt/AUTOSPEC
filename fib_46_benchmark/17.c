#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void foo(int n)
{
 int k=1;
 int i=1;
 int j=0;
 // invariant (i <= n && k >= i)
 while(i < n) {
  j = 0;
  while(j < i) {
      k += (i-j);
      j++;
  }
  i++;
 }
 static_assert(k >= n);
 
}
