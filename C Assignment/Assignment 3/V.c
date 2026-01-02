#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for V:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
        
            if((j==i && i<5) || (i+j==6 && i<5) || (i>=5 && j==3))
               
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}