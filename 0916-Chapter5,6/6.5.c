#include <stdio.h>

int main() {
    int Fahrenheit=0;
    double Celsius=0;
    
    printf("Fahrenheit\t\tCelsius\n");
    
    for(Fahrenheit=0; Fahrenheit<=300 ; Fahrenheit+=10) {
        Celsius = 5.0 * (Fahrenheit-32) / 9;
        printf("%d\t\t\t%.1f\n", Fahrenheit, Celsius);
    }
    
    return 0;
}
