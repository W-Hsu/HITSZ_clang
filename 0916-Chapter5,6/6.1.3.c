#include <stdio.h>

int main() {
    int k=4, n=0;
    for(n=0 ; n<k ; n++) {
        if (n%2 == 0) break;
        k--;
    }
    printf("k = %d ; n = %d\n", k, n);
    return 0;
}

// k = 4 ; n = 0
