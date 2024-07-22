/*@
requires 1 <= n;
*/
void foo(int n) {
  int i = 1;
  int sn = 0;
  
  while (i <= n) {
    i  = i + 1;
    sn  = sn + 1;
  }
  // post-condition
  if (sn != n) {
    assert(sn == 0);
  }
}
