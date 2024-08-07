#include <limits.h>
#include "assert.h"

int __BLAST_NONDET;

/*@
requires INT_MIN < n && n < INT_MAX;
requires INT_MIN < m && m < INT_MAX;
requires INT_MIN < l && l < INT_MAX;
*/
int foo(int n, int m , int l) {
    int i,j,k;
    //int n,l,m;
    if(3*n<=m+l); else goto END;
    /*@
    loop invariant 0 <= i;
    loop assigns k;
    loop assigns j;
    loop assigns i;
    */
    for (i=0;i<n;i++)
        /*@
        loop invariant i <= n;
        loop invariant 2*i <= j;
        loop invariant 0 <= i;
        loop assigns k;
        loop assigns j;
        loop assigns i;
        */
        for (j = 2*i;j<3*i;j++)
            /*@
            loop assigns k;
            */
            for (k = i; k< j; k++) {
                //@ assert  k-i <= 2*n ;
            }
END:
    return 0;
}