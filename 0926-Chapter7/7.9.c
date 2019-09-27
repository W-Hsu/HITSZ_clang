#include <stdio.h>

int askAge(int PersonNum) {
    if (PersonNum==1) return 10;
    else return askAge(PersonNum-1)+2;
}

int main() {
    printf ("The Age of 5th person is : %d\n", askAge(5));
    return 0;
}
