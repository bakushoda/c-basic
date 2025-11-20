#include <stdio.h>

// int main(void)
// {
//     int data;
//     scanf("%d", &data); /* 入力部分、&をつける */
//     printf("%d\n", data);
//     return 0;
// }

// int main(void) {
//     double data;
//     scanf("%lf", &data); // scafの時は\nをつけない。無限に待ちが発生する
//     printf("%f\n", data);
//     return 0;
// }

// 最小値から最大値の間の整数の合計値を求める
// int main(void) {
//     int data1, data2;
//     scanf("%d, %d", &data1, &data2);

//     int result = (data1 + data2) * (data2 - data1 + 1) / 2;
//     printf("%d\n", result);
//     return 0;
// }

// int main(void)
// {
//     int side, high, square;

//     scanf("%d,%d", &side, &high);
//     square = side * high / 2;
//     printf("%d\n", square);

//     return 0;
// }

/*
定価を入力すると、1割引、3割引、5割引、8割引の値段を、一覧表示するプログラムを作成せよ。
なお、結果の金額は整数値での表示が望ましいが、実数でもかまわない。
*/

int main(void) {
    int price;
    printf("please put in price");
    scanf("%d", &price);

    int p10 = (int)(price * 0.9);
    int p30 = (int)(price * 0.7);
    int p50 = (int)(price * 0.5);
    int p80 = (int)(price * 0.2);

    printf("%d, %d, %d, %d", p10, p30, p50, p80);

    return 0;
}
