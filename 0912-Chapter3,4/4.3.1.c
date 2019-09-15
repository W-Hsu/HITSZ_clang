#include <stdio.h>

int main() {
    char a, b;
    int c;
    scanf("%c%*c%c%*c%d", &a, &b, &c);
    printf("%-2c,%-2c,%d", a, b, c);
    return 0;
}
