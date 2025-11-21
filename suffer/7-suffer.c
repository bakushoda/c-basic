/*
西暦年を入力すると、その年にオリンピックが開かれるか、
表示するプログラムを作成せよ。
可能なら、夏季と冬季の区別も表示できればなお良い。
ヒント:シドニー五輪(夏)は2000年開催であった。

※条件がややこしくなるので、
以前夏季と冬季が同じ年だった時期のことは無視する。
*/

#include <stdio.h>

int main(void) {
    int year;
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("summer olympic year");
    } else if ((year - 2) % 4 == 0) {
        printf("winter olympic year");
    }
    
    return 0;
}