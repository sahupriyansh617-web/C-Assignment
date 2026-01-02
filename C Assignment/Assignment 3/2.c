#include <stdio.h>

int main() {
    int i, j;

    
    printf("P:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(j==0 || (i==0 && j<6) || (i==3 && j<6) || (j==6 && i>0 && i<3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    printf("\nR:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(j==0 || (i==0 && j<6) || (i==3 && j<6) || (j==6 && i>0 && i<3) || (i-j==3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


    printf("\nI:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(i==0 || i==6 || j==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    printf("\nY:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if((i==j && i<4) || (i+j==6 && i<4) || (j==3 && i>=4))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    printf("\nA:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(i==0 && j>0 && j<6 || i==3 || j==0 && i>0 || j==6 && i>0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    printf("\nN:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(j==0 || j==6 || i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


    printf("\nS:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if((i==0 && j>0) || (i==3 && j>0 && j<6) || (i==6 && j<6) || (j==0 && i>0 && i<3) || (j==6 && i>3 && i<6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\nH:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(j==0 || j==6 || i==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    printf("\nS:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if((i==0 && j>0) || (i==3 && j>0 && j<6) || (i==6 && j<6) || (j==0 && i>0 && i<3) || (j==6 && i>3 && i<6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    printf("\nA:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(i==0 && j>0 && j<6 || i==3 || j==0 && i>0 || j==6 && i>0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    printf("\nH:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if(j==0 || j==6 || i==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


    printf("\nU:\n");
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            if((j==0 && i<6) || (j==6 && i<6) || (i==6 && j>0 && j<6))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}