#include <stdio.h>

int GCD(int a, int b) {
    int result=0;
    if (a>b) result=GCD(a-b, b);
    else if (a<b) result=GCD(a, b-a);
    else return a;
    return result;
}

int main() {
    int a=0, b=0;
    printf("input a, b > \n");
    while(1) {
        scanf("%d%*c%d", &a, &b);
        if(a>0 && b>0) break;
        else {
            printf("invalid input! retry!\n");
            while(getchar()!='\n');
        }
    }
    printf("GCD of a, b: %d\n", GCD(a,b));
    return 0;
}
