/*
* File Name: Traffic.h
* Author: Giao Pham
* Date: 19/03/2023
* Description: This file is a header file that contains all the prototypes/macros for choosing the type of vehicle and displaying the price 
*/

#ifndef TRAFFIC_H
#define TRAFFIC_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

/* Using enum to declare vehicle types */
typedef enum{
    AIRPLANE,
    HELICOPTER,
    CAR,
    MOTORBIKE,
    BICYCLE,
    SHIP,
    CANO,
}phuong_tien;

/* Using Union to transmit the selected vehicle type */
typedef union{
    phuong_tien airplane;
    phuong_tien helicopter;
}hang_khong;

/* Using Union to transmit the selected vehicle type */
typedef union{
    phuong_tien car;
    phuong_tien motorbike;
    phuong_tien bicycle;
}bo;

/* Using Union to transmit the selected vehicle type */
typedef union{
    phuong_tien ship;
    phuong_tien cano;
}thuy;

/* Using union to transmit the selected traffic type */
typedef union{
    hang_khong duong_hang_khong;
    bo duong_bo;
    thuy duong_thuy;
    phuong_tien loai_phuong_tien;
}phuong_tien_giao_thong;


/* Macros are used to shorten the vehicle selection functions */ 
#define LOAI_HINH_GIAO_THONG(ten_duong, ...)                \
    /* Vehicle selection functions */                       \
    void ten_duong(phuong_tien_giao_thong *phuong_tien){    \
        printf("Ban da chon %s !!!\n", #ten_duong);         \
        printf("Vui long chon loai phuong tien \n");        \
        int phim = 0;                                       \
        do                                                  \
        {                                                   \
            __VA_ARGS__                                     \
            scanf("%d", &phim);                             \
        } while (1);}                                       \

/* Macros are used to declare data in the vehicle selection functions */
#define KEY(key)    key

#define NAME(name)  name

#define VALUE(value)    value

/* Macro used to display the data want to select in the vehicle selection functions */
#define DISPLAY(key, name)                                   \
    printf("nhan %d: %s\n",key, name);                       

/* Macro used to check and display the data entered in the vehicle selection function */
#define IF(key, name, value)\
if (phim==key)                                               \
{                                                            \
    printf("Ban chon %s \n", name);                          \
    value;                                                   \
    break;                                                   \
}

/* Macros are used to combine displaying the data want to select, checking and displaying the entered data in the vehicle selection function */
#define KEY_VALUE(key, name, value)                          \
DISPLAY(key, name)                                           \
IF(key, name, value)

/* Function selects the type of traffic */
void Chuong_Trinh_Chon_Duong(phuong_tien_giao_thong *phuong_tien);

/* Function that displays the price of the selected vehicle */
void Hien_Thi_Gia(phuong_tien_giao_thong phuong_tien);

#endif