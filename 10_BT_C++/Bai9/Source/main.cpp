/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 25/04/2023
* Description: This is file for Car
*/

#include "Bai9.h"

int main(int argc, char const *argv[])
{
    Car car("Black","Hybrid Engine",15000);
    car.Information();
    car.maintenancePrice();
    return 0;
}