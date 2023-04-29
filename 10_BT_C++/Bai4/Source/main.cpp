/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This is file for animal
*/

#include "Bai4.h"

int main(int argc, char const *argv[])
{
    Animal AnimalA("Tiger",1,2,3);
    Animal AnimalB("Lion",2,3,4);
    printf("MBI = %.2f\n",AnimalA.BMI());

    Compare comp(AnimalA,AnimalB);
    comp.compareAge();
    comp.compareWeight();
    return 0;
}