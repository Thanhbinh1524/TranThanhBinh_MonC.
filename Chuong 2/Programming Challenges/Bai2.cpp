#include <iostream>

int main() {
    // Tổng doanh thu của công ty
    double totalRevenue = 8600000; // 8.6 triệu USD

    // Tỷ lệ phần trăm doanh số của Bờ Đông
    double percentageEastCoast = 58.0 / 100.0;

    // Tính doanh số dự kiến của Bờ Đông
    double eastCoastRevenue = totalRevenue * percentageEastCoast;

    // In doanh số dự kiến của Bờ Đông ra màn hình
    std::cout << "Doanh số dự kiến của Bờ Đông là: " << eastCoastRevenue << " USD" << std::endl;

    return 0;
}
