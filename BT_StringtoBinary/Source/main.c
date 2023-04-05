/*
* File Name: main.c
* Author: Giao Pham
* Date: 12/03/2023
* Description: Converts String to Binary
*/

#include "StringtoBinary.h"

int main() {
    char str[] = "Hello World"; 
    int len = strlen(str); 

    printf("Binary cua '%s':\n", str);
    /* Loop each character in the string */ 
    for (int i = 0; i < len; i++) {
        /* Convert character to binary string and print it out */
        ConvertToBinary(str[i]); 
    }
    return 0; 
}
