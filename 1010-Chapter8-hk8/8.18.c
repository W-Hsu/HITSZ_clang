#include <stdio.h>
#include <string.h>

const int DIGITS = 50;

void refresh_m(int massiveNumber[DIGITS]); // "refresh" conflict with system function
void output(int massiveNumber[DIGITS]);

int main() {
    int massiveNumber[DIGITS];
    memset(massiveNumber, -1, DIGITS*sizeof(int));
    massiveNumber[0] = 1;
    
    int order = 0;
    do {
        fflush(stdin);
        printf ("Enter a number to be calculated > ");
    } while(!scanf("%d", &order));
    
    int i=0;
    for (i=1 ; i<=order ; i++) {
        int j=0;
        for (j=0 ; massiveNumber[j]!=-1 ; j++) massiveNumber[j] *= i;
        
        refresh_m(massiveNumber);
        
        printf("%d! = ", i);
        output(massiveNumber);
        putchar('\n');
    }
}

void refresh_m(int massiveNumber[DIGITS]) {
    int i=0;
    for (i=0 ; i<DIGITS && massiveNumber[i]!=-1 ; i++) {
        while (massiveNumber[i]>=10) {
            if (massiveNumber[i+1]==-1) massiveNumber[i+1] = 0;
            massiveNumber[i] -= 10;
            massiveNumber[i+1] += 1;
        }
    }
}

void output(int massiveNumber[DIGITS]) {
    int i=0;
    for (i=DIGITS-1 ; i>=0 ; i--) if (massiveNumber[i]!=-1) printf("%d", massiveNumber[i]);
}

