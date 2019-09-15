#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	long long input = 0;
	scanf ("%lld", &input);
	input = llabs(input);
	for (;input!=0;input=input/10) {
		int res = 0;		
		res = input%10;
		printf("%d",res);
	}
		return 0;
}
