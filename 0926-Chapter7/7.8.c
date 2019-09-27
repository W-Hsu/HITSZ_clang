#include <stdio.h>

int main() {
    int x=1;
    int operate=0;
    int i=0;
    
    for (x=1 ; ; x++) {
        operate = x;
        
        for (i=1 ; i<=5 ; i++) {
            if (operate%4!=0) goto NEXTSTEP;
            operate = operate / 4 * 5 + 1;
        }
        break;
    NEXTSTEP:
        ;
//        putchar('n');putchar('\n');
    }
    printf ("%d\n", operate);
    return 0;
}
