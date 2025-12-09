#include <stdio.h>

int main(void) {
    printf("整数を入力してください");

    int n;
    scanf("%d", &n);

    int result = n - 7;
    printf("%dから7をひくと%dです", n, result);
}