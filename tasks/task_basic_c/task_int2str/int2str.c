#include <stdio.h>
#include <assert.h>
#include "int2str.h"
#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH]; 
    int num = 0;
    int i = 0; 

    printf("Введите строку: ");
    scanf("%s", str); 

    while (str[i] >= '0' && str[i] <= '9') { 
        num = num * 10 + (str[i++] - '0'); 
    }
    printf("%d\n", num);

    return 0;
}

