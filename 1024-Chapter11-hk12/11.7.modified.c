#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>

void inputNumber(int *p, const char* prompt) {
    printf(prompt);
    while(!scanf("%d", p)) {
        printf(prompt);
        while(getchar()!='\n');
    }
    return;
}

void inputScore(int classNum, int stuPerClass, int (*Score)[stuPerClass]) {
    int i=0, j=0;
    for (i=0 ; i<classNum ; i++) for (j=0 ; j<stuPerClass ; j++) {
            printf ("input score of Student NO. %d in Class %d", j+1, i+1);
            inputNumber(&Score[i][j], " > ");
        }
    return;
}

int Findmax(int classNum, int stuPerClass, int (*Score)[stuPerClass], char (*Parallels)[stuPerClass]) {
    int i=0, j=0;
    int max = INT_MIN;
    for (i=0 ; i<classNum ; i++) for (j=0 ; j<stuPerClass ; j++) {
            if (Score[i][j]>max) {
                memset (Parallels, -1, classNum*stuPerClass);
                Parallels[i][j] = 1;
                max = Score[i][j];
            }
            else if (Score[i][j]==max) Parallels[i][j] = 1;
        }
    return max;
}

int main() {
    int classNum=0, stuPerClass=0;
    int rowPos=-1, colPos=-1;
    inputNumber(&classNum, "input Class Number(m) > ");
    inputNumber(&stuPerClass, "input student quantity per class(n) > ");

    int (*Score)[stuPerClass] = malloc(classNum*stuPerClass*sizeof(int));
    char (*Parallels)[stuPerClass] = malloc(classNum*stuPerClass* sizeof(char));

    inputScore(classNum, stuPerClass, Score);

    printf ("\nThe highest mark is %d ", Findmax(classNum, stuPerClass, Score, Parallels));

    int i=0, j=0;
    bool firstflag=true;
    for (i=0 ; i<classNum ; i++) for (j=0 ; j<stuPerClass ; j++) {
        if (Parallels[i][j]==1) {
            if (firstflag) {
                printf ("won by Student NO. %d in Class %d (1 as first number)\n", j+1, i+1);
                firstflag = false;
            }
            else printf ("and his fellow student : Student NO. %d in Class %d\n", j+1, i+1);
        }
    }

    free (Score);
    free (Parallels);

    return 0;
}
