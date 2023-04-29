/*
* File Name: Bai3.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes for circle
*/

#ifndef __BAI3_H
#define __BAI3_H

#include <stdio.h>
#include <stdint.h>
#include <math.h>

class Circle{
    private:
        uint8_t R;
        const double PI = 2 * acos(0);
    public:
        Circle(uint8_t r);
        uint8_t getRadius();
        double Perimeter();
        double Area();
};

#endif