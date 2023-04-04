/*
* File Name: Input.c
* Author: Giao Pham
* Date: 27/03/2023
* Description: This is a file containing a function that calculates the sum of numbers of type int and double
*/

#include "Input.h"

/*
* Function: sum
* Description: This function calculates sum of input numbers of data type int and double
* Input:
*   n: number of inputs
* Output:
*   return sum of n input numbers
*/
double sum(int n, ...)
{
    double flag = 0;
    va_list ptr;
    va_start(ptr, n);
    for (int i = 0; i < n; i++)
    {
        if (sizeof(va_arg(ptr, double)) == sizeof(double))
            flag += va_arg(ptr, double);
        else
            flag += (double) va_arg(ptr, int);
    }
    va_end(ptr);
    return flag;
}