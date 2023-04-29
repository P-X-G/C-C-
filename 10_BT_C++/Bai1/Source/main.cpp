/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 23/04/2023
* Description: This is file to calculate distance and area of triangle in 2D Space
*/

# include "Bai1.h"

int main(int argc, char const *argv[])
{
    Diem diemA(5,2);
    Diem diemB(2,3);
    Diem diemC(6,9);

    PhepToan tinhtoan(diemA,diemB);
    PhepToan tinhtoan2(diemA,diemB,diemC);

    printf("Khoang cach: %.2f\n", tinhtoan.getKhoangCach());

    printf("Dien tich hinh tam giac: %.2f\n\n", tinhtoan2.getDienTich());

    return 0;
}