#include <iostream>

int main() {
    // Giá trị của hàng hóa
    double itemValue = 95.0; // 95 USD

    // Tỷ lệ thuế bán hàng của tiểu bang và quận
    double stateSalesTaxRate = 4.0 / 100.0; // 4 phần trăm
    double countySalesTaxRate = 2.0 / 100.0; // 2 phần trăm

    // Tính thuế bán hàng của tiểu bang và quận
    double stateSalesTax = itemValue * stateSalesTaxRate;
    double countySalesTax = itemValue * countySalesTaxRate;

    // Tính tổng thuế bán hàng
    double totalSalesTax = stateSalesTax + countySalesTax;

    // In tổng thuế bán hàng ra màn hình
    std::cout << "Tổng thuế bán hàng là: " << totalSalesTax << " USD" << std::endl;

    return 0;
}
