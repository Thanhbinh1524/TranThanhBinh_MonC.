#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    // Khai báo biến
    std::ifstream inputFile;
    inputFile.open("LineUp.txt"); // Mở tệp "LineUp.txt" để đọc

    if (!inputFile) {
        std::cerr << "Không thể mở tệp. Kết thúc chương trình." << std::endl;
        return 1;
    }

    std::vector<std::string> danhSachTen;
    std::string ten;

    // Đọc tên từ tệp và lưu vào vector danhSachTen
    while (std::getline(inputFile, ten)) {
        danhSachTen.push_back(ten);
    }

    inputFile.close(); // Đóng tệp sau khi đọc xong

    // Hiển thị danh sách tên
    std::cout << "Danh sách tên xếp hàng học sinh:" << std::endl;
    for (const std::string& ten : danhSachTen) {
        std::cout << ten << std::endl;
    }

    return 0;
}
