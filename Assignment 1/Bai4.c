#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void Print(int a) {
    switch(a) {
        case 0: printf("A "); break;
        case 1: printf("2 "); break;
        case 2: printf("3 "); break;
        case 3: printf("4 "); break;
        case 4: printf("5 "); break;
        case 5: printf("6 "); break;
        case 6: printf("7 "); break;
        case 7: printf("8 "); break;
        case 8: printf("9 "); break;
        case 9: printf("10 "); break;
        case 10: printf("J "); break;
        case 11: printf("Q "); break;
        case 12: printf("K "); break;
    }
}

int main() {
    srand(time(NULL));
    int c[13][4], x, a, b, CheckTuQuy[13], ExistTuQuy;

    for(int i=0; i<=12; i++)
        for(int j=0; j<=3; j++)
            c[i][j] = 0;

    for(int i = 1; i<=4; i++) {
        printf("Nguoi thu %d: ", i);

        //Initialize for CheckTuQuy count variable;
        for(int j=0; j<=12; j++) CheckTuQuy[j] = 0;
        ExistTuQuy = 0;

        for(int j = 1; j<=13; j++) {
            x = rand() % 52; a = x/4; b = x%4;
            while(c[a][b] == 1) {
                if(x != 51) {
                    x++; a = x/4; b = x%4;
                } else {x=0; a=0; b=0;} 
            }
            c[a][b] = 1;
            CheckTuQuy[a]++;

            // Print the card of player
            Print(a);
            switch(b) {
                case 0: printf("co, "); break;
                case 1: printf("ro, "); break;
                case 2: printf("bich, "); break;
                case 3: printf("tep, "); break;
            }
        }
        printf("\n");

        //Check if there's any group-4
        printf("\tTu quy: ");
        for(int j=0; j<=12; j++)
            if(CheckTuQuy[j] == 4) {
                Print(j);
                ExistTuQuy = 1;
            }
        if(ExistTuQuy != 1) printf("khong co");
        printf("\n");
    }
    return 0;
}