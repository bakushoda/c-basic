#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    printf("%.1f", (a - 100) * 0.9);
}