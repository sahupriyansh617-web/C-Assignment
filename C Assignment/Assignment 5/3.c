#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, count = 0, len;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    len = strlen(str);

    
    for(i = 0; i < len; i++) {
        
        if((i == 0 && !isspace(str[i])) || 
           (!isspace(str[i]) && isspace(str[i-1]))) {
            count++;
        }
    }

    printf("Number of words in the string: %d\n", count);

    return 0;
}