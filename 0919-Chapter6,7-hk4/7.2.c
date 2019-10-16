#include <stdio.h>
#include <stdlib.h>
int hr=0, mn=0, sc=0;

void update() {
    sc++;
    if (sc==60) {
        sc = 0;
        mn++;
    }
    
    if (mn==60) {
        mn = 0;
        hr++;
    }
    if (hr == 24) hr = 0;
}

void display() {
    printf ("%'0'2d:%'0'2d:%'0'2d\n", hr, mn, sc);
}

void delay() {
//    for (int t=0 ; t<600000000 ; t++);
    sleep(1);
}

int main() {
    system ("clear");
    for (int i=0 ; i<= 1000000000 ; i++) {
        update();
        display();
        delay();
        system("clear");
    }
    return 0;
}
