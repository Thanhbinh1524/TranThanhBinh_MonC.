#include <iostream>

int main() {
    // Chi phí bữa ăn
    double mealCost = 88.67; // 88.67 USD

    // Tỷ lệ thuế
    double taxRate = 6.75 / 100; // 6.75%

    // Tỷ lệ mẹo
    double tipRate = 20.0 / 100; // 20%

    // Tính số tiền thuế
    double taxAmount = mealCost * taxRate;

    // Tính tiền boa
    double tipAmount = mealCost * tipRate;

    // Tính tổng hóa đơn
    double totalBill = mealCost + taxAmount + tipAmount;

    // In chi phí bữa ăn, số tiền thuế, tiền boa và tổng hóa đơn ra màn hình
    std::cout << "Chi phí bữa ăn: " << mealCost << " USD" << std::endl;
    std::cout << "Số tiền thuế: " << taxAmount << " USD" << std::endl;
    std::cout << "Tiền boa: " << tipAmount << " USD" << std::endl;
    std::cout << "Tổng hóa đơn: " << totalBill << " USD" << std::endl;

    return 0;
}
