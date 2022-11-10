//In ra bang cuu chuong

#include <stdio.h>

int main(void)
{
    int i = 1, j = 1;
    printf("This is multiplication table: \n");
    while (1 > 0)
    {
        while (1 > 0)
        {
            printf("|\t%d x %d = %d\t", j, i, j * i);
            if (j % 3 == 0)
            {
                i++;
                j = j - 3;
                printf("|\n");
            };
            j++;
            if (i == 9)
            {
                i = 1;
                j = j + 3;
                break;
            }
        }
        printf("-------------------------------------------------------------------------\n");
        if (j == 10)
        {
            break;
        }
    }
    return 0;
}