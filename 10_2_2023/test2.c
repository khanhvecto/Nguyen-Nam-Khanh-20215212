#include <stdio.h>

main() {
    FILE *fp;
    char ch= ' ';

    /* Writing to file JAK */
    if ((fp=fopen("jak", "w"))==NULL) {
        printf("Cannot open file \n\n");
        exit(1);
    }
    clrscr();
    printf("Enter characters (type @ to terminate): \n");
    ch = getche();
    while (ch !='@') {
        fputc(ch, fp) ;
        ch = getche();
    }
    fclose(fp);

    /* Reading from file JAK */
    printf("\n\nDisplaying contents of file JAK\n\n");
    if((fp=fopen("jak", "r"))==NULL) {
        printf("Cannot open file\n\n");
        exit(1);
    }
    do {
        ch = fgetc (fp);
        putchar(ch) ;
    } while (ch!=EOF);
    getch();
    fclose(fp);
}