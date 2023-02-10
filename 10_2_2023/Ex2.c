#include<stdio.h>
#include<string.h>

void RemoveComment(FILE *f) {
    int c;
    while((c = fgetc(f)) != EOF) {
        if(c == '/')
            if((c = fgetc(f)) == '/') {
                //fputs("\b\b", f);
                fputc('\b', f);
                fputc('\b', f);
                while((c = fgetc(f)) != '\n') {
                    fputc('\b', f);   ///...
                    fputc(' ', f);
                }
                fputc(c, f);
            }
    }
}

int main() {
    char fname[20];
    printf("Input name of file: ");
    fgets(fname, sizeof(fname), stdin);
    fname[strlen(fname)-1] = '\0';
    FILE *f;
    if((f = fopen(fname, "rw")) == NULL) {
        printf("Can't read of write %s\n", fname);
        return 1;
    } else {
        RemoveComment(f);
        fclose(f);
        return 0;
    }
}