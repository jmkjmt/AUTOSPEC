#include <limits.h>

/* 1. FUNC CONTRACT */
int add(int *p, int *q) {
    return *p + *q;
}

/* 2. FUNC CONTRACT */
int main() {
    int a = 24;
    int b = 32;
    int x;

    x = add(&a, &b) ;
    //@ assert x == a + b ;
    //@ assert x == 56 ;

    x = add(&a, &a) ;
    //@ assert x == a + a ;
    //@ assert x == 48 ;
}