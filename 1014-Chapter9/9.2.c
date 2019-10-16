#include <stdio.h>

#define MAX_SIZE 30

void inputNumber(int *p, const char* prompt) {
	printf(prompt);
	while(!scanf("%d", p)) {
		printf(prompt);
		while(getchar()!='\n');
	}
	return;
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap_array(int size, int x[], int y[]) {
	int i=0;
	for (i=0 ; i<size ; i++) swap(x+i, y+i);
}

int main() {
	int size=0, a[MAX_SIZE]={0}, b[MAX_SIZE]={0}; 

	inputNumber(&size, "input array size > ");
	if (size>MAX_SIZE) {
		printf ("%d.\n", MAX_SIZE);
		size = MAX_SIZE;
	}	

	int i=0;
	for (i=0 ; i<size ; i++) inputNumber(&a[i], "(a) ");
	for (i=0 ; i<size ; i++) inputNumber(&b[i], "(b) ");

	printf ("Original a and b :\n");
	for (i=0 ; i<size ; i++) printf ("%d ", a[i]);
	putchar('\n');
	for (i=0 ; i<size ; i++) printf ("%d ", b[i]);
	putchar('\n');

	swap_array(size, a, b);

	printf ("Swapped a and b :\n");
	for (i=0 ; i<size ; i++) printf ("%d ", a[i]);
	putchar('\n');
	for (i=0 ; i<size ; i++) printf ("%d ", b[i]);
	putchar('\n');

	return 0;
}
