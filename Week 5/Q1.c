// In ra hinh tam giac vuong can.

#include<stdio.h>

int main() {
    int edge;
    printf("Nhap do dai canh tam giac: ");
    scanf("%d", &edge);
    for (int i = 1; i <= edge; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}