/*@
requires x == n;
requires n >= 0;
*/
void foo(int x, int n) {
  // loop body
  while (x > 1) {
    x  = x - 1;
  }
  // post-condition
  if (n >= 0) {
    assert(x == 1);
  }
}