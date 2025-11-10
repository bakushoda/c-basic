#include <stdio.h>

int main(void) {
    int i = 10;
    while( i < 10) {
        printf("%d\n", i);
        i++;
    }

    int j = 10;
    do {
        printf("%d\n", j);
        j++;
    } while (j < 10);
    return 0;
    
}