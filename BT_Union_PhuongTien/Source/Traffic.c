/*
* File Name: Traffic.c
* Author: Giao Pham
* Date: 19/03/2023
* Description: This is a file containing functions that choose the type of vehicle and display the price 
*/

# include "Traffic.h"

/* Setting input data into 'LOAI_HINH_GIAO_THONG(ten_duong, ...)'  */
LOAI_HINH_GIAO_THONG(
    duong_hang_khong,
    KEY_VALUE(
        KEY(1),
        NAME("AIRPLANE"),
        VALUE(phuong_tien->duong_hang_khong.airplane = AIRPLANE)
    )
    KEY_VALUE(
        KEY(2),
        NAME("HELICOPTER"),
        VALUE(phuong_tien->duong_hang_khong.helicopter = HELICOPTER)
    )
)

LOAI_HINH_GIAO_THONG(
    duong_bo,
    KEY_VALUE(
        KEY(1),
        NAME("CAR"),
        VALUE(phuong_tien->duong_bo.car = CAR)
    )
    KEY_VALUE(
        KEY(2),
        NAME("MOTORBIKE"),
        VALUE(phuong_tien->duong_bo.motorbike = MOTORBIKE)
    )
    KEY_VALUE(
        KEY(3),
        NAME("BICYCLE"),
        VALUE(phuong_tien->duong_bo.bicycle = BICYCLE)
    )
)

LOAI_HINH_GIAO_THONG(
    duong_thuy,
    KEY_VALUE(
        KEY(1),
        NAME("SHIP"),
        VALUE(phuong_tien->duong_thuy.ship = SHIP)
    )
    KEY_VALUE(
        KEY(2),
        NAME("CANO"),
        VALUE(phuong_tien->duong_thuy.cano = CANO)
    )
)


/*
* Function: Chuong_Trinh_Chon_Duong
* Description: Function selects the type of traffic
* Input:
*   *phuong_tien: pointer of phuong_tien_giao_thong type
* Output:
*   Vehicle selection function
*/
void Chuong_Trinh_Chon_Duong(phuong_tien_giao_thong *phuong_tien){
    printf("Ban muon di chuyen bang duong nao?\n");
    printf("Nhan 1: Duong Hang Khong\n");
    printf("Nhan 2: Duong Bo\n");
    printf("Nhan 3: Duong Thuy\n");
    printf("Nhan 0: Thoat chuong trinh\n");
    
    int phim = 0;
    scanf("%d", &phim);

    switch (phim)
    {
    case 1:
        duong_hang_khong(phuong_tien);
        break;
    case 2:
        duong_bo(phuong_tien);
        break;
    case 3:
        duong_thuy(phuong_tien);
        break;
    case 0:
        exit(0);
    default:
        printf("Nhap phim khong hop le:");
        break;
    }
}

/*
* Function: Hien_Thi_Gia
* Description: Function that displays the price of the selected vehicle
* Input:
*   phuong_tien: variable of phuong_tien_giao_thong type
* Output:
*   Display the price of the selected vehicle
*/
void Hien_Thi_Gia(phuong_tien_giao_thong phuong_tien){
    
   switch (phuong_tien.loai_phuong_tien)
   {
   case AIRPLANE:
        printf("Loai phuong tien: AIRPLANE\n");
        printf("Gia ve: 1.900.000 VND\n");
    break;
   case HELICOPTER:
        printf("Loai phuong tien: HELICOPTER\n");
        printf("Gia ve: 4.000.000 VND\n");
    break;
   case CAR:
        printf("Loai phuong tien: CAR\n");
        printf("Gia ve: 1.000.000 VND\n");
    break;
   case MOTORBIKE:
        printf("Loai phuong tien: MOTRORBIKE\n");
        printf("Gia ve: 800.000 VND\n");
    break;
   case BICYCLE:
        printf("Loai phuong tien: BICYCLE\n");
        printf("Gia ve: 0 VND\n");
    break;
   case SHIP:
        printf("Loai phuong tien: SHIP\n");
        printf("Gia ve: 1.100.000 VND\n");
    break;
   case CANO:
        printf("Loai phuong tien: CANO\n");
        printf("Gia ve: 900.000 VND\n");
    break;
   default:
        printf("Nhap phim khong hop le !!!");    
        break;
   }
}