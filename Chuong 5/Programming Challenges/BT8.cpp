#include <iostream>

int main() {
    char luaChon;
    double soThuNhat, soThuHai;

    do {
        // Hiển thị menu
        std::cout << "MENU:" << std::endl;
        std::cout << "1. Phép cộng" << std::endl;
        std::cout << "2. Phép trừ" << std::endl;
        std::cout << "3. Phép nhân" << std::endl;
        std::cout << "4. Phép chia" << std::endl;
        std::cout << "5. Thoát" << std::endl;
        std::cout << "Chọn một phép tính (1-5): ";
        std::cin >> luaChon;

        switch (luaChon) {
            case '1':
                std::cout << "Nhập số thứ nhất: ";
                std::cin >> soThuNhat;
                std::cout << "Nhập số thứ hai: ";
                std::cin >> soThuHai;
                std::cout << "Kết quả phép cộng: " << soThuNhat + soThuHai << std::endl;
                break;
            case '2':
                std::cout << "Nhập số thứ nhất: ";
                std::cin >> soThuNhat;
                std::cout << "Nhập số thứ hai: ";
                std::cin >> soThuHai;
                std::cout << "Kết quả phép trừ: " << soThuNhat - soThuHai << std::endl;
                break;
            case '3':
                std::cout << "Nhập số thứ nhất: ";
                std::cin >> soThuNhat;
                std::cout << "Nhập số thứ hai: ";
                std::cin >> soThuHai;
                std::cout << "Kết quả phép nhân: " << soThuNhat * soThuHai << std::endl;
                break;
            case '4':
                std::cout << "Nhập số thứ nhất: ";
                std::cin >> soThuNhat;
                std::cout << "Nhập số thứ hai (khác 0): ";
                std::cin >> soThuHai;
                if (soThuHai != 0) {
                    std::cout << "Kết quả phép chia: " << soThuNhat / soThuHai << std::endl;
                } else {
                    std::cout << "Lỗi: Không thể chia cho 0." << std::endl;
                }
                break;
            case '5':
                std::cout << "Tạm biệt!" << std::endl;
                break;
            default:
                std::cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại." << std::endl;
                break;
        }
    } while (luaChon != '5');

    return 0;
}
