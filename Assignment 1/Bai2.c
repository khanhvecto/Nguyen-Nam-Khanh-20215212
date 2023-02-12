#include<stdio.h>

typedef struct {
    char name;
    int weight;
    int value;
    int quantity;
    float profit;
} Object;

int main() {
    FILE *f = fopen("BAG.INP", "r");
    int N, W, i, sorted[10], PositionMax, profit;
    float MaxProfit;
    Object Obj[10];

    fscanf(f, "%d %d", &N, &W); //Get infor from file
    i=1;
    for(i=1; i<=N; i++) {   
        fscanf(f, "%d %d %c", &Obj[i].weight, &Obj[i].value, &Obj[i].name);
        Obj[i].profit = (float) Obj[i].value / Obj[i].weight;
    }

    MaxProfit = 0;
    profit = 0;
    for(i = 1; i<=N; i++) sorted[i] = 0;
    for(i=1; i<=N; i++) {
        //Sort in descending order of profit to find the max profit position
        for(int j=1; j<=N; j++)
            if(MaxProfit<Obj[j].profit && sorted[j]!=1) {
                MaxProfit = Obj[j].profit;
                PositionMax = j;
            }

        //returning values for next loop
        sorted[PositionMax] = 1;
        MaxProfit = 0;

        //Update weight and profit
        Obj[PositionMax].quantity = (int) W / Obj[PositionMax].weight;
        profit += Obj[PositionMax].quantity * Obj[PositionMax].value;
        W -= Obj[PositionMax].quantity * Obj[PositionMax].weight;
    }

    printf("%d\n", profit);
    for(i = 1; i<=N; i++) printf("%c %d\n", Obj[i].name, Obj[i].quantity);

    fclose(f);
    return 0;
}