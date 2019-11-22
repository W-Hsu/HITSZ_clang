#include <stdio.h>

int main() {
    char c = 0;
    char source[100]={0}, destination[100]={0};
    FILE *fp;
    FILE *fp_out;

	scanf ("%100s", source);
	scanf ("%100s", destination);
    
    fp_out = fopen(destination, "wb");
    
    if ((fp=fopen(source, "rb")) == NULL) {
        printf("cp: %s: No such file.\n", source);
        return -1;
    }
    
    while (!feof(fp)) {
        fread(&c, 1, 1, fp);
        fwrite(&c, 1, 1, fp_out);
    }
    
    return 0;
}
