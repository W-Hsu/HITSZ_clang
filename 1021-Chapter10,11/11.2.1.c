#include <stdio.h>

void print(char *arr[], int);

int main() {
    char *pArray[] = {"How", "are", "you"};

    int num = sizeof(pArray) / sizeof(char*);

    printf ("Total strnum : %d\n", num);

    print (pArray, num);
}

void print(char *arr[], int len) {
    int i;
    for (i=0 ; i<len ; i++) printf ("%s ", arr[i]);
    putchar('\n');
}
