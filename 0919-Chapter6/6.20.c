#include <stdio.h>

int main() {
    int number = 0;
    for (int i=0 ; (i*i)<=99999 ; i++) {
        number = i*i;
        int digit[5] = {0};
        for (int j=0 ; j<=4 ; j++) {
            digit[j] = number % 10;
            number /= 10;
        }
        if (digit[0]==digit[1] && digit[3]==digit[4]) {
//            if(i*i<10) printf("0000");
//            else if(i*i<100) printf("000");
//            else if (i*i<1000) printf("00");
//            else if (i*i<10000) printf("0");
            // commented code above can also fill '0' before numbers <= 10000
            
            int k=0;
            for (k=4 ; k>=1 ; k--)
                if (digit[k] != 0) break;
            for (; k!=4 ; k++)
                printf ("0");
            
            printf ("%d\n", i*i);
        }
    }
    return 0;
}
