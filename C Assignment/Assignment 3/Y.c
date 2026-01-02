#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for Y:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
        
            if((i==j && i<4) || (i+j==6 && i<4) || (j==3 && i>=4))
                
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}