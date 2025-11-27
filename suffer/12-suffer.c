#include <stdio.h>
// グローバル変数はプログラムの開始時に自動的に0に初期化される
// グローバル変数は全ての関数で共有される
// 他のファイルからグローバル変数を参照するには呼び出さないといけない

int count;

int countfunc(void);

int main(void) {
    countfunc();
    count = 10;
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void) {
    count++;
    printf("%d\n", count);
    return count;
}