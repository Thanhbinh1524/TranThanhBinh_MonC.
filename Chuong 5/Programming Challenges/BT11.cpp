#include <iostream>

int main() {
    int soLuongBanDau;
    double mucTangHangNgay;
    int soNgay;
    
    // Nhập số lượng ban đầu và kiểm tra đầu vào
    do {
        std::cout << "Nhập số lượng ban đầu của quần thể (lớn hơn hoặc bằng 2): ";
        std::cin >> soLuongBanDau;
    } while (soLuongBanDau < 2);
    
    // Nhập mức tăng dân số trung bình hàng ngày và kiểm tra đầu vào
    do {
        std::cout << "Nhập mức tăng dân số trung bình hàng ngày (%): ";
        std::cin >> mucTangHangNgay;
    } while (mucTangHangNgay < 0);
    
    // Nhập số ngày chúng sẽ nhân lên và kiểm tra đầu vào
    do {
        std::cout << "Nhập số ngày chúng sẽ nhân lên (lớn hơn hoặc bằng 1): ";
        std::cin >> soNgay;
    } while (soNgay < 1);
    
    // Hiển thị tiêu đề của bảng
    std::cout << "Ngày\tQuy mô dân số" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    // Tính và hiển thị quy mô dân số mỗi ngày
    double quyMoDanSo = soLuongBanDau;
    for (int ngay = 1; ngay <= soNgay; ++ngay) {
        std::cout << ngay << "\t" << quyMoDanSo << std::endl;
        quyMoDanSo += (quyMoDanSo * mucTangHangNgay / 100);
    }
    
    return 0;
}
