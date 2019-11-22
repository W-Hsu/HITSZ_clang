#include <stdio.h>
#include <limits.h>
#define M 12

void inputNumber(int *p, const char* prompt) {
    printf(prompt);
    while(!scanf("%d", p)) {
        printf(prompt);
        while(getchar()!='\n');
    }
    return;
}

void inputArray(int *_input, int m, int n) {
    int i=0, j=0;
    for (i=0 ; i<m ; i++) for (j = 0; j < n; j++) inputNumber(_input+M*i+j, "");
    return;
}

int findMax(int *_array, int m, int n, int *pRow, int *pCol) {
    int max = INT_MIN, i=0, j=0;
    for (i=0 ; i<m ; i++) for (j = 0; j < n; j++) if (*(_array+M*i+j)>max) {
        max = *(_array+M*i+j);
        *pCol = j;
        *pRow = i;
    }
    return max;
}

int main() {
    int col=0, row=0,
        m=0, n=0,
        array[M][M]={0};
    inputNumber(&m, "input m > ");
    inputNumber(&n, "input n > ");

    inputArray(array, m, n);

    printf ("%d at pos ", findMax(array, m, n, &row, &col));
    printf ("(row: %d, col: %d)\n", row, col);

    return 0;
}