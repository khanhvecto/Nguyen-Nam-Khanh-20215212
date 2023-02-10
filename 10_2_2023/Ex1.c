#include<stdio.h>

void Concatenate(FILE *f1, FILE *f2, FILE *f3) {
    int c;
    while((c = fgetc(f1)) != EOF) fputc(c, f3);
    while((c = fgetc(f2)) != EOF) fputc(c, f3);
}

int main() {
    FILE *f1, *f2, *f3;
    char fname1[] = "f1_x1.txt";
    char fname2[] = "f2_x1.txt";
    char fname3[] = "f3_x1.txt";
    if((f1 = fopen(fname1, "r")) == NULL) {
        printf("Can't read %s\n", fname1);
        return 1;
    } else if((f2 = fopen(fname2, "r")) == NULL) {
        printf("Can't read %s\n", fname2);
        return 1;
    } else if((f3 = fopen(fname3, "w+")) == NULL) {
        printf("Can't modify %s\n", fname3);
        return 1;
    } else {
        Concatenate(f1, f2, f3);
        fclose(f1); fclose(f2); fclose(f3);
    }
    return 0;
}