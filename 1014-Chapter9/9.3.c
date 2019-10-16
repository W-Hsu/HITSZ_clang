#include <stdio.h>

void inputNumber(int *p, const char* prompt) {
	printf(prompt);
	while(!scanf("%d", p)) {
		printf(prompt);
		while(getchar()!='\n');
	}
	return;
}

int max(int a[10]) {
	int i=0, max=-1, maxLoc=-1;
	for (i=0 ; i<10 ; i++) if (a[i]>max) {
		max = a[i];
		maxLoc = i;
	}
	return maxLoc;
}

int min(int a[10]) {
	int i=0, min=99999, minLoc=-1;
	for (i=0 ; i<10 ; i++) if (a[i]<min) {
		min = a[i];
		minLoc = i;
	}
	return minLoc;
}

int main() {
	int maxLoc=0, minLoc=0, i=0, a[10];

	for (i=0 ; i<10 ; i++) inputNumber(&a[i], "(input) ");

	printf ("Original :\n");
	for (i=0 ; i<10 ; i++) printf("%d ", a[i]);
	putchar('\n');

	maxLoc = max(a);
	minLoc = min(a);

	int swap = a[maxLoc];
	a[maxLoc] = a[minLoc];
	a[minLoc] = swap;

	printf ("Swapped :\n");
	for (i=0 ; i<10 ; i++) printf("%d ", a[i]);
	putchar('\n');

	return 0;
}
