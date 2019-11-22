#include <stdio.h>

void inputNumber(int *p, const char* prompt) {
    printf(prompt);
    while(!scanf("%d", p)) {
        printf(prompt);
        while(getchar()!='\n');
    }
    return;
}

int main() {
    char *a[] = {NULL, "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int i=0;
    inputNumber(&i, "Input Month # > ");

    if (i<=12 && i>=1) puts(a[i]);
    else puts("Illegal Month.");

    return 0;
}
