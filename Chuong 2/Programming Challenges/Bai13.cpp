#include <iostream>

int main() {
    // Giá vốn của bảng mạch
    double costPrice = 14.95; // USD

    // Tỷ lệ lợi nhuận
    double profitMarginPercentage = 35.0 / 100.0; // 35%

    // Tính giá bán của bảng mạch
    double sellingPrice = costPrice * (1 + profitMarginPercentage);

    // In kết quả ra màn hình
    std::cout << "Giá bán của một bảng mạch là: " << sellingPrice << " USD" << std::endl;

    return 0;
}
