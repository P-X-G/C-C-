/*
* File Name: Transmit.c
* Author: Giao Pham
* Date: 12/03/2023
* Description: This is a file containing a function that transmits data
*/

#include "Transmit.h"

/*
* Function: Transmit
* Description: Function transmits data from 'uid' and 'data' to data_frame
* Input:
*   id: 'uid' to transmit
    dulieu: 'data' to transmit
* Output:
*   Return data is transmitted from 'uid' and 'data'
*/
char* Transmit(char* id, char* dulieu) {
    frame_nfc nfc;
    /* Dynamic memory allocation for variable result */
    char* result = (char*)malloc(12); 
    strcpy(nfc.frame.uid, id);
    strcpy(nfc.frame.data, dulieu);
    for (int i = 0; i < 12; i++)
    {
        result[i] = nfc.data_frame[i];
    }
    return result;
}