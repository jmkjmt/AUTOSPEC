int main() {
  int i = 1;
  int sn = 0;
  
  while (i <= 8) {
    i  = i + 1;
    sn  = sn + 1;
  }
  // post-condition
  if (sn != 0) {
    assert(sn == 8);
  }
}
