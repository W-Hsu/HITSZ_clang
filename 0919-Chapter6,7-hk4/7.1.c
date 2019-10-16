#include <stdio.h>

int square(int i) {
    return i*i;
}

int main() {
    int i=0;
    i = square(i);
    for (; i<3 ; i++) {
        static int i=1;
        i += square(i);
        printf ("%d,", i);
    }
    printf ("%d\n", i);
    return 0;
}
