/*
* File Name: SinhVien.cpp
* Author: Giao Pham
* Date: 26/04/2023
* Description: This file contains all the functions/methods to to manage students
*/

# include "SinhVien.h"

/*
* Class: SinhVien
* Function: setID
* Description: This function use for setting ID of a Student
* Input:
*   id: ID of Student
* Output:
*   return: None
*/
void SinhVien::setID(uint8_t id){
    this->id = id;
}

/*
* Class: SinhVien
* Function: getID
* Description: This function use for getting id of student
* Input:
*   Dont have input parameters
* Output:
*   return: ID of Student
*/
uint8_t SinhVien::getID(){
    return this->id;
}

/*
* Class: SinhVien
* Function: setTen
* Description: This function use for setting name of a Student
* Input:
*   ten: name of Student
* Output:
*   return: None
*/
void SinhVien::setTen(string ten){
    this->ten = ten;
}

/*
* Class: SinhVien
* Function: getTen
* Description: This function use for getting name of student
* Input:
*   Dont have input parameters
* Output:
*   return: Name of Student
*/
string SinhVien::getTen(){
    return this->ten;
}

/*
* Class: SinhVien
* Function: setTuoi
* Description: This function use for setting age of a Student
* Input:
*   tuoi: age of Student
* Output:
*   return: None
*/
void SinhVien::setTuoi(uint8_t tuoi){
    this->tuoi = tuoi;
}

/*
* Class: SinhVien
* Function: getTuoi
* Description: This function use for getting age of student
* Input:
*   Dont have input parameters
* Output:
*   return: Age of Student
*/
uint8_t SinhVien::getTuoi(){
    return this->tuoi;
}

/*
* Class: SinhVien
* Function: setGioiTinh
* Description: This function use for setting sex of a Student
* Input:
*   gioitinh: sex of Student
* Output:
*   return: None
*/
void SinhVien::setGioiTinh(GioiTinh gioitinh){
    this->gioitinh = gioitinh;
}

/*
* Class: SinhVien
* Function: getGioiTinh
* Description: This function use for getting sex of student
* Input:
*   Dont have input parameters
* Output:
*   return: Sex of Student
*/
GioiTinh SinhVien::getGioiTinh(){
    return this->gioitinh;
}

/*
* Class: SinhVien
* Function: setDiemToan
* Description: This function use for setting mark of Math
* Input:
*   diemToan: mark of Math
* Output:
*   return: None
*/
void SinhVien::setDiemToan(double diemToan){
    this->diemToan = diemToan;
}

/*
* Class: SinhVien
* Function: getDiemToan
* Description: This function use for getting mark of Math
* Input:
*   Dont have input parameters
* Output:
*   return: Mark of Math
*/
double SinhVien::getDiemToan(){
    return this->diemToan;
}

/*
* Class: SinhVien
* Function: setDiemLy
* Description: This function use for setting mark of Physic
* Input:
*   diemLy: mark of Physic
* Output:
*   return: None
*/
void SinhVien::setDiemLy(double diemLy){
    this->diemLy = diemLy;
}

/*
* Class: SinhVien
* Function: getDiemLy
* Description: This function use for getting mark of Physic
* Input:
*   Dont have input parameters
* Output:
*   return: Mark of Physic
*/
double  SinhVien::getDiemLy(){
    return this->diemLy;
}

/*
* Class: SinhVien
* Function: setDiemHoa
* Description: This function use for setting mark of Chemistry
* Input:
*   diemHoa: mark of Chemistry
* Output:
*   return: None
*/
void SinhVien::setDiemHoa(double diemHoa){
    this->diemHoa = diemHoa;
}

/*
* Class: SinhVien
* Function: getDiemHoa
* Description: This function use for getting mark of Chemistry
* Input:
*   Dont have input parameters
* Output:
*   return: Mark of Chemistry
*/
double  SinhVien::getDiemHoa(){
    return this->diemHoa;
}

/*
* Class: SinhVien
* Function: getDiemTrungBinh
* Description: This function use for getting average mark
* Input:
*   Dont have input parameters
* Output:
*   return: Average mark
*/
double SinhVien::getDiemTrungBinh(){
    if (this->diemToan < 0 || this->diemToan > 10){
        cout<<"Vui long nhap lai!\n"; 
        return 0;
    }
    if (this->diemLy < 0 || this->diemLy > 10){
        cout<<"Vui long nhap lai!\n"; 
        return 0;
    }
    if (this->diemHoa < 0 || this->diemHoa > 10){
        cout<<"Vui long nhap lai!\n"; 
        return 0;
    }
    return this->diemTrungBinh = (this->diemToan + this->diemLy + this->diemHoa) / 3;
}

/*
* Class: SinhVien
* Function: getHocLuc
* Description: This function use for getting ability of Student
* Input:
*   Dont have input parameters
* Output:
*   return: Ability of Student
*/
HocLuc SinhVien::getHocLuc(){
    if (this->diemTrungBinh >= 8){
        return this->hocLuc = GIOI;
    }else if (this->diemTrungBinh >= 6.5)
    {
        return this->hocLuc = KHA;
    }else if (this->diemTrungBinh >= 5)
    {
        return this->hocLuc = TRUNG_BINH;
    }else return this->hocLuc = YEU;
}

/* static variable initialization */
uint8_t HienThi::checkId = 0;

/*
* Class: HienThi
* Function: Giaodien
* Description: This function is use to show list command
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::Giaodien(){
    cout << "DANH SACH LENH: \n";
    cout << "1. THEM SINH VIEN\n";
    cout << "2. CAP NHAT THONG TIN SINH VIEN THEO ID\n";
    cout << "3. XOA SINH VIEN THEO ID\n";
    cout << "4. TIM KIEM SINH VIEN THEO TEN\n";
    cout << "5. SAP XEP SINH VIEN THEO GPA\n";
    cout << "6. SAP XEP SINH VIEN THEO TEN\n";
    cout << "7. HIEN THI DANH SACH SINH VIEN\n";
    cout << "NHAP 8 DE THOAT\n";
}

/*
* Class: HienThi
* Function: themSinhVien
* Description: This function is use to add student
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::themSinhVien(){
    SinhVien sv;
    string ten;
    int gt;
    uint8_t tuoi;
    GioiTinh gioitinh;
    double diemToan, diemLy, diemHoa;
    cout << "THEM SINH VIEN \n";
    cout << "NHAP TEN: ";
    cin >> ten;
    sv.setTen(ten);
    cout << "NHAP TUOI: ";
    scanf("%d",&tuoi);
    sv.setTuoi(tuoi);
    fflush(stdin);
    cout << "GIOI TINH(0: NAM/1: NU): ";
    cin >> gt;
    if (gt == NAM){
        gioitinh = NAM; 
    }else if (gt == NU)
    {
        gioitinh = NU;
    }else cout << "KHONG XAC DINH !\n";
    sv.setGioiTinh(gioitinh);
    cout << "NHAP DIEM TOAN: ";
    cin >> diemToan;
    sv.setDiemToan(diemToan);
    cout << "NHAP DIEM LY: ";
    cin >> diemLy;
    sv.setDiemLy(diemLy);
    cout << "NHAP DIEM HOA: ";
    cin >> diemHoa;
    sv.setDiemHoa(diemHoa);
    this->checkId++;
    sv.setID(HienThi::checkId);
    HienThi::sinhvien.push_back(sv);
    cout << "SINH VIEN DA DUOC THEM\n\n";
}

/*
* Class: HienThi
* Function: capnhatSVtheoID
* Description: This function is use to update students by id 
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::capnhatSVtheoID(){
    static SinhVien sv;
    uint8_t id = 0;
    uint8_t  index = 0, setid = 0;
    uint8_t tuoi = 0;
    GioiTinh gioitinh;
    string capnhatString;
    int capnhatInt;
    double diemToan = 0, diemLy = 0, diemHoa = 0;
    if(sinhvien.empty()){ 
        cout <<"KHONG CO DU LIEU TRONG DANH SACH\n";
        return;
    }
    while (true){
        if (setid == 0){
            cout << "NHAP ID: ";
            scanf("%d",&id);
            for (int i = 0; i < sinhvien.size(); i++){
                if (sinhvien[i].getID() == id){
                    sv = sinhvien[i];
                    index = i;
                    setid = 1;
                }
            }
        }
        if (setid == 1){
            cout<<"THONG TIN SINH VIEN MUON CAP NHAT"<<endl;
            cout<<"1. CAP NHAT TEN"<<endl;
            cout<<"2: CAP NHAT TUOI "<<endl;
            cout<<"3: CAP NHAT GIOI TINH"<<endl;
            cout<<"4: CAP NHAT DIEM TOAN"<<endl;
            cout<<"5: CAP NHAT DIEM LY"<<endl;
            cout<<"6: CAP NHAT DIEM HOA "<<endl;
            cout<<"7: TIEP TUC CAP NHAT ID TIEP THEO !"<<endl;
            cout<<"8: HOAN THANH CAP NHAT THONG TIN !\n";
            int nhap;
            cout<<"NHAP: ";
            cin >> nhap;
            switch (nhap){
            case 1:
                cout<<"TEN MOI: ";
                cin >> capnhatString;
                this->sinhvien[index].setTen(capnhatString);
                break;
            case 2:
                cout<<"TUOI MOI: ";
                cin >> capnhatInt;
                this->sinhvien[index].setTuoi(capnhatInt);
                break;
            case 3:
                cout<<"GIOI TINH MOI (0: NAM/1: NU): ";
                cin >> capnhatInt;
                if (capnhatInt == NAM){
                    gioitinh = NAM; 
                }else if (capnhatInt == NU){
                    gioitinh = NU;
                }else cout << "KHONG XAC DINH !\n";
                this->sinhvien[index].setGioiTinh(gioitinh);
                break;   
            case 4:
                cout << "DIEM TOAN MOI: ";
                cin >> diemToan;
                this->sinhvien[index].setDiemToan(diemToan);            
                break;
            case 5:
                cout << "NHAP DIEM LY: ";
                cin >> diemLy;
                this->sinhvien[index].setDiemLy(diemLy);
                break;
            case 6:
                cout << "NHAP DIEM HOA: ";
                cin >> diemHoa;
                this->sinhvien[index].setDiemHoa(diemHoa);
                break;
            case 7:
                printf("DA CAP NHAT THONG TIN CHO ID: %d !\n",sv.getID());
                setid = 0;
                break;
            case 8:
                printf("DA CAP NHAT THONG TIN CHO ID: %d!\n",sv.getID());                
                break;
            default:
                cout << "BAN DA NHAP SAI LENH !\n";
                break;
            }
            if (nhap == 8){
                break;}
        }
    }
}

/*
* Class: HienThi
* Function: xoaSVtheoID
* Description: This function is use to remove student
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::xoaSVtheoID(){
    SinhVien sv;
    uint8_t id, XoaID = 0, newID;
    if(sinhvien.empty()){ 
        cout <<"KHONG CO DU LIEU TRONG DANH SACH\n";
        return;
    }
    for (int i = 0; i < sinhvien.size(); i++){
        for (int j = i + 1; j < sinhvien.size(); j++){
            if (sinhvien[i].getID() > sinhvien[j].getID()){
                sv = sinhvien[i];
                sinhvien[i] = sv;
                sinhvien[i] = sinhvien[j];
                sinhvien[j] = sv;
            }
        }
    }
    cout<<"NHAP ID: ";
    scanf("%d",&id);
    for (int  i = 0; i < sinhvien.size(); i++){
        if (sinhvien[i].getID() == id){
            sinhvien.erase(sinhvien.begin() + i);
            checkId --;
            XoaID = 1;
            cout<<" DA XOA ID \n";
        }
        if (XoaID == 1){
            newID = sinhvien[i].getID() - 1;
            sinhvien[i].setID(newID);
        }
    }if (XoaID == 0){
        cout<<"KHONG CO ID NAY\n"<<endl;
    }
}

/*
* Class: HienThi
* Function: timkiemSVtheoTen
* Description: This function is use to search student by name
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::timkiemSVtheoTen(){
    uint8_t timTen = 0;
    string ten;
    if(sinhvien.empty()){ 
        cout << "KHONG CO DU LIEU TRONG DANH SACH\n";
        return;
    }
    cout<<"NHAP TEN: ";
    cin >>ten;
    for (int i = 0; i < sinhvien.size(); i++){
        if (ten == sinhvien[i].getTen()){
            cout<<"ID\tTEN\tTUOI\tGIOITINH\tTOAN\tLY\tHOA\tGPA\tHOC_LUC\n";
            printf("%d\t",sinhvien[i].getID());
            cout<<sinhvien[i].getTen()<<"\t";
            printf("%d\t",sinhvien[i].getTuoi());  
            if(sinhvien[i].getGioiTinh() == NAM) cout<<"NAM"<<"\t\t"; else cout<<"NU"<<"\t\t"; cout<<sinhvien[i].getDiemToan()<<"\t"; cout<<sinhvien[i].getDiemLy()<<"\t"; cout<<sinhvien[i].getDiemHoa()<<"\t"; 
            cout<<sinhvien[i].getDiemTrungBinh()<<"\t"; if(sinhvien[i].getHocLuc() == GIOI) cout<<"GIOI"<<"\n"; else if(sinhvien[i].getHocLuc() == KHA) cout<<"KHA"<<"\n"; else if(sinhvien[i].getHocLuc() == TRUNG_BINH) cout<<"TRUNG_BINH"<<"\n"; else cout<<"YEU"<<"\n";
            timTen = 1;
        }
    }
    if (timTen == 0){
        cout<<"KHONG CO TEN NAY"<<endl;
    }
}

/*
* Class: HienThi
* Function: hienthiDanhSach
* Description: This function is use to display list of students
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::hienthiDanhSach(){
    cout<<"ID\tTEN\tTUOI\tGIOITINH\tTOAN\tLY\tHOA\tGPA\tHOC_LUC\n";
    for (int i = 0; i < sinhvien.size(); i++){ 
        printf("%d\t",sinhvien[i].getID());  
        cout<<sinhvien[i].getTen()<<"\t"; 
        printf("%d\t",sinhvien[i].getTuoi());
        if(sinhvien[i].getGioiTinh() == NAM) cout<<"NAM"<<"\t\t"; else cout<<"NU"<<"\t\t"; cout<<sinhvien[i].getDiemToan()<<"\t"; cout<<sinhvien[i].getDiemLy()<<"\t"; cout<<sinhvien[i].getDiemHoa()<<"\t"; 
        cout<<sinhvien[i].getDiemTrungBinh()<<"\t"; if(sinhvien[i].getHocLuc() == GIOI) cout<<"GIOI"<<"\n"; else if(sinhvien[i].getHocLuc() == KHA) cout<<"KHA"<<"\n"; else if(sinhvien[i].getHocLuc() == TRUNG_BINH) cout<<"TRUNG_BINH"<<"\n"; else cout<<"YEU"<<"\n";
    }
}

/*
* Class: HienThi
* Function: sapxepSVtheoGPA
* Description: This function is use to sort students by GPA
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::sapxepSVtheoGPA(){
    SinhVien sv;
    if(sinhvien.empty()){ 
        cout << "KHONG CO DU LIEU TRONG DANH SACH\n";
        return;
    }
    for (int i = 0; i < sinhvien.size(); i++){
        for (int j = i + 1; j < sinhvien.size(); j++){
            if (sinhvien[i].getDiemTrungBinh() > sinhvien[j].getDiemTrungBinh()){
                sv = sinhvien[i];
                sinhvien[i] = sv;
                sinhvien[i] = sinhvien[j];
                sinhvien[j] = sv;
            }
        }
    }
    HienThi::hienthiDanhSach();
}

/*
* Class: HienThi
* Function: sapxepSVtheoTen
* Description: This function is use to sort students by name
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::sapxepSVtheoTen(){
    SinhVien sv;
    if(sinhvien.empty()){ 
        cout << "KHONG CO DU LIEU TRONG DANH SACH\n";
        return;
    }
    for (int i = 0; i < sinhvien.size(); i++){
        for (int j = i + 1; j < sinhvien.size(); j++){
            if (sinhvien[i].getTen() > sinhvien[j].getTen()){
                sv = sinhvien[i];
                sinhvien[i] = sv;
                sinhvien[i] = sinhvien[j];
                sinhvien[j] = sv;
            }
        }
    }
    HienThi::hienthiDanhSach();
}

/*
* Class: HienThi
* Function: showListStudent
* Description: This function use is use to display list of students by ID
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void HienThi::hienthiDanhSachID(){
    SinhVien sv;
    for (int i = 0; i < sinhvien.size(); i++){
        for (int j = i + 1; j < sinhvien.size(); j++){
            if (sinhvien[i].getID() > sinhvien[j].getID()){
                sv = sinhvien[i];
                sinhvien[i] = sv;
                sinhvien[i] = sinhvien[j];
                sinhvien[j] = sv;
            }
        }
    }
    HienThi::hienthiDanhSach();
}
