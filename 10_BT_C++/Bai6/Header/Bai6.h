/*
* File Name: Bai6.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes for fraction
*/

#ifndef __BAI6_H
#define __BAI6_H

#include <stdio.h>
#include <stdint.h>

class Fraction{
    private:
        int8_t Numerator;
        int8_t Denominator;
    public:
        Fraction(int8_t Numerator = 0, int8_t Denominator = 0);
        int8_t getNumerator();
        int8_t getDenominator();
};

class Calculate{
    private:
        Fraction SoA;
        Fraction SoB;
    public:
        Calculate(Fraction SoA, Fraction SoB);
        void Sum();
        void Sub();
        void Multip();
        void Divi(); 
};

#endif