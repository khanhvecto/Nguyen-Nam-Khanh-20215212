#include<stdio.h>

int CheckSum(float a[], int n) {
    float LeftSum, RightSum;
    
    for(int i=1; i<=n-2; i++) {
        LeftSum = RightSum = 0;
        for(int j=0; j<i; j++) LeftSum += a[j];
        for(int j=i+1; j<=n-1; j++) RightSum += a[j];
        if(LeftSum == RightSum) return 1;
    }
    return 0;
}

int main() {
    int n;
    float a[100];
    printf("n = "); scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i+1); 
        scanf("%f", &a[i]);
    }

    if(CheckSum(a, n) == 1) printf("YES\n");
    else printf("NO\n");
    return 0;
}