#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(static_cast<unsigned int>(time(nullptr)));

    // Tạo số ngẫu nhiên trong khoảng từ 1 đến 100
    int soNgauNhien = rand() % 100 + 1;

    int duDoan;
    int soLanDuDoan = 0;

    std::cout << "Chào mừng bạn đến với trò chơi đoán số ngẫu nhiên!" << std::endl;

    do {
        // Nhập dự đoán từ người dùng
        std::cout << "Hãy đoán số (từ 1 đến 100): ";
        std::cin >> duDoan;

        // Kiểm tra dự đoán và cung cấp gợi ý
        if (duDoan < soNgauNhien) {
            std::cout << "Quá thấp, hãy thử lại." << std::endl;
        } else if (duDoan > soNgauNhien) {
            std::cout << "Quá cao, hãy thử lại." << std::endl;
        } else {
            std::cout << "Chúc mừng! Bạn đã đoán đúng số " << soNgauNhien << " trong " << soLanDuDoan + 1 << " lần đoán." << std::endl;
        }

        // Tăng số lần đoán
        soLanDuDoan++;

    } while (duDoan != soNgauNhien);

    return 0;
}
