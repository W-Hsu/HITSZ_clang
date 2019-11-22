#include <stdio.h>

void inputArray(int*, int);
void outputArray(int*, int);

int main() {
    int a[5];
    printf ("input 5 num > ");
    inputArray(a, 5);
    outputArray(a, 5);
    return 0;
}

void inputArray(int *pa, int n) {
    int *__pa = pa;
    for (; pa<__pa+n ; pa++) scanf ("%d", pa);
}

void outputArray(int *pa, int n) {
    int *__pa = pa;
    for (; pa<__pa+n ; pa++) printf ("%4d", *pa);
    putchar('\n');
}