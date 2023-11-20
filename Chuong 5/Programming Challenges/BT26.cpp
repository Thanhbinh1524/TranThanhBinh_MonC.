#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    // Khai báo biến
    std::ofstream outputFile;
    outputFile.open("BaoCaoTietKiem.txt"); // Mở tệp "BaoCaoTietKiem.txt" để ghi

    if (!outputFile) {
        std::cerr << "Không thể mở tệp. Kết thúc chương trình." << std::endl;
        return 1;
    }

    double laiSuatHangNam;
    double soDuBanDau;
    int soThang;

    // Nhập thông tin từ người dùng
    std::cout << "Nhập lãi suất hàng năm (dưới dạng phần trăm): ";
    std::cin >> laiSuatHangNam;

    std::cout << "Nhập số dư ban đầu: ";
    std::cin >> soDuBanDau;

    std::cout << "Nhập số tháng đã trôi qua: ";
    std::cin >> soThang;

    // Tính toán số dư cuối kỳ
    double soDuCuoiKy = soDuBanDau;
    for (int i = 0; i < soThang; ++i) {
        soDuCuoiKy += (laiSuatHangNam / 12.0 / 100.0) * soDuCuoiKy;
    }

    // Ghi báo cáo cuối cùng vào tệp
    outputFile << std::fixed << std::setprecision(2);
    outputFile << "Số dư cuối kỳ sau " << soThang << " tháng là: $" << soDuCuoiKy << std::endl;

    outputFile.close(); // Đóng tệp sau khi ghi xong

    std::cout << "Báo cáo cuối cùng đã được ghi vào tệp \"BaoCaoTietKiem.txt\"." << std::endl;

    return 0;
}
