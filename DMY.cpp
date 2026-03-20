#include "DMY.h"
#include <iostream>
using namespace std;

void DMY::Nhap()
{ do{
    cout<<"\nNhap Ngay:";
    cin>>iNgay;
    cout<<"\nNhap Thang:";
    cin>>iThang;
    cout<<"\nNhap Nam:";
    cin>>iNam;
} while (!this->Valid());
}
void DMY::Xuat()
{
    cout<<iNgay<<"/"<<iThang<<"/"<<iNam<<endl;
}
DMY DMY::NgayThangNamTiepTheo(DMY a)
{
    DMY temp=a;
    temp.iNgay+=1;
    if (temp.Valid()) return temp;
    else {
        temp.iNgay=1;
        temp.iThang+=1;
        if (temp.Valid()) return temp;
           else {
        temp.iThang=1;
        temp.iNam+=1;
        return temp;
           }
    }
}
bool DMY::Valid()
{   int temp=28;
    if (iNam<=0) return 0;
    if (iThang<1||iThang>12) return 0;
    switch (iThang)
    {
        case 2: if (iNam%400==0||(iNam%4==0&&iNam%100!=0)) temp=29;
                break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            temp = 31;
            break;
        default: temp = 30;
    }
    if (iNgay<1||iNgay>temp) return 0;
    return 1;
}
