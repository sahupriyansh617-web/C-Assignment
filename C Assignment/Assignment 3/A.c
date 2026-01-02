#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for A:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
        
            if((i==0 && j>0 && j<6) ||       
               (i==3) ||                   
               (j==0 && i>0) ||              
               (j==6 && i>0))               
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}