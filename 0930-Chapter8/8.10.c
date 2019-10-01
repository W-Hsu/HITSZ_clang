#include <stdio.h>

int calculate_main(int* mat, int rank) {
    int result=0, i=0, j=0;
    for (i=0 ; i<rank*rank ; i+=rank) result += mat[i+(j++)];
    return result;
}

int calculate_reverse(int* mat, int rank) {
    int result=0, i=0, j=rank-1;
    for (i=0 ; i<rank*rank ; i+=rank) result += mat[i+(j--)];
    return result;
}

int main() {
    int rank=0, i=0, j=0;
    printf("input rank > ");
    scanf("%d", &rank);
    const int _rank = rank;
    int mat[_rank*_rank];
    for (i=0 ; i<_rank*_rank ; i++) scanf("%d", &mat[i+j]);
    printf("%d %d\n", calculate_main(mat, _rank), calculate_reverse(mat, _rank));
    return 0;
}
