//In ra bang cuu chuong

#include <stdio.h>

int main(void)
{
    int i = 1, j = 1,
        a, b;
    printf("This is multiplication table:\n");

    {   //The top edge of box
        printf("%c", 201);
        for (a = 1; a <= 23; ++a) printf("%c", 205);
        printf("%c", 203);
        for (a = 1; a <= 23; ++a) printf("%c", 205);
        printf("%c", 203);
        for (a = 1; a <= 23; ++a) printf("%c", 205);
        printf("%c\n", 187);
    }

    while (1 > 0) { //this means the loop only stop by sentense "break;"
        while (1 > 0) {
            printf("%c\t%d x %d = %d\t", 186, j, i, j * i);
            if (j % 3 == 0) {
                i++;
                j = j - 3;
                printf("%c\n", 186);
            };
            j++;
            if (i == 10) {
                i = 1;
                j = j + 3;
                break;
            }
        }
        if (j != 10) {  //print the middle horizontal
            printf("%c", 204);
            for (a = 1; a <= 23; ++a) printf("%c", 205);
            printf("%c", 206);
            for (a = 1; a <= 23; ++a) printf("%c", 205);
            printf("%c", 206);
            for (a = 1; a <= 23; ++a) printf("%c", 205);
            printf("%c\n", 185);
        }
        if (j == 10) {
            {   //print the bottom edge of box
                printf("%c", 200);
                for (a = 1; a <= 23; ++a) printf("%c", 205);
                printf("%c", 202);
                for (a = 1; a <= 23; ++a) printf("%c", 205);
                printf("%c", 202);
                for (a = 1; a <= 23; ++a) printf("%c", 205);
                printf("%c\n", 188);
            }
            break;
        }
    }
    return 0;
}