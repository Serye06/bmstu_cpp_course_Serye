#include <stdio.h>
#include <assert.h>
#include "str2int.h"
#define MAX_LENGTH 100

int str2int(const char* str) {
    int num = 0;
    int i = 0; 
    while (str[i] >= '0' && str[i] <= '9') { 
        num = num * 10 + (str[i++] - '0'); 
    }

}

// int main() {
//     // char str[MAX_LENGTH]; 
//     // int num = 0;
//     // int i = 0; 

//     //printf("Введите строку: ");
//     //scanf("%s", str); 
//     // char* str = "123";
//     // while (str[i] >= '0' && str[i] <= '9') { 
//     //     num = num * 10 + (str[i++] - '0'); 
//     // }
//     printf("%d\n", str2int("123"));

//     return 0;
// }
