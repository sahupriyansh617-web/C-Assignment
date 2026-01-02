    #include <stdio.h>

int main() {
    int i, j;

    printf("Pattern for N:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            
            if(j==0 || j==6 || i==j)   
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}