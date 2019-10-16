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

void MonthDay(int year, int yearDay, int *pmonth, int *pDay) {
    bool rn = RN(year);
    int dayAddition = 0, prevDayAddition = 0;
    
    *pmonth = 0;
    
    while (true) {
        (*pmonth)++;
        prevDayAddition = dayAddition;
        if (*pmonth==1 || *pmonth==3 || *pmonth==5 || *pmonth==7 || *pmonth==8 || *pmonth==10 || *pmonth==12) {
            dayAddition += 31;
        }
        else if (*pmonth==4 || *pmonth==6 || *pmonth==9 || *pmonth==11) {
            dayAddition += 30;
        }
        else if (*pmonth==2) {
            if (rn) dayAddition += 29;
            else dayAddition += 28;
        }
        else {
            printf ("Too many days!\n");
            *pmonth = -1;
            *pDay = -1;
            return;
        }
        
        if (*pDay<=dayAddition && *pDay>prevDayAddition) break;
    }
    
    *pDay = *pDay - prevDayAddition;
    return;
}

int main() {
    int year=0, yearDay=0;
    inputNumber(&year, "input year > ");
    inputNumber(&yearDay, "Calaulate day NO. > ");
    int returnDay=yearDay, returnMonth=0;
    
    MonthDay(year, yearDay, &returnMonth, &returnDay);
    
    printf("The date of NO. %d day in %d is %d/%02d/%02d.\n", yearDay, year, year, returnMonth, returnDay);
    return 0;
}
