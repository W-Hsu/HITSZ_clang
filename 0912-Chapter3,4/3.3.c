#include <stdio.h>
#include <math.h>
int main() {
	const double RATE = 0.0225;
	double capital = 0;
	int n = 0;
    printf("input capital and year:");
	scanf("%lf%*c%d", &capital, &n);

	capital = capital * pow((1 + RATE),n);
	printf("deposit:%lf\n", capital);
	return 0;
}
