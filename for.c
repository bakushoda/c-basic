#include <stdio.h>

int main(void) {
    int m;
    for(m = 0; m < 10; m++) {
        if (m == 3) {
            continue;
        }
        if (m == 8) {
            break;
        }
        printf("%d\n", m);
    }

    return 0;
}