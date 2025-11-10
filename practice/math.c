#include <stdio.h>
int main(void) {
    int x = 10;
    x %= 3;
    x++;

    printf("%d", x);
    return 0;
}
