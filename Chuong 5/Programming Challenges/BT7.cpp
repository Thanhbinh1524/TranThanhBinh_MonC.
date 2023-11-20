#include <iostream>
#include <cmath>

int main() {
    int soNgayLamViec; // Số ngày làm việc
    double luongNgayDauTien = 0.01; // Lương vào ngày đầu tiên ($)
    double tongLuong = 0.0; // Tổng lương ($)

    // Nhập số ngày làm việc từ người dùng và xác thực đầu vào
    do {
        std::cout << "Nhập số ngày làm việc: ";
        std::cin >> soNgayLamViec;
        if (soNgayLamViec < 1) {
            std::cout << "Số ngày làm việc phải lớn hơn hoặc bằng 1. Vui lòng nhập lại." << std::endl;
        }
    } while (soNgayLamViec < 1);

    // Hiển thị tiêu đề của bảng
    std::cout << "Ngày\tLương ($)" << std::endl;
    std::cout << "------------------" << std::endl;

    // Tính lương mỗi ngày và tổng lương
    for (int ngay = 1; ngay <= soNgayLamViec; ++ngay) {
        double luongNgay = luongNgayDauTien * pow(2, ngay - 1);
        tongLuong += luongNgay;
        std::cout << ngay << "\t" << luongNgay << std::endl;
    }

    // Hiển thị tổng lương
    std::cout << "Tổng lương vào cuối kỳ: $" << tongLuong << std::endl;

    return 0;
}
