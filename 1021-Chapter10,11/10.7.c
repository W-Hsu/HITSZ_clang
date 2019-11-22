#include <stdio.h>
#include <string.h>

void reverse_by_pointer (char *dst, const char *src) {
    int i=0;
    for (i=strlen(src)-1 ; i>=0 ; i--) {
        *(dst++) = *(src+i);
    }
    *dst = '\0';
    return;
}

void reverse_by_array (char *dst, const char *src) {
    int i=0, j=0;
    for (i=strlen(src)-1, j=0 ; i>=0 ; i--) dst[j++] = src[i];
    dst[j] = '\0';
    return;
}

int main() {
    char str[100] = {0};
    char dst[100] = {0};
    fgets (str, 100, stdin);

    /* Calculate length and Get rid of '\n' */
    int len = 0;
    for (len=0 ; str[len]!='\n' && str[len]!='\0' ; len++);
    str[len] = '\0';

    reverse_by_array(dst, str);
    puts(str);
    puts(dst);

    return 0;
}
