#include <stdio.h>
#define N 12
#define M 12

void inputNumber(int *p, const char* prompt) {
    printf(prompt);
    while(!scanf("%d", p)) {
        printf(prompt);
        while(getchar()!='\n');
    }
    return;
}

void outputArray(int _output[][N], int m, int n) {
    int i=0, j=0;
    for (i=0 ; i<m ; i++) {
        for (j = 0; j < n; j++) printf("%d ", _output[i][j]);
        putchar('\n');
    }
}

void Transpose1(int _matrix[][N], int _transposed[][M], int m, int n) {
    int i=0, j=0;
    for (i=0 ; i<n ; i++) for (j=0 ; j<m ; j++) _transposed[i][j] =  _matrix[j][i];
    return;
}

void Transpose2(int (*_matrix)[N], int (*_transposed)[M], int m, int n) {
    int i=0, j=0;
    for (i=0 ; i<n ; i++) for (j=0 ; j<m ; j++) *(*(_transposed+i)+j) = *(*(_matrix+j)+i);
    return;
}

void Transpose3(int *_matrix, int *_transpose, int m, int n) {
    int i=0, j=0;
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<m ; j++) *(_transpose+(i*M)+j) = *(_matrix+(j*N)+i);
        if (i+1%n==0) putchar('\n');
    }
    return;
}

int main() {
    int matrix[M][N];
    int transposed[N][M];
    int i=0, j=0, m=0, n=0;
    inputNumber(&m, "input m > ");
    inputNumber(&n, "input n > ");

    for (i=0 ; i<m ; i++) for (j=0 ; j<n ; j++) scanf("%d", &matrix[i][j]);

    Transpose3(matrix, transposed, m, n);

    outputArray(transposed, n, m);

    return 0;
}
