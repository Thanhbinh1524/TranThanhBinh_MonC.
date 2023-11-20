#include <iostream>

int main() {
    const int numStores = 5;
    int sales[numStores];

    std::cout << "Nhập doanh số hôm nay của 5 cửa hàng:" << std::endl;

    for (int i = 0; i < numStores; ++i) {
        std::cout << "Cửa hàng " << i + 1 << ": ";
        std::cin >> sales[i];
    }

    std::cout << "BIỂU ĐỒ BÁN HÀNG" << std::endl;
    std::cout << "(Mỗi * = $100)" << std::endl;

    for (int i = 0; i < numStores; ++i) {
        std::cout << "Cửa hàng " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / 100; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
