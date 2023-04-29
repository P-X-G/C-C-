/*
* File Name: Bai1.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This file contains all the functions/methods to calculate distance and area of triangle in 2D Space
*/

# include "Bai1.h"

Diem::Diem(int8_t toaDoX, int8_t toaDoY){
    this->toaDoX = toaDoX;
    this->toaDoY = toaDoY;
}

/*
* Class: Diem
* Function: getToaDoX
* Description: This function use for getting ToaDoX
* Input:
*   Don't have input parameters
* Output:
*   return: toaDoX 
*/
int8_t Diem::getToaDoX(){
    return this->toaDoX;
}

/*
* Class: Diem
* Function: getToaDoY
* Description: This function use for getting ToaDoY
* Input:
*   Don't have input parameters
* Output:
*   return: toaDoY 
*/
int8_t Diem::getToaDoY(){
    return this->toaDoY;
}


PhepToan::PhepToan(Diem diemA, Diem diemB){
    this->diemA = diemA;
    this->diemB = diemB;
    checkPhepToan = KHOANG_CACH;
}

PhepToan::PhepToan(Diem diemA, Diem diemB, Diem diemC){
    this->diemA = diemA;
    this->diemB = diemB;
    this->diemC = diemC;
    checkPhepToan = DIEN_TICH;
}

/*
* Class: PhepToan
* Function: getKhoangCach
* Description: This function use for getting KhoangCach
* Input:
*   Don't have input parameters
* Output:
*   return: KhoangCach 
*/
double PhepToan::getKhoangCach(){
    if (this->checkPhepToan == KHOANG_CACH){
        return sqrt(pow((diemA.getToaDoX() - diemB.getToaDoX()),2) + pow((diemA.getToaDoY() - diemB.getToaDoY()),2));
    }
    return 0;
}

/*
* Class: PhepToan
* Function: getDienTich
* Description: This function use for getting DienTich
* Input:
*   Don't have input parameters
* Output:
*   return: DienTich 
*/
double PhepToan::getDienTich(){
    if (this->checkPhepToan == DIEN_TICH){
        double giatri = sqrt(pow(((diemB.getToaDoX() - diemA.getToaDoX())*(diemC.getToaDoY() - diemA.getToaDoY()) - (diemC.getToaDoX() - diemA.getToaDoX())*(diemB.getToaDoY() - diemA.getToaDoY())),2));
        return giatri / 2;
    }
    return 0;
}