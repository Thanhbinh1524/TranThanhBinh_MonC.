#include <iostream>

int main() {
    int maNhanVien;
    double tongLuong, thueTieuBang, thueLienBang, khauTruFICA;
    double tongLuongGop, tongThueTieuBang, tongThueLienBang, tongKhauTruFICA, tongLuongRong;

    std::cout << "Bảng lương hàng tuần" << std::endl;
    std::cout << "Nhập 0 để kết thúc." << std::endl;

    while (true) {
        std::cout << "Nhập mã số nhân viên: ";
        std::cin >> maNhanVien;

        if (maNhanVien == 0) {
            break; // Kết thúc vòng lặp nếu mã số nhân viên là 0
        }

        std::cout << "Nhập tổng lương: ";
        std::cin >> tongLuong;

        std::cout << "Nhập thuế tiểu bang: ";
        std::cin >> thueTieuBang;

        std::cout << "Nhập thuế liên bang: ";
        std::cin >> thueLienBang;

        std::cout << "Nhập khoản khấu trừ FICA: ";
        std::cin >> khauTruFICA;

        // Kiểm tra tính hợp lệ của dữ liệu đầu vào
        if (tongLuong < 0 || thueTieuBang < 0 || thueLienBang < 0 || khauTruFICA < 0 || (thueTieuBang + thueLienBang + khauTruFICA) > tongLuong) {
            std::cout << "Dữ liệu không hợp lệ. Vui lòng nhập lại." << std::endl;
            continue; // Nhập lại dữ liệu nếu không hợp lệ
        }

        // Tính toán các tổng
        tongLuongGop += tongLuong;
        tongThueTieuBang += thueTieuBang;
        tongThueLienBang += thueLienBang;
        tongKhauTruFICA += khauTruFICA;
        tongLuongRong += (tongLuong - thueTieuBang - thueLienBang - khauTruFICA);
    }

    // Hiển thị kết quả
    std::cout << "--------------------------" << std::endl;
    std::cout << "Tổng lương gộp: " << tongLuongGop << std::endl;
    std::cout << "Tổng thuế tiểu bang: " << tongThueTieuBang << std::endl;
    std::cout << "Tổng thuế liên bang: " << tongThueLienBang << std::endl;
    std::cout << "Tổng khoản khấu trừ FICA: " << tongKhauTruFICA << std::endl;
    std::cout << "Tổng lương ròng: " << tongLuongRong << std::endl;

    return 0;
}
