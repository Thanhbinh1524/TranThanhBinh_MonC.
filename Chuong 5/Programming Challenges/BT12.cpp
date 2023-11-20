#include <iostream>

int main() {
    double doC, doF;

    std::cout << "Bảng chuyển đổi độ C sang độ F" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "  Độ C     |    Độ F" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for (int doC = 0; doC <= 20; ++doC) {
        doF = (doC * 9.0 / 5.0) + 32;
        std::cout << "   " << doC << "     |    " << doF << std::endl;
    }

    return 0;
}
