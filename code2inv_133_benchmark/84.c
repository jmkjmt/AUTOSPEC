int main() {
  int x = -50;
  int y = 0;

  while (x < 0) {
    x  = x + y;
    y  = y + 1;
  }
  // post-condition
  assert(y > 0);
}
