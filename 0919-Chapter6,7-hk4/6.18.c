#include <stdio.h>

int main() {
    printf ("First Format:\n");
    
    for (int i=1 ; i<=9 ; i++) printf ("%-4d", i);
    printf ("\n");
    
    for (int i=1 ; i<=9 ; i++) printf ("%-4c", '-');
    printf ("\n");
    
    for (int i=1 ; i<=9 ; i++)
    {
        for (int j=1 ; j<=9 ; j++) {
            printf ("%-4d", i*j);
        }
        printf ("\n");
    }
    
    printf ("\nSecond Format:\n");
    
    for (int i=1 ; i<=9 ; i++) printf ("%-4d", i);
    printf ("\n");
    
    for (int i=1 ; i<=9 ; i++) printf ("%-4c", '-');
    printf ("\n");
    
    for (int i=1 ; i<=9 ; i++)
    {
        for (int j=1 ; j<=9 ; j++) {
            if(i>=j) printf ("%-4d", i*j);
            else printf ("%-4c", ' ');
        }
        printf ("\n");
    }
    
    printf ("\nThird Format:\n");
    
    for (int i=1 ; i<=9 ; i++) printf ("%-4d", i);
    printf ("\n");
    
    for (int i=1 ; i<=9 ; i++) printf ("%-4c", '-');
    printf ("\n");
    
    for (int i=1 ; i<=9 ; i++)
    {
        for (int j=1 ; j<=9 ; j++) {
            if(i<=j) printf ("%-4d", i*j);
            else printf ("%-4c", ' ');
        }
        printf ("\n");
    }
    return 0;
}
