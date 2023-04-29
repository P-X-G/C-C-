/*
* File Name: Bai1.h
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file is a header file that contains all the prototypes to calculate distance and area of triangle in 2D Space
*/

#ifndef __BAI1_H
#define __BAI1_H

#include <stdio.h>
#include <stdint.h>
#include <math.h>

class Diem{
    private:
        int8_t toaDoX;
        int8_t toaDoY;
    public:
        Diem(int8_t toaDoX = 0, int8_t toaDoY = 0);
        int8_t getToaDoX();
        int8_t getToaDoY();
};


class PhepToan{
    private:
        Diem diemA;
        Diem diemB;
        Diem diemC;
        typedef enum{
            KHOANG_CACH,
            DIEN_TICH,
        }CacPhepToan;
        CacPhepToan checkPhepToan;
    public:
        PhepToan(Diem diemA, Diem diemB);
        PhepToan(Diem diemA, Diem diemB, Diem diemC);
        double getKhoangCach();
        double getDienTich();
};

#endif