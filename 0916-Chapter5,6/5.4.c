#include <stdio.h>
#include <math.h>

int main() {
    int year=0;
    double capital=0.0;
    
    printf("input capital > ");
    scanf("%lf", &capital);
    
    printf("input deposit period in year > ");
    scanf("%d", &year);
    
    switch (year) {
        case 1:
            capital = capital * 1.0225;
            break;
            
        case 2:
            capital = capital * pow(1.0243,year);
            break;
            
        case 3:
        case 4:
            capital = capital * pow(1.027,year);
            break;
            
        case 5:
        case 6:
        case 7:
            capital = capital * pow(1.0288,year);
            break;
            
        case 8:
            capital = capital * pow(1.0288,year);
            break;
            
        default:
            printf("Not a Valid Year!!\n");
            return -1;
    }
    
    printf("capital + interest = %.2f\n", capital);
    return 0;
}
