#include <stdio.h>

/*
int max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    int a =5;
    int b = 10;
    int result = max(a, b);
    
    printf("%d\n", result);
    return 0;
}

*/

/*
float average(int array[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += array[i];
    }
    return (float)sum / length;
}

int main(void) {
    int array[] = {2, 4, 6, 8};
    int length = sizeof(array) /sizeof(array[0]); // 配列全体のサイズ割る配列の一要素のサイズ=要素の個数
    float result = average(array, length);
    
    printf("%.2f\n", result);
    return 0;
}
*/

/*
2つの int 型の変数を入れ替える関数 swap() をポインタを使って実装し、
main() 内で a=3, b=7 を入れ替えて表示してください。
*/

// 値を直接書き換えているのでreturnする必要がない
void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void) {
    int a = 3;
    int b = 7;
    swap(&a, &b);

    printf("%d, %d", a, b );

    return 0;
}