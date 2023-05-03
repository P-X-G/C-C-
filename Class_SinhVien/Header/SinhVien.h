/*
* File Name: SinhVien.h
* Author: Giao Pham
* Date: 26/04/2023
* Description: This file is a header file that contains all the prototypes to manage students
*/

#ifndef __SINHVIEN_H
#define __SINHVIEN_H

#include <stdio.h>
#include <stdint.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

typedef enum{
    NAM,
    NU,
}GioiTinh;

typedef enum{
    GIOI,
    KHA, 
    TRUNG_BINH,
    YEU
}HocLuc;

class SinhVien{
    private:
        uint8_t id;
        string ten;
        uint8_t tuoi;
        GioiTinh gioitinh;
        double diemToan;
        double diemLy;
        double diemHoa;
        double diemTrungBinh;
        HocLuc hocLuc;
    public:
        void setID(uint8_t id);
        uint8_t getID();
        void setTen(string ten);
        string getTen();
        void setGioiTinh(GioiTinh gioiTinh);
        GioiTinh getGioiTinh();
        void setTuoi(uint8_t tuoi);
        uint8_t getTuoi();
        void setDiemToan(double diemToan);
        double getDiemToan();
        void setDiemLy(double diemLy);
        double getDiemLy();
        void setDiemHoa(double diemHoa);
        double getDiemHoa();
        double getDiemTrungBinh();
        HocLuc getHocLuc();
};


class HienThi
{
private:
    vector<SinhVien> sinhvien;
    static uint8_t checkId;
public:
    void Giaodien();
    void themSinhVien();
    void capnhatSVtheoID();
    void xoaSVtheoID();
    void timkiemSVtheoTen();
    void sapxepSVtheoGPA();
    void sapxepSVtheoTen();
    void hienthiDanhSach();
    void hienthiDanhSachID();
};

#endif