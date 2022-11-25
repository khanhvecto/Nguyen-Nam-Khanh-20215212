#include<stdio.h>

// Quy doi diem thi

void Exchange(float point) {
    int i;
    int points[10] = {0, 0, 4, 5, 5.5, 6.5, 7, 8, 8.5, 9.5};
    char char_point[10][2] = {"0", "F", "D", "D+", "C", "C+", "B", "B+", "A", "A+"};
    float num_point[10] = {0, 0, 1, 1.5, 2.0, 2.5, 3, 3.5, 4, 4};
    for (i = 0; i <= 9; ++i) {
        if(point < points[i+1]) break;
    }
    printf("Character score: %s, Number exchange score: %.1f\n", char_point[i], num_point[i]);
}

int main() {
    float point;
    do {
        printf("Input your mark: ");
        scanf("%f", &point);
    } while (point < 0 || point > 10);
    Exchange(point);
    return 0;
}