/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 25/04/2023
* Description: This is file for Book
*/

#include "Bai10.h"

int main(int argc, char const *argv[])
{
    Sach book;
    book.SetTenSach("The Universe in a Nutshell");
    book.setTenTacGia("Stephen Hawking");
    book.setNamXuatBan(2001);
    book.setSoLuong(224);
    book.muonSach();
    book.inThongTinSach();
    return 0;
}