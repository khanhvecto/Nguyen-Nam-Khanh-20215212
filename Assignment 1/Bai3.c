#include<stdio.h>
#include "student.h"
#include<string.h>

void Choice_1() {
    FILE *f = fopen("SV2023.dat", "rb");
    Student Stu;
    printf("Name\tGrade\n");
    while(fread(&Stu, sizeof(Student), 1, f) == 1) {
        printf("%s\t", Stu.name);
        printf("%d\n", Stu.grade);
    }
    fclose(f);
}

void Choice_2() {
    FILE *f = fopen("SV2023.dat", "ab");
    int n;
    Student Stu;
    printf("So luong sinh vien nhap them la: "); scanf("%d", &n);
    for(int i = 1; i<=n; i++) {
        printf("Ten: "); scanf("%s", Stu.name);
        printf("Diem: "); scanf("%d", &Stu.grade);
        fwrite(&Stu, sizeof(Student), 1, f);
    }
    fclose(f);
}

void Choice_3() {
    char search[20];
    printf("Input name to search: "); scanf("%s", search);
    FILE *f = fopen("SV2023.dat", "rb");
    Student Stu;
    while(fread(&Stu, sizeof(Student), 1, f) == 1)
        if(strcmp(Stu.name, search) == 0) {
            printf("Grade: %d\n", Stu.grade);
            FILE *out = fopen("output.txt", "w");
            fprintf(out, "%s %d", Stu.name, Stu.grade);
            fclose(out);
        }
    fclose(f);
}

int main() {
    int choice=1;
    while(choice != 4) {
        printf("Chuong trinh quan ly sinh vien\n-----------------------\n");
        printf("1. Xem danh sach sinh vien\n2. Nhap them sinh vien\n3. Tim sinh vien theo ten\n4. Thoat\n");
        printf("=> Your choice: "); scanf("%d", &choice);
        switch(choice) {
            case 1:
                Choice_1();
                break;
            case 2:
                Choice_2();
                break;
            case 3:
                Choice_3();
                break;
        }
    }
    return 0;
}