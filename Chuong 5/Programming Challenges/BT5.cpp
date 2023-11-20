#include <iostream>

int main() {
    double phiHienTai = 2500.0; // Phí thành viên hiện tại (USD)
    const double tyLeTang = 0.04; // Tỷ lệ tăng phí hàng năm (4%)

    std::cout << "Năm\tPhí thành viên (USD)" << std::endl;
    
    for (int nam = 1; nam <= 6; ++nam) {
        phiHienTai *= (1 + tyLeTang); // Tính phí trong năm tới
        std::cout << nam << "\t" << phiHienTai << std::endl;
    }

    return 0;
}
