// Input a number and a string from keyboard. Display them to the screen

#include<stdio.h>

int main() {
    int num;
    char string[10];
    printf("Input a number and a string: ");
    scanf("%d%s", &num, string);
    printf("You've just inputted: %d and %s\n", num, string);
    return 0;
}