int main() {
  int sn = 0;
  int x = 0;
  
  while (unknown()) {
    x = x + 1;
    sn = sn + 1;
  }
  // post-condition
  if(sn != x) {
    assert(sn == -1);
  }
}
