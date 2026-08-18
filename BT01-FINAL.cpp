#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --- CP1: T?O C?U TRÚC NHANVIEN ---
struct NhanVien {
    string maNV;
    string tenNV;
    long long luongCoBan;
    double heSo;
};

// --- CP2: HOÀN THÀNH NHAP() VÀ XUAT() ---
// Hàm nh?p thông tin cho n nhân viên
void nhapDanhSach(vector<NhanVien> &ds, int n) {
    for (int i = 0; i < n; i++) {
        NhanVien nv;
        cout << "\nNhap thong tin nhan vien thu " << i + 1 << ":" << endl;
        
        cout << "Ma NV: ";
        cin >> nv.maNV;
        
        cin.ignore(); // Xóa b? nh? ð?m trý?c khi nh?p chu?i có kho?ng tr?ng
        cout << "Ten NV: ";
        getline(cin, nv.tenNV);
        
        cout << "Luong co ban: ";
        cin >> nv.luongCoBan;
        
        cout << "He so luong: ";
        cin >> nv.heSo;
        
        ds.push_back(nv);
    }
}

// Hàm xu?t thông tin c?a n nhân viên
void xuatDanhSach(const vector<NhanVien> &ds) {
    cout << "\n--- DANH SACH THONG TIN NHAN VIEN ---" << endl;
    for (size_t i = 0; i < ds.size(); i++) {
        cout << "\nNhan vien thu " << i + 1 << ":" << endl;
        cout << "Ma NV: " << ds[i].maNV << endl;
        cout << "Ten NV: " << ds[i].tenNV << endl;
        cout << "Luong co ban: " << ds[i].luongCoBan << endl;
        cout << "He so luong: " << ds[i].heSo << endl;
    }
}

int main() {
    int n;
    cout << "Nhap so luong nhan vien (n): ";
    cin >> n;

    // --- CP1: KHAI BÁO M?NG (S? d?ng vector cho linh ho?t s? lý?ng nv) ---
    vector<NhanVien> danhSachNV;

    // --- CP2: G?I HÀM NH?P XU?T ---
    nhapDanhSach(danhSachNV, n);
    xuatDanhSach(danhSachNV);

    return 0;
}

