/*
* File Name: Input.h
* Author: Giao Pham
* Date: 27/03/2023
* Description: This file is a header file that contains a function definition to sum the input numbers of data types int and double
*/

#ifndef __INPUT_H
#define __INPUT_H

#include <stdio.h>
#include <stdarg.h>


/*
* Function: sum
* Description: This function calculates sum of input numbers of data type int and double
* Input:
*   n: number of inputs
* Output:
*   return sum of n input numbers
*/
double sum(int n, ...);

#endif