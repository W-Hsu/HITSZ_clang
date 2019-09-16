#include <stdio.h>

int main() {
    int year=0, flag=0;
    printf("Enter year: ");
    scanf("%d", &year);
    
    flag = ((year%4==0 && year%100!=0) || (year%400==0))?1:0;
//        flag=1:flag=0;
    
    flag==1?
        printf("%d yes\n", year):
        printf("%d no\n", year);
    
    return 0;
}
