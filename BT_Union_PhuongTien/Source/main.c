/*
* File Name: main.c
* Author: Giao Pham
* Date: 19/03/2023
* Description: Choose the type of vehicle and display the price 
*/

# include "Traffic.h"

int main(int argc, char const *argv[])
{
    phuong_tien_giao_thong phuong_tien;
    Chuong_Trinh_Chon_Duong(&phuong_tien);
    Hien_Thi_Gia(phuong_tien);

    return 0;
}