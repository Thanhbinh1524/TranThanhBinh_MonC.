#include <iostream>

int main() {
    int n;
    int sum = 0;

    // Yêu cầu người dùng nhập một số nguyên dương
    do {
        std::cout << "Nhập một số nguyên dương: ";
        std::cin >> n;
        if (n <= 0) {
            std::cout << "Số phải là một số nguyên dương. Vui lòng nhập lại." << std::endl;
        }
    } while (n <= 0);

    // Tính tổng của các số từ 1 đến n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // In ra tổng
    std::cout << "Tổng của các số từ 1 đến " << n << " là: " << sum << std::endl;

    return 0;
}
