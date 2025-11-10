#include <stdio.h>

float getGrater(float a, float b);
void sayHi(void);

int main(void) {
    float result;
    result = getGrater(5.2, 2.5);
    printf("%f\n", result);
    sayHi();
    return 0;
}


float getGrater(float a, float b) {
    // if (a >= b) {
    //     return a;
    // } else {
    //     return b;
    // }
    return (a >= b) ? a:b;
}


void sayHi(void) {
    printf("hi\n");
}
