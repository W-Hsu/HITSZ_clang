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
	int cmain=0, crvs=0;
    printf("input rank > ");
    scanf("%d", &rank);
    const int _rank = rank;
    int mat[_rank*_rank];
    for (i=0 ; i<_rank*_rank ; i++) scanf("%d", &mat[i+j]);
	cmain = calculate_main(mat, _rank);
	crvs = calculate_reverse(mat, _rank);
    printf("%d + %d = %d\n", cmain, crvs, cmain+crvs);
    return 0;
}
