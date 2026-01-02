#include <stdio.h>

int main() {
    int x = 5, y;

   
    y = ++x;  // x is incremented first, then assigned to y
    printf("After pre-increment (++x):\n");
    printf("x = %d, y = %d\n\n", x, y);


    x = 5;

    y = x++;  // x is assigned to y first, then incremented
    printf("After post-increment (x++):\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}