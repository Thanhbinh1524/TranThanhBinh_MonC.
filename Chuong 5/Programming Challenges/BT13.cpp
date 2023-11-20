#include <iostream>

int main() {
    int so;
    int soLonNhat = INT_MIN; // Giả định giá trị lớn nhất là giá trị nhỏ nhất của kiểu int
    int soNhoNhat = INT_MAX; // Giả định giá trị nhỏ nhất là giá trị lớn nhất của kiểu int

    std::cout << "Nhập dãy số nguyên (-99 để kết thúc):" << std::endl;

    while (true) {
        std::cout << "Nhập số: ";
        std::cin >> so;

        if (so == -99) {
            break; // Kết thúc vòng lặp nếu người dùng nhập -99
        }

        if (so > soLonNhat) {
            soLonNhat = so; // Cập nhật số lớn nhất nếu có số lớn hơn
        }

        if (so < soNhoNhat) {
            soNhoNhat = so; // Cập nhật số nhỏ nhất nếu có số nhỏ hơn
        }
    }

    if (soLonNhat == INT_MIN || soNhoNhat == INT_MAX) {
        std::cout << "Không có số nào được nhập." << std::endl;
    } else {
        std::cout << "Số lớn nhất: " << soLonNhat << std::endl;
        std::cout << "Số nhỏ nhất: " << soNhoNhat << std::endl;
    }

    return 0;
}
