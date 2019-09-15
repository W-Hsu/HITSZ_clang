#include <stdio.h>
#include <math.h>
int main() {
	const double RATE = 0.0225;
	double capital = 0;
	int n = 0;
	scanf ("%lf%d", &capital, &n);

	capital = capital * pow((1 + RATE),n);
	printf ("deposit:%lf", capital);
	return 0;
}