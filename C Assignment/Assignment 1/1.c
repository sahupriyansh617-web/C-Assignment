#include <stdio.h>

int main() {
   
    int num = 10;
    float pi = 3.14f;
    char letter = 'A';
    double largeNum = 12345.6789;

    
    printf("Integer value: %d, Size: %zu bytes\n", num, sizeof(num));
    printf("Float value: %.2f, Size: %zu bytes\n", pi, sizeof(pi));
    printf("Character value: %c, Size: %zu bytes\n", letter, sizeof(letter));
    printf("Double value: %.4lf, Size: %zu bytes\n", largeNum, sizeof(largeNum));

    return 0;
}