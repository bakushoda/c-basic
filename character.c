#include <stdio.h>

int main(void) {
    char s[] = {'a', 'b', 'c', '\0'}; /* 文字列はcharの配列。終端は\0 */
    char m[] = "abc"; /* 上の行と同じ出力結果。終端の\0があるので要素数を書く場合は4が入る。*/

    printf("%c\n", s[1]);
}

