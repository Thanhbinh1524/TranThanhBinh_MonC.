#include <iostream>

int main() {
    // Số lượng khách hàng được khảo sát
    int totalCustomers = 16500;

    // Phần trăm khách hàng mua nước tăng lực mỗi tuần
    double percentEnergyDrinkConsumers = 15.0 / 100.0; // 15%

    // Phần trăm khách hàng thích đồ uống tăng lực có hương vị cam quýt
    double percentCitrusDrinkConsumers = 58.0 / 100.0; // 58%

    // Tính số lượng khách hàng mua nước tăng lực mỗi tuần
    int energyDrinkConsumers = totalCustomers * percentEnergyDrinkConsumers;

    // Tính số lượng khách hàng thích đồ uống tăng lực có hương vị cam quýt
    int citrusDrinkConsumers = energyDrinkConsumers * percentCitrusDrinkConsumers;

    // Hiển thị kết quả
    std::cout << "Số lượng khách hàng mua nước tăng lực mỗi tuần: " << energyDrinkConsumers << std::endl;
    std::cout << "Số lượng khách hàng thích đồ uống tăng lực có hương vị cam quýt: " << citrusDrinkConsumers << std::endl;

    return 0;
}
