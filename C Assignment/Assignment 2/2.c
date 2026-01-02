#include <stdio.h>

int main() {
    float balance1, balance2;

    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    
    int isEqual = (balance1 == balance2);
    int isFirstGreater = (balance1 > balance2);
    int isSecondGreater = (balance2 > balance1);

    
    printf("\n--- Comparison Result ---\n");
    printf("Are both balances equal? %d\n", isEqual);
    printf("Is the first balance greater? %d\n", isFirstGreater);
    printf("Is the second balance greater? %d\n", isSecondGreater);

    return 0;
}