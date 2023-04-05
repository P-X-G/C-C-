/*
* File Name: Transmit.h
* Author: Giao Pham
* Date: 12/03/2023
* Description: This file is a header file that contains a data type definition and a function definition to transmit data
*/

#ifndef __TRANSMIT_H
#define __TRANSMIT_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h> 


/* Using Union for Transmiting data */
typedef union {
    struct frame {
        char uid[4];
        char data[8];
    }frame;
    char data_frame[12];
}frame_nfc;


/* Function transmits data from 'uid' and 'data' to data_frame */
char* Transmit(char* id, char* dulieu);

#endif