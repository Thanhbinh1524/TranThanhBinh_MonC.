#include <iostream>

int main() {
    // Giá của mỗi mặt hàng
    double item1 = 15.95; // USD
    double item2 = 24.95; // USD
    double item3 = 6.95;  // USD
    double item4 = 12.95; // USD
    double item5 = 3.95;  // USD

    // Tỷ lệ thuế bán hàng
    double taxRate = 7.0 / 100.0; // 7%

    // Tính tổng số tiền mua
    double subtotal = item1 + item2 + item3 + item4 + item5;

    // Tính số tiền thuế bán hàng
    double salesTax = subtotal * taxRate;

    // Tính tổng số tiền (tổng số tiền mua + số tiền thuế bán hàng)
    double total = subtotal + salesTax;

    // Hiển thị giá của mỗi mặt hàng
    std::cout << "Giá của mặt hàng 1: " << item1 << " USD" << std::endl;
    std::cout << "Giá của mặt hàng 2: " << item2 << " USD" << std::endl;
    std::cout << "Giá của mặt hàng 3: " << item3 << " USD" << std::endl;
    std::cout << "Giá của mặt hàng 4: " << item4 << " USD" << std::endl;
    std::cout << "Giá của mặt hàng 5: " << item5 << " USD" << std::endl;

    // Hiển thị tổng số tiền mua, số tiền thuế bán hàng và tổng số tiền
    std::cout << "Tổng số tiền mua: " << subtotal << " USD" << std::endl;
    std::cout << "Số tiền thuế bán hàng: " << salesTax << " USD" << std::endl;
    std::cout << "Tổng số tiền: " << total << " USD" << std::endl;

    return 0;
}
