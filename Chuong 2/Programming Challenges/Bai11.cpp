#include <iostream>

int main() {
    // Số gallon xăng
    double gallons = 20.0;

    // Tốc độ trung bình khi lái trong thị trấn và trên đường cao tốc
    double townMileage = 23.5; // miles/gallon
    double highwayMileage = 28.9; // miles/gallon

    // Tính quãng đường xe có thể đi được khi lái trong thị trấn và khi lái xe trên đường cao tốc
    double townDistance = gallons * townMileage;
    double highwayDistance = gallons * highwayMileage;

    // In kết quả ra màn hình
    std::cout << "Quãng đường mà xe có thể đi được khi lái trong thị trấn là: " << townDistance << " miles" << std::endl;
    std::cout << "Quãng đường mà xe có thể đi được khi lái trên đường cao tốc là: " << highwayDistance << " miles" << std::endl;

    return 0;
}
