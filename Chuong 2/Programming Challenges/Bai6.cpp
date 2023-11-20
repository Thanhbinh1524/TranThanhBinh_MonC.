#include <iostream>

int main() {
    // Khởi tạo biến
    double payAmount = 2200.0; // Số tiền lương mỗi kỳ
    int payPeriods = 26; // Số kỳ lương trong một năm
    double annualPay; // Lương hàng năm

    // Tính toán lương hàng năm
    annualPay = payAmount * payPeriods;

    // Hiển thị tổng số tiền lương hàng năm trên màn hình
    std::cout << "Tổng số tiền lương hàng năm là: " << annualPay << " USD" << std::endl;

    return 0;
}
