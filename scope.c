#include <stdio.h>

void f(void) {
    static int a = 0; /*　ローカル変数。関数の外に宣言すればグローバル変数。ただローカル変数の方が独立性が高いので推奨されている。*/
    a++;
    printf("%d\n", a);
}

int main(void) {
    f();
    f();
    f();
    return 0;
}

/*
void f(void) {
    int a = 0; // 自動変数でもある。関数fを呼び出してもaの値が保持されない。
    a++;
    printf("%d\n", a);
}
*/
/*
void f(void) {
    static int a = 0; // staticをつけることで静的変数になる。aの値が保持される。
    a++;
    printf("%d\n", a);
}
*/