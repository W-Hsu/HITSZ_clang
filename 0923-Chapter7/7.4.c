#include <stdio.h>

long getLCM(int a, int b) {
    int lcm=0;
    
    if(a>b) lcm = a;
    else lcm = b;
    
    while(lcm%a!=0 || lcm%b!=0) lcm++;
    
    return lcm;
}

int main() {
    int integer1=0, integer2=0;
    printf("input two integers > ");
    scanf("%d%*c%d", &integer1, &integer2);
    printf("The Least Common Mutiple of the two is: %ld\n", getLCM(integer1, integer2));
    return 0;
}
