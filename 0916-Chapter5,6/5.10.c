#include <stdio.h>cls

int main() {
    int year=0, flag=0, month=0, day=0;
    printf("Enter year: ");
    scanf("%d", &year);
    
    printf("Enter month: ");
    scanf("%d", &month);
    
    flag = ((year%4==0 && year%100!=0) || (year%400==0))?1:0;
//        flag=1:flag=0;
    
    switch (month) {
        case 1:
            day = 31;
            break;
            
        case 2:
            day = 28;
            if (flag==1) day++;
            break;
            
        case 3:
            day = 31;
            break;
            
        case 4:
            day = 30;
            break;
            
        case 5:
            day = 31;
            break;
            
        case 6:
            day = 30;
            break;
            
        case 7:
            day = 31;
            break;
            
        case 8:
            day = 31;
            break;
            
        case 9:
            day = 30;
            break;
            
        case 10:
            day = 31;
            break;
            
        case 11:
            day = 30;
            break;
            
        case 12:
            day = 31;
            break;
            
        default:
            printf("Not a valid month!!\n");
            return -1;
    }
    
    printf("%d.%d has %d days\n", year, month, day);
    
    return 0;
}
