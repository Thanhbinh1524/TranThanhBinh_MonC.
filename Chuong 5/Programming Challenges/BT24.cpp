#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    // Khai báo biến
    std::ifstream inputFile;
    inputFile.open("Random.txt"); // Mở tệp "Random.txt" để đọc

    if (!inputFile) {
        std::cerr << "Không thể mở tệp. Kết thúc chương trình." << std::endl;
        return 1;
    }

    int soLuongSo = 0;
    int tong = 0;
    int so;
    
    // Đọc và tính toán từng số trong tệp
    while (inputFile >> so) {
        soLuongSo++;
        tong += so;
    }

    inputFile.close(); // Đóng tệp sau khi đọc xong

    // Tính trung bình cộng
    double trungBinh = static_cast<double>(tong) / soLuongSo;

    // Hiển thị kết quả
    std::cout << "Số lượng số trong tệp: " << soLuongSo << std::endl;
    std::cout << "Tổng của các số trong tệp: " << tong << std::endl;
    std::cout << "Trung bình cộng của các số trong tệp: " << trungBinh << std::endl;

    return 0;
}
