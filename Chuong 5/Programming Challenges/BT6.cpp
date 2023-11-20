#include <iostream>

int main() {
    double tocDo; // Tốc độ của xe (mph)
    int gioDiChuyen; // Số giờ di chuyển

    // Nhập tốc độ và số giờ di chuyển từ người dùng
    do {
        std::cout << "Tốc độ của xe tính bằng mph là bao nhiêu? ";
        std::cin >> tocDo;
        if (tocDo < 0) {
            std::cout << "Tốc độ không được âm. Vui lòng nhập lại." << std::endl;
        }
    } while (tocDo < 0);

    do {
        std::cout << "Nó đã đi được bao nhiêu giờ? ";
        std::cin >> gioDiChuyen;
        if (gioDiChuyen < 1) {
            std::cout << "Số giờ di chuyển phải lớn hơn hoặc bằng 1. Vui lòng nhập lại." << std::endl;
        }
    } while (gioDiChuyen < 1);

    // Hiển thị tiêu đề của bảng
    std::cout << "Số giờ\tKhoảng cách đã đi" << std::endl;
    std::cout << "---------------------------" << std::endl;

    // Tính và hiển thị quãng đường đã đi được cho mỗi giờ
    for (int i = 1; i <= gioDiChuyen; ++i) {
        double quangDuong = tocDo * i;
        std::cout << i << "\t" << quangDuong << std::endl;
    }

    return 0;
}
