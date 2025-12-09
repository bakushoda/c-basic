// 構造体

// structではなくて、typedefを使って宣言すると呼び出す時にstructをつける必要がない
#include <stdio.h>

struct person {
    char *name;
    int age;
}Tanaka, Takeda;  // 複数宣言できる。グローバル変数になる

typedef struct {
    char *name;
    int age;
}person2;

int main(void) {
    // struct person Tanaka;// ローカル変数

    Tanaka.name = "Tanaka";
    Tanaka.age = 23;

    printf("%s\n", Tanaka.name);

    person2 Yamada;

    Yamada.name = "Yamada";
    Yamada.age = 30;

    printf("%s\n", Yamada.name);

    return 0;
}

