#include<stdio.h>

int Factorial(int n);

int main() {
    int n, k;
    printf("Input n, k: ");
    scanf("%d %d", &n, &k);
    printf("%d-perm utation of %d is %d\n", k, n, Factorial(n) / (Factorial(k)*Factorial(n-k)));
    return 0;
}

int Factorial(int n) {
    int i, factorial = 1;
    for(i = 2; i <= n; ++i) factorial *= i;
    return factorial; 
}