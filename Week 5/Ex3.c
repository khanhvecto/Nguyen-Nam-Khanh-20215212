// Input 2-time values from keyboard and display the distance (in second) between them. The input time format is hh:mm:ss

#include<stdio.h>

int main() {
    int hh1, mm1, ss1, hh2, mm2, ss2, distance;
    printf("Input 2-time values(hh:mm:ss): ");
    scanf("%d:%d:%d %d:%d:%d", &hh1, &mm1, &ss1, &hh2, &mm2, &ss2);
    distance = (hh1 - hh2) * 3600 + (mm1 - mm2) * 60 + (ss1 - ss2);
    printf("The distance between 2 times: %d", distance);
    printf(" (s)\n");
    return 0;
}