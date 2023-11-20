#include <iostream>

int main() {
    double laiSuatHangNam, soDuBanDau, soTienGui, soTienRut, soTienLai;
    int soThang;

    // Nhập lãi suất hàng năm, số dư ban đầu và số tháng đã trôi qua
    std::cout << "Nhập lãi suất hàng năm (%): ";
    std::cin >> laiSuatHangNam;
    
    std::cout << "Nhập số dư ban đầu: ";
    std::cin >> soDuBanDau;
    
    std::cout << "Nhập số tháng đã trôi qua: ";
    std::cin >> soThang;

    // Kiểm tra số âm
    if (laiSuatHangNam < 0 || soDuBanDau < 0 || soThang < 0) {
        std::cout << "Dữ liệu không hợp lệ. Hãy nhập lại." << std::endl;
        return 1;
    }

    // Lãi suất hàng tháng
    double laiSuatHangThang = laiSuatHangNam / 12 / 100;

    // Tính số dư cuối kỳ và tổng số tiền gửi, rút và lãi kiếm được
    for (int i = 1; i <= soThang; ++i) {
        std::cout << "Tháng " << i << std::endl;
        std::cout << "Nhập số tiền gửi vào tài khoản trong tháng: ";
        std::cin >> soTienGui;

        if (soTienGui < 0) {
            std::cout << "Số tiền gửi không hợp lệ. Hãy nhập lại." << std::endl;
            return 1;
        }

        std::cout << "Nhập số tiền rút từ tài khoản trong tháng: ";
        std::cin >> soTienRut;

        if (soTienRut < 0) {
            std::cout << "Số tiền rút không hợp lệ. Hãy nhập lại." << std::endl;
            return 1;
        }

        soDuBanDau += soTienGui - soTienRut;
        soTienLai = soDuBanDau * laiSuatHangThang;
        soDuBanDau += soTienLai;

        if (soDuBanDau < 0) {
            std::cout << "Tài khoản đã bị đóng vì số dư âm." << std::endl;
            break;
        }
    }

    // Hiển thị kết quả cuối kỳ
    std::cout << "-------------------------" << std::endl;
    std::cout << "Số dư cuối kỳ: " << soDuBanDau << std::endl;
    
    return 0;
}
