#include <stdio.h>

int main(void) {
    printf("整数を入力してください");

    int n;
    scanf("%d", &n);

    int result = n + 13;
    printf("%dに13を加えると%dです", n, result);
}