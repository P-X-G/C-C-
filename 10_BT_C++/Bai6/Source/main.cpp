/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This is file for fraction
*/

#include "Bai6.h"

int main(int argc, char const *argv[])
{
    Fraction PhanSo1(1,2);
    Fraction PhanSo2(1,4);
    Calculate cal(PhanSo1,PhanSo2);
    cal.Sum();
    cal.Sub();
    cal.Multip();
    cal.Divi();
    return 0;
}