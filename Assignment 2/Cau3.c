#include<stdio.h>

typedef struct {
    int dd, m, yy, hh, mm, ss;
    float tempe;
} data;

int main() {
    FILE *f = fopen("temp.dat", "r");
    data temp;
    float AvgTempDay, AvgTemp1, AvgTemp2;
    int count, count1, count2;
    AvgTempDay = AvgTemp1 = AvgTemp2 = count = count1 = count2 = 0;
    while(fscanf(f, "%d/%d/%d %d:%d:%d", &temp.dd, &temp.m, &temp.mm, &temp.hh, &temp.mm, &temp.ss) == 3 || fscanf(f, "%f", &temp.tempe) == 1) {
        AvgTempDay += temp.tempe; count++;
        if(5<=temp.hh && temp.hh<16) {
            AvgTemp1 += temp.tempe;
            count1++;
        }
        if(16<=temp.hh && temp.hh<22) {
            AvgTemp2 += temp.tempe;
            count2++;
        }
    }
    printf("Nhiet do trung binh ngay: %.3f\n", AvgTempDay/count);
    printf("Nhiet do trung binh tu 5h den 15h59'59'': %.3f\n", AvgTemp1/count1);
    printf("Nhiet do trung binh tu 16h den 21h59'59'': %.3f\n", AvgTemp2/count2);
    fclose(f);
    return 0;
}