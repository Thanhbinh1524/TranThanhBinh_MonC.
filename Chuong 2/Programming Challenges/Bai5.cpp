#include <iostream>

int main() {
    // Lưu trữ các giá trị vào các biến khác nhau
    double value1 = 28.0;
    double value2 = 32.0;
    double value3 = 37.0;
    double value4 = 24.0;
    double value5 = 33.0;

    // Tính tổng của các giá trị
    double sum = value1 + value2 + value3 + value4 + value5;

    // Tính giá trị trung bình
    double average = sum / 5.0;

    // Hiển thị giá trị trung bình trên màn hình
    std::cout << "Giá trị trung bình là: " << average << std::endl;

    return 0;
}
