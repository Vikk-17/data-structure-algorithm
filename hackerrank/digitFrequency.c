#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    // char str[] = "a11472o5t6"; // 0 2 1 0 1 1 1 1 0 0 
    // char str[30];
    // for large string
    long int max_len = 1000000;
    char *str = malloc(max_len * sizeof(char));
    printf("Enter the string: ");
    scanf("%s", str);
    int hash[10] = {0};
    for(int i = 0; i<strlen(str); i++) {
        if(isdigit(str[i])) {
            // printf("%d ", str[i] - '0');
            hash[str[i] - '0'] ++;
        }
    }
    for(int i = 0; i<10; i++) {
        printf("%d ", hash[i]);
    }
    printf("\n\n");

    free(str);
    return 0;
}

