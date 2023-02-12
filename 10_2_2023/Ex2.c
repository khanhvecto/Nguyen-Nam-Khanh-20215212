#include<stdio.h>
#include<string.h>

void RemoveComment(FILE *f1) {  //Copy contents without comments into f2
    int c;
    FILE *f2 = fopen("temp.txt", "w+");
    while((c = fgetc(f1)) != EOF) {
        if(c == '/') {
            if((c = fgetc(f1)) == '/') {
                while((c = fgetc(f1)) != '\n');
                fputc(c, f2);
            } else {
                fputc('/', f2);
                fputc(c, f2);
            }
        } else fputc(c, f2);
    }
    fclose(f1);
    fclose(f2);
}

int main() {
    char fname[20];
    printf("Input name of file: ");
    scanf("%s", fname);
    FILE *fptr;
    if((fptr = fopen(fname, "r")) == NULL) {
        printf("Can't read %s\n", fname);
        return 1;
    } else {
        RemoveComment(fptr);

        //Remove original file and rename the newfile to the original name
        remove(fname);
        rename("temp.txt", fname);
        return 0;
    }
}