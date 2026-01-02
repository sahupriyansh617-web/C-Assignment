#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for Q:\n");
    for(i=0; i<8; i++) {   
        for(j=0; j<8; j++) {
        
            if((i==0 && j>0 && j<6) ||        
               (i==6 && j>0 && j<6) ||             
               (j==0 && i>0 && i<6) ||            
               (j==6 && i>0 && i<6) ||            
               (i==j && i>=4))                  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}