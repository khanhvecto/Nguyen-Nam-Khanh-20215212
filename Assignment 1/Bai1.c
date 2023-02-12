#include<stdio.h>

long long Fractorial(int n) {
    long long fac = 1;
    for(int i = 2; i<=n; i++) fac = fac * i;
        return fac;
}

void Combination(FILE *f1, FILE *f2) {
    int n, k, a;
    while((fscanf(f1, "%d %d", &n, &k)) == 2) {
        a = Fractorial(n) / Fractorial(k) / Fractorial(n-k);
        fprintf(f2, "%d\n", a);
    }
}

int main() {
    FILE *f1, *f2;
    char fname1[] = "TOHOP.INP";
    char fname2[] = "TOHOP.OUT";
    if((f1 = fopen(fname1, "r")) == NULL) {
        printf("Can't read %s\n", fname1);
        return 1;
    } else if((f2 = fopen(fname2, "w")) == NULL) {
        printf("Can't read %s\n", fname2);
        return 1;
    } else {
        Combination(f1, f2);
        fclose(f1);
        fclose(f2);
        return 0;
    }
}