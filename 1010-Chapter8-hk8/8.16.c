#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void selectionSort(int, int*);

int find_x_pos(int*, int, int*, int);

int main() {
    int* array = malloc(10*sizeof(int));
    int size = 10;
    int i=0, x=0;
    
    printf ("Input array : \n(Enter -1 to stop)\n");
    while(1) {
        while (!scanf ("%d", &array[i])) while (getchar()!='\n');
        if (array[i]==-1) break;
        i++;
        if (i>=size-1) {
            size += 10;
            array = realloc(array, size);
        }
    }
    
    selectionSort(i, array);
    
    do {
        printf("input x > ");
        while (getchar()!='\n');
    } while (!scanf ("%d", &x));
    
    int x_pos = find_x_pos(&size, i, array, x);
    
    int k=0;
    for (k=0 ; k<=i ; k++) {
        if (k==x_pos) printf ("%d(x) ", array[k]);
        else printf ("%d ", array[k]);
    }
    putchar('\n');
    
    return 0;
}

void selectionSort(int len, int* array) {
    int i=0;
    for (i=0 ; i<len-1 ; i++) {
        int j=i;
        int minPos = j;
        for (j=i ; j<len ; j++) if (array[minPos]>array[j]) minPos = j;
        
        int temp = array[i];
        array[i] = array[minPos];
        array[minPos] = temp;
    }
}

int find_x_pos(int* size, int len, int* array, int x) {
    int i=0;
    int x_pos = len;
    for (i=0 ; i<len ; i++) if (x<array[i]) {
        x_pos = i;
        break;
    }
    
    for (i=len ; i>x_pos ; i--) array[i] = array[i-1];
    array[x_pos] = x;
    
    return x_pos;
}
