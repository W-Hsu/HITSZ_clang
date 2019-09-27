#include <stdio.h>
#include <stdbool.h>
const bool TRUE = 1;
const bool FALSE = 0;

int step=0;

void Hanoi(int rank, bool moved) {
    step++;
    bool i=0; // Show whether the one on buttom has been moved
    
    if (rank != 1)
        Hanoi(rank-1, i);
    
    if (!moved)
        printf("Put the No.%d one to stick B.\n", rank);
    else
        printf("Put the No.%d one to stick C.\n", rank);
    
    i = 1;
    if (rank!=1)
        Hanoi(rank-1, i);
    
    if (i==1 && moved) return;
}

int main() {
    int rank=0;
    scanf("%d", &rank);
    Hanoi(rank, 0);
    printf("Steps:%d", step);
    return 0;
}
