#include<stdio.h>

typedef struct {
    int dd, mm, lTemp, hTemp, humidity;
} InputMonth;

typedef struct {
    float SumTemp;
    int day, SumHumidity;
    float AvgTemp, AvgHumidity;
} Month;

void Checking(Month m[], FILE *fptr, int *MostHumidMonth, int *DryestMonth) {
    InputMonth mi;
    int MostHumidity, LeastHumidity;
    for(int i=0; i<12; i++) 
        m[i].SumTemp = m[i].SumHumidity = m[i].day = 0;
    while((fscanf(fptr, "%d/%d %d-%d %d", &mi.dd, &mi.mm, &mi.lTemp, &mi.hTemp, &mi.humidity)) == 5) {
        m[mi.mm-1].SumTemp += (float) (mi.hTemp+mi.lTemp) / 2;
        m[mi.mm-1].SumHumidity += mi.humidity;
        m[mi.mm-1].day++;
    }
    fclose(fptr);

    //Find avg of each month
    for(int i=0; i<12; i++) {
        m[i].AvgTemp = m[i].SumTemp / m[i].day;
        m[i].AvgHumidity = (float) m[i].SumHumidity / m[i].day;
    }

    //Find the most and least humidity month
    *MostHumidMonth = *DryestMonth = MostHumidity = 0;
    LeastHumidity = 100;
    for(int i=0; i<12; i++) {
        if(MostHumidity < m[i].AvgHumidity) {
            MostHumidity = m[i].AvgHumidity;
            *MostHumidMonth = i;
        }
        if(LeastHumidity > m[i].AvgHumidity) {
            LeastHumidity = m[i].AvgHumidity;
            *DryestMonth = i;
        }
    }
}

int main() {
    FILE *fptr;
    Month m[12];
    int MostHumidMonth, DryestMonth;
    if((fptr = fopen("weather.txt", "r")) == NULL) {
        printf("Can't read weather.txt\n");
        return 1;
    } else {
        Checking(m, fptr, &MostHumidMonth, &DryestMonth);

        //Print result
        printf("Average temperature of each month:\n");
        for(int i=0; i<12; i++)
            printf("\tMonth %d: %.2f\n", i+1, m[i].AvgTemp);
        printf("The most humid month: %d\n", MostHumidMonth+1);
        printf("The dryest month: %d\n", DryestMonth+1);
        return 0;
    }
}