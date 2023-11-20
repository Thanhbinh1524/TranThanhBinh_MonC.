#include <iostream>

int main() {
    // Tốc độ tăng mực nước biển (milimét mỗi năm)
    double seaLevelRiseRate = 1.5; // 1.5 mm

    // Tính mực nước đại dương trong tương lai
    double seaLevelIn5Years = seaLevelRiseRate * 5;
    double seaLevelIn7Years = seaLevelRiseRate * 7;
    double seaLevelIn10Years = seaLevelRiseRate * 10;

    // In kết quả ra màn hình
    std::cout << "Số milimét mực nước đại dương sẽ cao hơn mức hiện tại sau 5 năm: " << seaLevelIn5Years << " mm" << std::endl;
    std::cout << "Số milimét mực nước đại dương sẽ cao hơn mức hiện tại sau 7 năm: " << seaLevelIn7Years << " mm" << std::endl;
    std::cout << "Số milimét mực nước đại dương sẽ cao hơn mức hiện tại sau 10 năm: " << seaLevelIn10Years << " mm" << std::endl;

    return 0;
}
