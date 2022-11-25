#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, delta;
    printf("Input a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        if(b == 0) {
            if(c == 0) printf("Infinity roots.\n");
            else printf("No roots\n");
        }
        else printf("x = %.2f\n", -c/b);
    }
    else {
        delta = b * b - 4 * a *c;
        if(delta == 0) printf("Double roots: x1 = x2 = %.2f\n", - b/ (2* a));
        else if (delta < 0) printf("No roots.\n");
        else printf("x1 = %.2f, x2 = %.2f\n", (-b+ sqrt(delta)) / (2*a), (-b- sqrt(delta)) / (2*a));
    }
    return 0;
}