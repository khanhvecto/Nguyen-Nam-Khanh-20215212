// Write a program to get a character from the user and then display its ASCII code in form '0': 48

#include<stdio.h>

int main() {
    char ch;
    printf("Input a character here: ");
    scanf("%c", &ch);
    printf("'%c': %d", ch, ch);
    return 0;
}