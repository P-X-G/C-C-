/*
* File Name: main.cpp
* Author: Giao Pham
* Date: 26/04/2023
* Description: This is file to manage students
*/

# include "SinhVien.h"

int main(int argc, char const *argv[])
{
    HienThi HT;
    int nhap;
    while (true){
        HT.Giaodien();
        cout<<"VUI LONG NHAP: ";
        cin>>nhap;
        switch (nhap)
        {
        case 1:
            HT.themSinhVien();
            break;
        case 2:
            HT.capnhatSVtheoID();
            break;
        case 3:
            HT.xoaSVtheoID();
            break;
        case 4:
            HT.timkiemSVtheoTen();
            break;
        case 5:
            HT.sapxepSVtheoGPA();
            break;
        case 6:
            HT.sapxepSVtheoTen();
            break;
        case 7:
            HT.hienthiDanhSachID();
            break;
        case 8:
            break;
        default:
            break;
        }
        if (nhap == 8){
            break;}
    }
    return 0;
}