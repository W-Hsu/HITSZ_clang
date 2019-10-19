#include <stdio.h>

char *myStrcpy(char *dst, const char *src) {
    do {
        *dst++ = *src;
    } while (*src++ != '\0');
    return dst;
}

int main() {
    char a[20];
    myStrcpy(a, "Hello World!");
    printf ("%s", a);
    return 0;
}