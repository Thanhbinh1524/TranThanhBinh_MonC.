#include <iostream>

int main() {
    int doDaiCanh;

    // Nhập độ dài mỗi cạnh từ người dùng
    std::cout << "Nhập độ dài mỗi cạnh (không lớn hơn 15): ";
    std::cin >> doDaiCanh;

    // Kiểm tra độ dài cạnh hợp lệ
    if (doDaiCanh <= 0 || doDaiCanh > 15) {
        std::cout << "Độ dài cạnh không hợp lệ. Hãy nhập lại." << std::endl;
        return 1;
    }

    // Hiển thị hình vuông
    for (int i = 0; i < doDaiCanh; i++) {
        for (int j = 0; j < doDaiCanh; j++) {
            std::cout << 'X';
        }
        std::cout << std::endl;
    }

    return 0;
}
