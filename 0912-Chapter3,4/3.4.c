#include <stdio.h>
#include <math.h>
int main() {
	double a=0, b=0, c=0, delta=0, x1=0, x2=0;
    printf("input a, b and c in equation ax^2+bx+c=0:\n");
	scanf("%lf%*c%lf%*c%lf",&a, &b, &c);
	delta = b*b - 4*a*c;
    
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / a / 2;
        x2 = (-b - sqrt(delta)) / a / 2;
        printf("x1=%lf\tx2=%lf\n",x1, x2);
        return 2;
    }
    else if (delta == 0) {
        x1 = (-b + sqrt(delta)) / a / 2;
        printf("x1=x2=%lf\n",x1);
        return 1;
    }
    else {
       printf("wtf??\n");
        return -1;
    }
}
