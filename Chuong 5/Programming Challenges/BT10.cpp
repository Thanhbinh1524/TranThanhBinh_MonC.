#include <iostream>

int main() {
    int soNam;
    double lượngMưaTháng;
    double tổngLượngMưa = 0.0;
    const int SốThángTrongNăm = 12;

    // Nhập số năm và kiểm tra đầu vào
    do {
        std::cout << "Nhập số năm: ";
        std::cin >> soNam;
    } while (soNam < 1);

    // Vòng lặp ngoài cho mỗi năm
    for (int nam = 1; nam <= soNam; ++nam) {
        std::cout << "Năm " << nam << std::endl;
        
        // Vòng lặp bên trong cho mỗi tháng
        for (int tháng = 1; tháng <= SốThángTrongNăm; ++tháng) {
            do {
                std::cout << "Nhập lượng mưa cho tháng " << tháng << " (inch): ";
                std::cin >> lượngMưaTháng;
            } while (lượngMưaTháng < 0);

            tổngLượngMưa += lượngMưaTháng;
        }
    }

    int tổngSốTháng = soNam * SốThángTrongNăm;
    double lượngMưaTrungBình = tổngLượngMưa / tổngSốTháng;

    // Hiển thị kết quả
    std::cout << "Số tháng: " << tổngSốTháng << std::endl;
    std::cout << "Tổng lượng mưa (inch): " << tổngLượngMưa << std::endl;
    std::cout << "Lượng mưa trung bình hàng tháng (inch): " << lượngMưaTrungBình << std::endl;

    return 0;
}
