/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This is file for circle
*/

#include <Bai3.h>

int main(int argc, char const *argv[])
{
    Circle tron(3);
    printf("Radius = %d\n",tron.getRadius());
    printf("Perimeter = %.2f\n",tron.Perimeter());
    printf("Area = %.2f\n",tron.Area());
    return 0;
}