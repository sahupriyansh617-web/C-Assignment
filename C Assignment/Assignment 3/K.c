#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for K:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
        
            if(j==0 || i+j==3 || i-j==3)   
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
