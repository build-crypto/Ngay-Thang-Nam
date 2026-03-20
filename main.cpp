#include <iostream>
#include "DMY.h"
using namespace std;
int main()
{
    DMY A;
    A.Nhap();
    cout<<"\nNgay Thang Nam Hien Tai la :\n";
    A.Xuat();
    cout<<"Ngay Thang Nam Tiep Theo la :\n";
    (A.NgayThangNamTiepTheo(A)).Xuat();
    return 0;
}
