#include <stdio.h>
#include <stdbool.h>

void showMenu() {
    printf ("1. Year/Month/Day -> yearDay\n"
            "2. yearDay -> Year/Month/day\n"
            "3. exit\n");
    return;
}

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
    while (true) {
        showMenu();
        int cmd = 0;
        inputNumber(&cmd, "Please enter your choice > ");
        
        int year=0, month=0, day=0;
        int /*year=0,*/ yearDay=0, returnDay=0, returnMonth=0;
        
        switch (cmd) {
            case 1:
                inputNumber(&year, "input year > ");
                inputNumber(&month, "input month > ");
                inputNumber(&day, "input day > ");
                printf("%d/%02d/%02d is the NO. %d day in the year.\n",  year, month, day, DayofYear(year, month, day));
                break;
            case 2:
                inputNumber(&year, "input year > ");
                inputNumber(&yearDay, "Calaulate day NO. > ");
                returnDay=yearDay, returnMonth=0;
                
                MonthDay(year, yearDay, &returnMonth, &returnDay);
                
                printf("The date of NO. %d day in %d is %d/%02d/%02d.\n", yearDay, year, year, returnMonth, returnDay);
                break;
            case 3:
                printf ("Exit.\n");
                goto END;
            default:
                printf ("%d : Command not found.\n", cmd);
                break;
        }
        putchar ('\n');
    }
    
END:
    return 0;
}
