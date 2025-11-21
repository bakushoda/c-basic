/*
月を入力すると、対応する陰暦の月を表示するプログラムを作成せよ。
なお、存在しない月を入力した時にも何かのメッセージを表示せよ。

ヒント:陰暦は1月から順番に、
睦月,如月,弥生,卯月,皐月,水無月,文月,葉月,長月,神無月,霜月,師走
*/

#include <stdio.h>

int main(void) {
    int month;
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("睦月");
        break;
    case 2:
        printf("如月");
    default:
        break;
    }
}