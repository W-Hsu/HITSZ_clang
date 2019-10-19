#include <stdio.h>
#define PRECISION 1e-6

double f(double x) {
    return /* expression */x*x;
}

double Integral(double (*f)(double), double a, double b) {
    double integral_var = 0.0, result = 0.0;
    for (integral_var=a ; integral_var<=b ; integral_var+=PRECISION) {
        result += (0.5 * (f(integral_var) + f(integral_var+PRECISION)) * PRECISION);
    }
    return result;
}

int main() {
    double a = 0.0, b = 0.0;
    scanf ("%lf%*c%lf", &a, &b);
    printf ("%f\n", Integral(f, a, b));
    return 0;
}
