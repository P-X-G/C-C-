/*
* File Name: main.c
* Author: Giao Pham
* Date: 19/03/2023
* Description: Manage cart
*/

#include "Bitmask.h"

int main(int argc, char const *argv[])
{   
    uint8_t GIO_HANG;

    /* Add to cart */ 
    Them_Vao_Gio_Hang(&GIO_HANG, (DO_DUNG_CA_NHAN)(NHAN | AO | GIAY | QUAN));

    /* Display cart */ 
    Hien_Thi_Gio_Hang(GIO_HANG);

    /* Remove from cart */ 
    Xoa_Khoi_Gio_Hang(&GIO_HANG, (DO_DUNG_CA_NHAN)(NHAN | GIAY));

    /* Check the item in the cart */ 
    Kiem_Tra_Gio_Hang(GIO_HANG, GIAY);

    /* Display cart after removing */ 
    Hien_Thi_Gio_Hang(GIO_HANG);
    return 0;
}