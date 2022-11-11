// In ra hinh tam giac bang cac chu cai A, B, C... co cac canh deu nhau theo mau:
//          A
//          A  B  A
//          A  B  C  B  A

#include<stdio.h>

int main() {
    int height;
    printf("Input the height of triangle: ");
    scanf("%d", &height);
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) printf("%c ", 'A' - 1 + j);
        for (int k = i - 1; k >= 1; --k) printf("%c ", 'A' - 1 + k);
        printf("\n");
    }
    return 0;
}