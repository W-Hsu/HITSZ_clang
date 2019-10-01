#include <stdio.h>

int countFail(int a[], int stuNum, int passScore) {
    int i=0, count=0;
    for (i=0 ; i<stuNum ; i++) if (a[i]<passScore) count++;
    return count;
}

int main() {
    int stuScore[40], passScore=0, stuNum=0, i=0;
    printf("input student number > ");
    scanf("%d", &stuNum);
    printf("input pass score > ");
    scanf("%d", &passScore);
    printf("input scores > \n");
    for (i=0 ; i<stuNum ; i++) scanf("%d", &stuScore[i]);
    printf("Failed Students : %d\n", countFail(stuScore, stuNum, passScore));
    return 0;
}
