#include <iostream>

int main() {
    // Số gallon xăng
    double gallons = 15.0;

    // Số dặm đã đi
    double miles = 375.0;

    // Tính dặm trên mỗi gallon (MPG)
    double MPG = miles / gallons;

    // In kết quả ra màn hình
    std::cout << "Số dặm mà mỗi gallon xe đi được là: " << MPG << " miles/gallon" << std::endl;

    return 0;
}
