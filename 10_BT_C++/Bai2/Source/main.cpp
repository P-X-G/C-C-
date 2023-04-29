/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This is file for rectangle
*/

# include "Bai2.h"

int main(int argc, char const *argv[])
{
    Rectangle rec(3,4);
    printf("Length = %d\n",rec.getLenghth());
    printf("Width = %d\n",rec.getWidth());
    printf("Perimeter = %d\n",rec.Perimeter());
    printf("Area = %d\n",rec.Area());
    printf("Diagonal Line = %.2f\n",rec.diagonalLine());
    rec.checkSquare();
    return 0;
}