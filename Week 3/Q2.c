#include<stdio.h>
#include<math.h>

int fun(int n) {
    int i, flag = 1;
    for (i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int foo(int c) {
    int n = 1, S = 0;
    while (n >= 1) {
        S = S + n;
        if (S > c) {
            return n - 1;
        } else ++n;
    }
    return 1;
}

int main() {
    printf("fun(1) = %d\n", fun(1));
    printf("foo(9) = %d\n", foo(9));
    return 0;
}