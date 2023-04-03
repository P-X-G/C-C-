/*
* File Name: Input.c
* Author: Giao Pham
* Date: 27/03/2023
* Description: 
*/

#include "Input.h"

double tong(int sum, ...)
{
    double flag = 0;
    va_list ptr;
    va_start(ptr, sum);
    for (int i = 0; i < sum; i++)
    {
        if (sizeof(va_arg(ptr, double)) == sizeof(double))
            flag += va_arg(ptr, double);
        else
            flag += (double) va_arg(ptr, int);
    }
    va_end(ptr);
    return flag;
}