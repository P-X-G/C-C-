/*
* File Name: Bai10.h
* Author: Giao Pham
* Date: 25/04/2023
* Description: This file is a header file that contains all the prototypes for Book
*/

#ifndef __BAI10_H
#define __BAI10_H

#include <stdio.h>
#include <stdint.h>
#include <string>

using namespace std;

class Sach{
    private:
        string tenSach;
        string tenTacGia;
        uint16_t namXuatBan;
        uint16_t soLuong;
        typedef enum{
            DA_MUON_SACH,
            CHUA_MUON_SACH,
        }TrangThai;
        TrangThai trangThaiSach;
    public:
        Sach(){
            this->trangThaiSach = CHUA_MUON_SACH;
        };
        void SetTenSach(string tenSach);
        string getTenSach();
        void setTenTacGia(string setTenTacGia);
        string getTenTacGia();
        void setNamXuatBan(uint16_t namXuatBan);
        uint16_t getNamXuatBan();
        void setSoLuong(uint16_t soLuong);
        uint16_t getSoLuong();
        void muonSach();
        void traSach();
        void inThongTinSach();
};

#endif