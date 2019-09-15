#include <stdio.h>
#include <math.h>
int main() {
	double a=0, b=0, c=0, delta=0, x1=0, x2=0;
	scanf("%lf%lf%lf",&a, &b, &c);
	delta = b*b - 4*a*c;
	x1 = -b + sqrt(delta) / a / 2;
	x2 = -b - sqrt(delta) / a / 2;
	printf("x1=%lf\tx2=%lf",x1, x2);
	return 0;
}
