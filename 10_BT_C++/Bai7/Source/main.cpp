/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This is file for day, month, year
*/

#include "Bai7.h"

int main(int argc, char const *argv[])
{
    Date date(1,1,1900);
    date.calculateAge();
    date.isHoliday();
    return 0;
}