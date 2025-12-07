// 構造体
// 複数の異なる型をまとめて作られた型のこと
#include <stdio.h>

struct student
{
    int year;
    int number;
    char name[32];
};

int main(void) {
    struct student data;

    data.year = 10;
    printf("%d\n", data.year);

    return 0;
}