#include <iostream>

int main() {
    // Hiển thị các ký tự từ mã ASCII 0 đến 127
    for (int i = 0; i <= 127; ++i) {
        std::cout << static_cast<char>(i) << " "; // Ép kiểu int sang char để in ký tự
        if ((i + 1) % 16 == 0) {
            std::cout << std::endl; // Xuống dòng sau mỗi 16 ký tự
        }
    }

    return 0;
}
