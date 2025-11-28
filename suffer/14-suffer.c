#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void) {
//     char c = 'A' + 9; // Aは65番
//     printf("%c\n", c);

//     return 0;
// }


// // 数値に変換
// int main(void) {
//     char c = '8';
//     int suuti = c - '0';
//     printf("%d\n", suuti);

//     return 0;
// }

// C言語では\0を文字列の最後につけることで文字数を判定する。これをEOSと呼ぶ。end of string
// 文字列の最後にはEOSが入るため、実際に格納する文字列よりも1つ多くなる

// char str[6] = {'M', 'A', 'R', 'I', 'O'};
// 上記でもあり

// EOSを書いた場合は要素数を省略することができる

// // 文字列リテラルで書く
// int main(void)
// {
//     char str[] = "MARIO";
//     printf("%s\n", str);
//     return 0;
// }

// atoi関数
// 文字列を数値に変換
// stdlib.hをincludeする必要がある
// 実数に変換する場合にはatof関数を使用する

// int main(void) {
//     char str[] = "123";
//     int suuti = atoi(str);
//     printf("%d\n", suuti);

//     return 0;
// }

// // strcpy関数
// // 文字列のコピー
// // string.hをinclude
// int main(void)
// {
//     char str[10];
//     strcpy(str, "MARIO");
//     printf("%s\n", str);
//     return 0;
// }

// strcat
// 配列に記憶された文字列の連結
// string.hをinclude

// int main(void) {
//     char str1[12] = "DRAGON";
//     char str2[] = "QUEST";

//     strcat(str1, str2);
//     printf("%s\n", str1);

//     return 0;
// }

// sprintf関数
// stdio.h

// int main(void) {
//     char str[16];
//     char str1[12] = "DRAGON";
//     char str2[] = "QUEST";
//     int i = 3;
//     sprintf(str, "%s%s%d\n", str1, str2, i);
//     printf(str);

//     return 0;
// }

// strlen関数で文字列の文字数をカウントすることができる
// 文字列同士の比較は==演算子で行うことはできない。これだと配列が同じメモリを使う配列なのかを比較してしまう。中身の比較はしていない。

// strcmp関数で文字列の比較ができる
// string.h
// 二つの文字配列の中身が同じである場合は0を返す

