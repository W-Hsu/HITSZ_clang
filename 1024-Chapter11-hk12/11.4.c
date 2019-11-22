#include <stdio.h>
#define N 12

void inputNumber(int *p, const char* prompt) {
    printf(prompt);
    while(!scanf("%d", p)) {
        printf(prompt);
        while(getchar()!='\n');
    }
    return;
}

void Transpose1(int _matrix[][N], int n) {
    int i=0, j=0;
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<n ; j++) printf ("%d ", _matrix[j][i]);
        putchar('\n');
    }
}

void Transpose2(int (*_matrix)[N], int n) {
    int i=0, j=0;
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<n ; j++) printf ("%d ", *(*(_matrix+j)+i));
        putchar('\n');
    }
}

void Transpose3(int *_matrix, int n) {
    int i=0, j=0;
    for (i=0 ; i<n*n ; i++) {
        printf ("%d ", *(_matrix+i));
        if (i+1%n==0) putchar('\n');
    }
}

int main() {
    int matrix[N][N];
    int i=0, j=0, n=0;
    inputNumber(&n, "input n > ");

    for (i=0 ; i<n ; i++) for (j=0 ; j<n ; j++)
        scanf("%d", &matrix[i][j]);
	
	printf("Transposed:\n");
    Transpose2(matrix, n);

    return 0;
}
