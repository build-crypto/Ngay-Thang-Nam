#ifndef DMY_H
#define DMY_H


class DMY
{
    public:
        void Nhap();
        void Xuat();
        DMY NgayThangNamTiepTheo(DMY);
        bool Valid();
    private:
        int iNgay, iThang, iNam;
};

#endif
