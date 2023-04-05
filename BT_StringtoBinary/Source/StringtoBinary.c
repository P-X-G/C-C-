/*
* File Name: StringtoBinary.c
* Author: Giao Pham
* Date: 12/03/2023
* Description: This is a file containing a function that converts String to Binary
*/

#include "StringtoBinary.h"

/*
* Function: ConvertToBinary
* Description: This function converts String to Binary
* Input:
*   c: Character to convert
* Output:
*   Binary code of the character to be converted
*/
void ConvertToBinary(char c) {
    printf("%c = ", c);
    // Loop from bit 7 to bit 0 
    for (int i = 7; i >= 0; i--) {
        /* Check the bit at position i of the input character */
        if (c & (1 << i)) { 
            /* If bit 1, print 1 */
            printf("1"); 
        } else {
            /* If bit 0, print 0 */ 
            printf("0"); 
        }
    }
    printf("\n"); 
}
