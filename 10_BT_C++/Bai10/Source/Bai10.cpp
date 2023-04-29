/*
* File Name: Bai10.cpp
* Author: Giao Pham
* Date: 25/04/2023
* Description: This file contains all the functions/methods for Book
*/

#include "Bai10.h"

/*
* Class: Sach
* Function: SetTenSach
* Description: This function use for setting name of book
* Input:
*   tenSach - name of book
* Output:
*   return: None
*/
void Sach::SetTenSach(string tenSach){
    this->tenSach = tenSach;
}

/*
* Class: Sach
* Function: getTenSach
* Description: This function use for getting name of book
* Input:
*   Dont have input parameters
* Output:
*   return: name of book
*/
string Sach::getTenSach(){
    return this->tenSach;
}

/*
* Class: Sach
* Function: setTenTacGia
* Description: This function use for setting author of book
* Input:
*   setTenTacGia - author of book
* Output:
*   return: None
*/
void Sach::setTenTacGia(string setTenTacGia){
    this->tenTacGia = setTenTacGia;
}

/*
* Class: Sach
* Function: getTenTacGia
* Description: This function use for getting author of book
* Input:
*   Dont have input parameters
* Output:
*   return: author of book
*/
string Sach::getTenTacGia(){
    return this->tenTacGia;
}

/*
* Class: Sach
* Function: setNamXuatBan
* Description: This function use for setting year of book
* Input:
*   namXuatBan - year of book
* Output:
*   return: None
*/
void Sach::setNamXuatBan(uint16_t namXuatBan){
    this->namXuatBan = namXuatBan;
}

/*
* Class: Sach
* Function: getNamXuatBan
* Description: This function use for getting year of book
* Input:
*   Dont have input parameters
* Output:
*   return: year of book
*/
uint16_t Sach::getNamXuatBan(){
    return this->namXuatBan;
}

/*
* Class: Sach
* Function: setSoLuong
* Description: This function use for setting quantity of book
* Input:
*   soLuong - quantity of book
* Output:
*   return: None
*/
void Sach::setSoLuong(uint16_t soLuong){
    this->soLuong = soLuong;
}

/*
* Class: Sach
* Function: getSoLuong
* Description: This function use for getting quantity of book
* Input:
*   Dont have input parameters
* Output:
*   return: quantity of book
*/
uint16_t Sach::getSoLuong(){
    return this->soLuong;
}

/*
* Class: Sach
* Function: muonSach
* Description: This function use for setting the status of borrowing books
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Sach::muonSach(){
    trangThaiSach = DA_MUON_SACH;
}

/*
* Class: Sach
* Function: traSach
* Description: This function use for setting the status of returning books
* Input:
*   Dont have input parameters
* Output:
*   return: None
*/
void Sach::traSach(){
    trangThaiSach = CHUA_MUON_SACH;
}

/*
* Class: Sach
* Function: inThongTinSach
* Description: This function is used to display information of book
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Sach::inThongTinSach(){
    printf("Ten sach: %s\n",this->tenSach.c_str());
    printf("Tac gia: %s\n",this->tenTacGia.c_str());
    printf("Nam san xuat: %d\n",this->namXuatBan);
    printf("So luong: %d\n",this->soLuong);
    if (this->trangThaiSach == DA_MUON_SACH){
        printf("%s da duoc muon\n",this->tenSach.c_str());
    }else{
        printf("%s da duoc tra\n",this->tenSach.c_str());
    }
}