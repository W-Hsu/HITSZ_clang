#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int flag=0, Win=0;
    int i=0;
    srand(time(NULL));
    
    if (rand()%2!=0) {
        printf("Computer first!\n");
        flag = 1;
    }
    else printf("User first!\n");
    
    if(flag) {
        if (rand()%2==0){
            i += 1;
            printf ("Computer Added 1 , now goes to %d\n", i);
        }
        else {
            i += 2;
            printf ("Computer Added 2 , now goes to %d\n", i);
        }
    }
    
    for (; i<=30 ;) {
        int Add=0;
    
        for (Add=0 ; ; ){
            printf("Add one or Two? ");
            scanf ("%d", &Add);
            if (Add!=1 && Add!=2) {
                printf ("input '1' or '2'!\n");
                Add = 0;
                while(getchar()!='\n');
                continue;
            }
            break;
        }
        
        if(Add==1) i+=1;
        else if(Add==2) i+=2;
        
        printf ("Added %d , now goes to %d\n", Add, i);
        
        if (i>=30) {
            Win=0;
            break;
        }
        
        if ((30-i)%3==2) {
            i += 2;
            Add = 2;
        }
        else if ((30-i)%3==1) {
            i += 1;
            Add = 1;
        }
        else {
            if (rand()%2==0){
                i += 1;
                Add = 1;
            }
            else {
                i+=2;
                Add = 2;
            }
        }
        
        printf ("Computer Added %d , now goes to %d\n", Add, i);
        if (i>=30) {
            Win=1;
            break;
        }
    }
    
    if (Win==0) printf("Congratulations! You won!\n");
    else printf("The great programmer won!\n");
    
    return 0;
}

