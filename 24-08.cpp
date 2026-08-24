#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class NhanVien
{
protected:
    string hoTen;
    int tuoi;
    float luong;

public:
    // Constructor khong doi
    NhanVien()
    {
        hoTen = "";
        tuoi = 0;
        luong = 0;
    }

    // Constructor co doi
    NhanVien(string hoTen, int tuoi, float luong)
    {
        this->hoTen = hoTen;
        this->tuoi = tuoi;
        this->luong = luong;
    }

    // Ham xuat
    void xuat()
    {
        cout << setw(20) << left << hoTen
             << setw(10) << left << tuoi
             << setw(15) << left << luong
             << endl;
    }
};

// Ham xuat tieu de
void tieude()
{
    cout << setw(20) << left << "Ho ten"
         << setw(10) << left << "Tuoi"
         << setw(15) << left << "Luong"
         << endl;

    cout << "---------------------------------------------" << endl;
}

int main()
{
    int n;

    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    // Tao mang n nhan vien
    NhanVien dsnv[100];

    // Nhap thong tin va su dung constructor co doi
    for (int i = 0; i < n; i++)
    {
        string hoTen;
        int tuoi;
        float luong;

        cin.ignore();

        cout << "\nNhap nhan vien thu " << i + 1 << endl;

        cout << "Ho ten: ";
        getline(cin, hoTen);

        cout << "Tuoi: ";
        cin >> tuoi;

        cout << "Luong: ";
        cin >> luong;

        // Su dung constructor co doi
        dsnv[i] = NhanVien(hoTen, tuoi, luong);
    }

    // Xuat danh sach
    cout << "\n========== DANH SACH NHAN VIEN ==========\n";

    tieude();

    for (int i = 0; i < n; i++)
    {
        dsnv[i].xuat();
    }

    return 0;
}
