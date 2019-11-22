#include <stdio.h>
#include <string.h>

void del_by_pointer (char *str, char c) {
    int i=0;
    for (i=0 ; str[i]!='\0' ; i++) if (str[i]==c) {
            memmove(str+i, str+i+1, strlen(str+i)*sizeof(char));
            i--;
        }
    return;
}

void del_by_array (char str[], char c) {
    int i=0;
    for (i=0 ; str[i]!='\0' ; i++) if (str[i]==c) {
            int j=0;
            int len = strlen(str);
            for (j=i ; j<len ; j++)
                str[j] = str[j+1];
        }
    return;
}

int main() {
    char str[100] = {0};
    char c = 0;
    fgets (str, 100, stdin);
    scanf ("%c", &c);

    /* Calculate length and Get rid of '\n' */
    int len = 0;
    for (len=0 ; str[len]!='\n' && str[len]!='\0' ; len++);
    str[len] = '\0';

    del_by_array(str, c);
    puts(str);

    return 0;
}
