#include <stdio.h>

void myStrcat (char *dst, const char *src) {
    for (; *dst!='\0' ; dst++);
    for (; *src!='\0' ; src++) *(dst++) = *src;
    *dst = '\0';
    return;
}

int main() {
    char dst[100] = "Hello";
    char src[] = " World!";

    myStrcat(dst, src);
    puts(dst);

    return 0;
}
