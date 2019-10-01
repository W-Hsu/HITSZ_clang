#include <stdio.h>
#include <string.h>

void outputYangHui() {
    int YangHui[7][7];
    int i=0, j=0;
    memset(YangHui, 0, sizeof(YangHui));
    for (i=0 ; i<7 ; i++) {
        YangHui[i][0] = 1;
        YangHui[i][i] = 1;
    }
    for (i=2 ; i<7 ; i++) for (j=1 ; j<i ; j++)
        YangHui[i][j] = YangHui[i-1][j-1] + YangHui[i-1][j];
    
    for (i=0 ; i<7 ; i++) {
        for (j=0 ; j<=i ; j++)
            printf ("%-3d ", YangHui[i][j]);
        putchar('\n');
    }
}

int main() {
    outputYangHui();
    return 0;
}
