/*@
requires n > 0;
*/
void foo(int n) {
  int c = 0;
  assume((n > 0));
  
  while (unknown()) {
    if (unknown()) {
      if (c != n)
      {
        c = c + 1;
      }
    } else {
      if (c == n)
      {
        c = 1;
      }
    }
  }
  // post-condition
  if (n > -1){
    assert(c != n);
  }

}
