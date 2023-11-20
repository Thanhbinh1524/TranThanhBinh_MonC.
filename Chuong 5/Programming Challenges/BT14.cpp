#include <iostream>
#include <string>

int main() {
    int soHocSinh;
    std::string tenHocSinh, tenDauHang, tenCuoiHang;

    // Nhập số học sinh và kiểm tra đầu vào
    do {
        std::cout << "Nhập số học sinh trong lớp (từ 1 đến 25): ";
        std::cin >> soHocSinh;
    } while (soHocSinh < 1 || soHocSinh > 25);

    // Nhập tên của từng học sinh
    for (int i = 1; i <= soHocSinh; ++i) {
        std::cin.ignore(); // Xóa bộ nhớ đệm để tránh vấn đề nhập tên
        std::cout << "Nhập tên của học sinh thứ " << i << ": ";
        std::getline(std::cin, tenHocSinh);

        // Xác định ai đứng đầu hàng và ai đứng cuối hàng
        if (i == 1) {
            tenDauHang = tenHocSinh;
            tenCuoiHang = tenHocSinh;
        } else {
            if (tenHocSinh < tenDauHang) {
                tenDauHang = tenHocSinh;
            }
            if (tenHocSinh > tenCuoiHang) {
                tenCuoiHang = tenHocSinh;
            }
        }
    }

    // Hiển thị kết quả
    std::cout << "Học sinh đứng đầu hàng: " << tenDauHang << std::endl;
    std::cout << "Học sinh đứng cuối hàng: " << tenCuoiHang << std::endl;

    return 0;
}
