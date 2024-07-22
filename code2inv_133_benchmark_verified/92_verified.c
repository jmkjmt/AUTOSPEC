int main(){

    int x = 0;
    int y = 0;

    /*@
    loop invariant x == 0;
    loop invariant \forall integer k; 0<= k < x ==> y >= 0;
    loop invariant 0 <= y;
    loop invariant 0 <= x;
    loop assigns y;
    loop assigns x;
    */
    while(y >= 0){
        y = y + x;
    }

    //post-condition
    //@ assert  y >= 0;
}
