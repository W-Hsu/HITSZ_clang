#include <stdio.h>
#include <stdbool.h>

void inputNumber(int *p, const char* prompt) {
	printf(prompt);
	while(!scanf("%d", p)) {
		printf(prompt);
		while(getchar()!='\n');
	}
	return;
}

bool RN(int year) {
    return ((year%4==0 && year%100!=0) || (year%400==0)) ? true : false;
}

int DayofYear(int year, int month, int day) {
    bool rn = RN(year);
    
    for ( ; month>1 ; month--) {
        if (month==5 || month==7 || month==10 || month==12) day+=30;
        else if (month==2 || month==4 || month==6 || month==8 || month==9 || month==11) day+=31;
        else if (month==3) {
            if (rn) day+=29;
            else day+=28;
        }
    }
    
    return day;
}

int main() {
    int year=0, month=0, day=0;
    inputNumber(&year, "input year > ");
    inputNumber(&month, "input month > ");
    inputNumber(&day, "input day > ");
    printf("%d/%02d/%02d is the NO. %d day in the year.\n",  year, month, day, DayofYear(year, month, day));
    return 0;
}
