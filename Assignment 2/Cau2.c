#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int n, guess;
    n = rand() % 100; n++;
    while(1) {
        printf("Take a guess: "); scanf("%d", &guess);
        if(guess == n) {
            printf("CHINH XAC!\n");
            return 0;
        } else if(guess > n) printf("n < %d\n", guess);
        else printf("n > %d\n", guess);
    }
}