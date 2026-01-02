#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for B:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            
            if(j==0 ||                               
               (i==0 && j<6) ||                    
               (i==3 && j<6) ||                     
               (i==6 && j<6) ||                     
               (j==6 && i!=0 && i!=3 && i!=6))       
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}