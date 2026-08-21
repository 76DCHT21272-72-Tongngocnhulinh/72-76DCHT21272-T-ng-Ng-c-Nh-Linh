/* doi tuong 
Nhan vien:hoten,manv,ngaysinh,diachi 
*/
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
    string maNV;
    string hoTen;
    string ngaySinh;
    string diaChi;

public:
    void nhap();
    void xuat();
};

void NhanVien::nhap()
{
    cout << "Nhap ma nhan vien: ";
    getline(cin, maNV);

    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap ngay sinh: ";
    getline(cin, ngaySinh);

    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
}

void NhanVien::xuat()
{
    cout << "Ma nhan vien: " << maNV << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
    cout << "Dia chi: " << diaChi << endl;
}

class NhanVienVanPhong : public NhanVien
{
private:
    double luongCoBan;
    int soNgayLam;

public:
    void nhap();
    void xuat();
};

void NhanVienVanPhong::nhap()
{
    NhanVien::nhap();

    cout << "Nhap luong co ban: ";
    cin >> luongCoBan;

    cout << "Nhap so ngay lam: ";
    cin >> soNgayLam;

    cin.ignore();
}

void NhanVienVanPhong::xuat()
{
    NhanVien::xuat();

    cout << "Luong co ban: " << luongCoBan << endl;
    cout << "So ngay lam: " << soNgayLam << endl;
}

class NhanVienSanXuat : public NhanVien
{
private:
    int soLuongSP;
    double tienCongSP;

public:
    void nhap();
    void xuat();
};

void NhanVienSanXuat::nhap()
{
    NhanVien::nhap();

    cout << "Nhap so luong san pham: ";
    cin >> soLuongSP;

    cout << "Nhap tien cong moi san pham: ";
    cin >> tienCongSP;

    cin.ignore();
}

void NhanVienSanXuat::xuat()
{
    NhanVien::xuat();

    cout << "So luong san pham: " << soLuongSP << endl;
    cout << "Tien cong san pham: " << tienCongSP << endl;
}

class NhanVienQuanLy : public NhanVien
{
private:
    double luongCoBan;
    double heSoChucVu;

public:
    void nhap();
    void xuat();
};

void NhanVienQuanLy::nhap()
{
    NhanVien::nhap();

    cout << "Nhap luong co ban: ";
    cin >> luongCoBan;

    cout << "Nhap he so chuc vu: ";
    cin >> heSoChucVu;

    cin.ignore();
}

void NhanVienQuanLy::xuat()
{
    NhanVien::xuat();

    cout << "Luong co ban: " << luongCoBan << endl;
    cout << "He so chuc vu: " << heSoChucVu << endl;
}

int main()
{
    NhanVienVanPhong Minh;

    Minh.nhap();

    cout << "\n===== THONG TIN NHAN VIEN MINH =====" << endl;
    Minh.xuat();

    return 0;
}
