#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for F:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
           
            if(i==0 || i==3 || j==0)  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}