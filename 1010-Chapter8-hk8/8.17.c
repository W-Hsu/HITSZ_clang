#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 40

int ReadScore(int score[]);
void DataSort(int score[], int n);
void PrintScore(int score[], int n);

int main() {
    int score[N], n;
    n = ReadScore(score);
    DataSort(score, n);
    printf ("Sorted scores : ");
    PrintScore(score, n);
    
    return 0;
}

int ReadScore(int score[]) {
    int i=-1;
    do {
        i++;
        printf ("input score > ");
        scanf ("%d", &score[i]);
    } while (score[i]>=0);
    return i;
}

void DataSort(int score[], int n) {
    bool moved = false;
    int i=0;
    do {
        moved = false;
        for (i=0 ; i<n-1 ; i++) if (score[i]<score[i+1]) {
            int swap=score[i];
            score[i] = score[i+1];
            score[i+1] = swap;
            moved = true;
        }
    } while(moved);
}

void PrintScore(int score[], int n) {
    int i;
    for (i=0 ; i<n ; i++) printf("%-4d", score[i]);
    putchar('\n');
}
