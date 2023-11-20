#include <iostream>

int main() {
    int soTang, soPhongTrenTang;
    int tongSoPhong = 0, tongPhongDaThue = 0;

    // Nhập số tầng và kiểm tra đầu vào
    do {
        std::cout << "Nhập số tầng của khách sạn (lớn hơn hoặc bằng 1): ";
        std::cin >> soTang;
    } while (soTang < 1);

    // Lặp qua từng tầng và nhập số phòng trên mỗi tầng
    for (int tang = 1; tang <= soTang; ++tang) {
        // Bỏ qua tầng 13
        if (tang == 13) {
            continue;
        }

        do {
            std::cout << "Nhập số phòng trên tầng " << tang << " (lớn hơn hoặc bằng 10): ";
            std::cin >> soPhongTrenTang;
        } while (soPhongTrenTang < 10);

        tongSoPhong += soPhongTrenTang;

        int soPhongDaThue;
        do {
            std::cout << "Nhập số phòng đã có người ở trên tầng " << tang << ": ";
            std::cin >> soPhongDaThue;
        } while (soPhongDaThue < 0 || soPhongDaThue > soPhongTrenTang);

        tongPhongDaThue += soPhongDaThue;
    }

    // Tính tỷ lệ lấp đầy phòng
    double tyLeLapDay = static_cast<double>(tongPhongDaThue) / tongSoPhong * 100;

    // Hiển thị thông tin
    std::cout << "Số phòng khách sạn có: " << tongSoPhong << std::endl;
    std::cout << "Số phòng đã có người sử dụng: " << tongPhongDaThue << std::endl;
    std::cout << "Số phòng trống: " << tongSoPhong - tongPhongDaThue << std::endl;
    std::cout << "Tỷ lệ lấp đầy phòng: " << tyLeLapDay << "%" << std::endl;

    return 0;
}
