#include <iostream>

int main() {
    // Mẫu A
    std::cout << "Mẫu A:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    // Mẫu B
    std::cout << "Mẫu B:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i <= 2 || i >= 9 || j <= 2 || j >= 9) {
                std::cout << "+";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
