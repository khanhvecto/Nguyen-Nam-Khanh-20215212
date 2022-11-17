#include<stdio.h>

// In tam giac can.

int main() {
    int height, 
        i, j, k;
    do {
        printf("Input the height of triangle (odd number): ");
        scanf("%d", &height);
    } while (height % 2 == 0 || height <= 0);
    for (i = 1; i <= height; ++i) {
        for (j = 1; j <= height - i; ++j) printf(" ");
        for (k = 1; k <= i * 2 - 1; ++k) printf("*");
        printf("\n");
    }
    return 0;
}