#include <iostream>

int main() {
    double nganSach;
    int soChiPhi;
    double tongChiPhi = 0.0;

    // Nhập số tiền đã dự trù
    std::cout << "Nhập số tiền đã dự trù trong một tháng: $";
    std::cin >> nganSach;

    // Nhập số lượng chi phí
    std::cout << "Nhập số lượng chi phí: ";
    std::cin >> soChiPhi;

    if (soChiPhi <= 0) {
        std::cout << "Không có chi phí nào để nhập." << std::endl;
        return 1;
    }

    // Nhập từng chi phí và tính tổng chi phí
    for (int i = 1; i <= soChiPhi; ++i) {
        double chiPhi;
        std::cout << "Nhập chi phí #" << i << ": $";
        std::cin >> chiPhi;
        tongChiPhi += chiPhi;
    }

    // Tính sự vượt quá hoặc thiếu ngân sách
    double chenhLech = tongChiPhi - nganSach;

    // Hiển thị kết quả
    if (chenhLech < 0) {
        std::cout << "Bạn đã tiêu quá ngân sách " << -chenhLech << " đô la." << std::endl;
    } else if (chenhLech > 0) {
        std::cout << "Bạn còn " << chenhLech << " đô la trong ngân sách." << std::endl;
    } else {
        std::cout << "Bạn đã tuân theo ngân sách." << std::endl;
    }

    return 0;
}
