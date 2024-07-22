/*@
assigns \nothing;
ensures \result == 0;
requires !(a + b + c == 180);
assigns \nothing;
ensures \result == 1;
requires a > 0 && b > 0 && c > 0;
requires a + b + c == 180;
*/
int triangle(int a, int b, int c) {
    if ((a+b+c == 180) && a > 0 && b > 0 && c > 0) {
        return 1;
    } else {
        return 0;
    }
}

void check_validity() {
    int res = triangle(90, 45, 45);
    //@ assert res == 1;
    res = triangle(90, 145, 145);
    //@ assert res == 0;
}
