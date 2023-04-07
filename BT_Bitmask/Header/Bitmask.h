/*
* File Name: Bitmask.h
* Author: Giao Pham
* Date: 19/03/2023
* Description: This file is a header file that contains contains a data type definition and functions definition to manage cart  
*/

#ifndef __BITMASK_H
#define __BITMASK_H

#include <stdio.h>
#include <stdint.h>

/* Using enums to declare personal items */
typedef enum{
    AO          = 1 << 0,     //0b00000001  // shift 1 bit to the left
    QUAN        = 1 << 1,     //0b00000010
    VAY         = 1 << 2,     //0b00000100
    DAM         = 1 << 3,     //0b00001000
    NHAN        = 1 << 4,     //0b00010000
    VONG_TAY    = 1 << 5,     //0b00100000
    GIAY        = 1 << 6,     //0b01000000
    TUI         = 1 << 7      //0b10000000
}DO_DUNG_CA_NHAN;

/* Function adds an item or items to cart */
void Them_Vao_Gio_Hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung);

/* Function removes an item or items from the cart */
void Xoa_Khoi_Gio_Hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung);

/* Function checks the item in the cart */
void Kiem_Tra_Gio_Hang(uint8_t gio_hang, DO_DUNG_CA_NHAN ten_do_dung);

/* Function displays the entire list of items in the cart */
void Hien_Thi_Gio_Hang(uint8_t gio_hang);


#endif