#include<stdio.h>
#include<math.h>

int main() {
    int n, i, F1 = 1, F2 = 0, m;
    printf("Enter n: ");    
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        F1 = F1 * i;
    }
    printf("F1(%d) = %d\n", n, F1);
    for (i = 1; i <= n; ++i) {
        F2 = F2 + i;
    }
    printf("F2(%d) = %d\n", n, F2);
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Result: %.2f\n", pow(n, m));
    return 0;
}