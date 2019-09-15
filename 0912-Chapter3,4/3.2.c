#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// 能倒置多位数字
int main() {
	long long input = 0;
    printf("input:");
	scanf ("%lld", &input);
	input = llabs(input);
	for (;input!=0;input=input/10) {
		int res = 0;		
		res = input%10;
		printf("%d",res);
	}
    printf("\n");
    return 0;
}
