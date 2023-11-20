#include <iostream>

int main() {
    // Diện tích một mẫu đất
    double landSample = 43560.0; // feet vuông

    // Diện tích khu đất cần tính
    double landArea = 391876.0; // feet vuông

    // Tính số mẫu đất trên khu đất
    double numberOfSamples = landArea / landSample;

    // In kết quả ra màn hình
    std::cout << "Số mẫu đất trên khu đất có diện tích 391.876 feet vuông là: " << numberOfSamples << std::endl;

    return 0;
}
