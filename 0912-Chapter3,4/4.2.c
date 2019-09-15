#include <stdio.h>

// original program
//main() {
//    long a, b;
//    float x, y;
//    scanf("%d %d\n",a ,b);
//    scanf("%5.2f %5.2f\n", x, y);
//    printf("a = %d, b = %d\n", a, b);
//    printf("x = %d, y = %d\n", x, y);
//}

// correction
int main() {
    long a, b;
    float x, y;
    scanf(/*"%d %d\n"*/"%ld %ld\n",&a ,&b); // parameter of scanf should be address
    scanf("%5.2f %5.2f\n", &x, &y); //the same as above
    printf(/*"a = %d, b = %d\n"*/"a = %ld, b = %ld\n", a, b);
    printf(/*"x = %d, y = %d\n"*/, x, y);
    return 0;
}
