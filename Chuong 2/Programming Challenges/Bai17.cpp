#include <iostream>

int main() {
    // Số lượng cổ phiếu
    int numberOfShares = 750;

    // Giá mỗi cổ phiếu
    double pricePerShare = 35.0; // USD

    // Tỷ lệ hoa hồng
    double commissionRate = 2.0 / 100.0; // 2%

    // Tính số tiền trả cho cổ phiếu
    double totalStockCost = numberOfShares * pricePerShare;

    // Tính số tiền hoa hồng
    double commission = totalStockCost * commissionRate;

    // Tính tổng số tiền thanh toán
    double totalPayment = totalStockCost + commission;

    // Hiển thị kết quả
    std::cout << "Số tiền trả cho cổ phiếu: " << totalStockCost << " USD" << std::endl;
    std::cout << "Số tiền hoa hồng: " << commission << " USD" << std::endl;
    std::cout << "Tổng số tiền thanh toán: " << totalPayment << " USD" << std::endl;

    return 0;
}
