#include <iostream>

int main() {
    // Khai báo biến
    double soGallon, soDam, kmTrenGallon;

    // Nhập thông tin từ người dùng
    std::cout << "Nhap so gallon xang ma chiec xe co the chua duoc: ";
    std::cin >> soGallon;

    std::cout << "Nhap so dam ma chiec xe co the di duoc voi mot chiec xe tang day du: ";
    std::cin >> soDam;

    // Tính toán số km có thể đi được mỗi gallon
    kmTrenGallon = soDam / soGallon;

    // Hiển thị kết quả
    std::cout << "So km co the di duoc moi gallon xang la: " << kmTrenGallon << " km/gallon" << std::endl;

    return 0;
}
