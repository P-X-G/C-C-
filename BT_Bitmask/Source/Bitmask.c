/*
* File Name: Bitmask.c
* Author: Giao Pham
* Date: 19/03/2023
* Description: This is a file containing functions that manage cart.  
*/

# include "Bitmask.h"

/*
* Function: Them_Vao_Gio_Hang
* Description: The function uses the OR (|) operator to add items to the cart.
* Input:
*   *gio_hang: Using the pointer to change the value of the variable 'gio_hang'.
*   ten_do_dung: The name of the items want to add in the cart.
* Output:
*   Items added to cart.
*/
void Them_Vao_Gio_Hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    *gio_hang |= ten_do_dung;
}

/*
* Function: Xoa_Khoi_Gio_Hang
* Description: The function uses the AND operator (&) with NOT (~) to remove items from the cart.
* Input:
*   *gio_hang: Using the pointer to change the value of the variable 'gio_hang'.
*   ten_do_dung: The name of the items want to remove in the cart.
* Output:
*   Items removed to cart.
*/
void Xoa_Khoi_Gio_Hang(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    *gio_hang &= ~ten_do_dung;
}

/*
* Function: Kiem_Tra_Gio_Hang
* Description: The function use AND operator (&) to check the item in the cart.
* Input:
*   gio_hang: Cart needs to be checked.
*   ten_do_dung: Item needs to be checked.
* Output:
*   If there is an item in the cart, it will print "co trong gio hang", otherwise, it will print "khong co trong gio hang".
*/
void Kiem_Tra_Gio_Hang(uint8_t gio_hang, DO_DUNG_CA_NHAN ten_do_dung){
    printf("Kiem tra gio hang:\n");
    switch (ten_do_dung) {
        case AO:
            printf("%s\t", "AO");
            break;
        case QUAN:
            printf("%s\t", "QUAN");
            break;
        case VAY:
            printf("%s\t", "VAY");
            break;
        case DAM:
            printf("%s\t", "DAM");
            break;
        case NHAN:
            printf("%s\t", "NHAN");
            break;
        case VONG_TAY:
            printf("%s\t", "VONG TAY");
            break;
        case GIAY:
            printf("%s\t", "GIAY");
            break;
        case TUI:
            printf("%s\t", "TUI");
            break;
        default:
            break;
    }
    if (gio_hang & ten_do_dung) {
        printf("co trong gio hang\n");
    } else {
        printf("khong co trong gio hang\n");
    }
}

/*
* Function: Hien_Thi_Gio_Hang
* Description: The function uses the AND operator (&) to display the items in the cart.
* Input:
*   gio_hang: Cart display.  
* Output:
*   If any item is in the cart, will print STT and item name.
*/
void Hien_Thi_Gio_Hang(uint8_t gio_hang){
    printf("Gio hang gom co:\n");
    printf("STT\t TEN\n");
    if (gio_hang & AO) {
        printf("1\t AO\n");
    }
    if (gio_hang & QUAN) {
        printf("2\t QUAN\n");
    }
    if (gio_hang & VAY) {
        printf("3\t VAY\n");
    }
    if (gio_hang & DAM) {
        printf("4\t DAM\n");
    }
    if (gio_hang & NHAN) {
        printf("5\t NHAN\n");
    }
    if (gio_hang & VONG_TAY) {
        printf("6\t VONG TAY\n");
    }
    if (gio_hang & GIAY) {
        printf("7\t GIAY\n");
    }
    if (gio_hang & TUI) {
        printf("8\t TUI\n");
    }
}