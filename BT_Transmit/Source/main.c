/*
* File Name: main.c
* Author: Giao Pham
* Date: 12/03/2023
* Description: Transmit data
*/

#include "Transmit.h"

int main() {
    /* Store the return of the Transmit() function in the result variable */
    char *result = Transmit((char*)"1011",(char*)"15677897"); 
    for (size_t i = 0; i < 12; i++)
    {
        /* Print each character of the result variable */
        printf("%c", result[i]); 
    }
    /* Freeing the allocated memory */
    free(result); 
    return 0;
}
