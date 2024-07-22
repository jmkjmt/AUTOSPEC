// Program to swap 2 elements of an array at the givem indices n1, n2

/*@
ensures \result == \old(arr[n1]) && \result == arr[n2];
ensures \forall integer i; 0 <= i < n && i != n1 && i != n2 ==> arr[i] == \old(arr[i]);
ensures arr[n2] == \old(arr[n1]);
ensures arr[n1] == \old(arr[n2]);
assigns arr[n1], arr[n2];
requires 0 <= n2 < n;
requires 0 <= n1 < n;
requires \valid(arr + (0..n-1));
*/
void array_swap(int* arr, int n, int n1, int n2) {
    int temp = arr[n1];
    arr[n1] = arr[n2];
    arr[n2] = temp;
}

// write a test
void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    array_swap(arr, 5, 0, 4);
    //@ assert arr[0] == 5;
    //@ assert arr[1] == 2;
    //@ assert arr[2] == 3;
    //@ assert arr[3] == 4;
    //@ assert arr[4] == 1;
}