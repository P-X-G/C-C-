/*
* File Name: Bai7.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes for day, month, year
*/

#ifndef __BAI7_H
#define __BAI7_H

#include <stdio.h>
#include <stdint.h>
#include <time.h>

class Date{
    private:
        uint8_t day;
        uint8_t month;
        uint16_t year;
    public:
        Date(uint8_t day, uint8_t month, uint16_t year);
        uint8_t getDay();
        uint8_t getMonth();
        uint8_t getYear();
        void calculateAge();
        void isHoliday();
};

#endif