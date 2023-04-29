/*
* File Name: Bai2.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes for rectangle
*/

#ifndef __BAI2_H
#define __BAI2_H

#include <stdio.h>
#include <stdint.h>
#include <math.h>

class Rectangle{
    private:
        uint8_t Length;
        uint8_t Width;
    public:
        Rectangle(uint8_t length, uint8_t width);
        uint8_t getLenghth();
        uint8_t getWidth();
        uint8_t Perimeter();
        uint8_t Area();
        double diagonalLine();
        void checkSquare();
};

#endif