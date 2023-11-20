#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::ifstream inputFile("People.txt"); // Mở tệp để đọc dữ liệu
    if (!inputFile.is_open()) {
        std::cerr << "Không thể mở tệp." << std::endl;
        return 1;
    }

    std::vector<int> populations; // Vector lưu trữ dân số
    std::string line;

    // Đọc dữ liệu từ tệp và lưu vào vector populations
    while (std::getline(inputFile, line)) {
        int population = std::stoi(line); // Chuyển đổi dòng sang số nguyên
        populations.push_back(population);
    }

    inputFile.close(); // Đóng tệp sau khi đọc xong

    // Hiển thị biểu đồ dân số
    std::cout << "TĂNG DÂN SỐ PRAIRIEVILLE" << std::endl;
    std::cout << "(mỗi dấu * tượng trưng cho 1.000 người)" << std::endl;

    for (int i = 0; i < populations.size(); ++i) {
        int year = 1900 + i * 20;
        std::cout << year << " ";
        
        // Vẽ biểu đồ với mỗi dấu hoa thị (* tượng trưng cho 1.000 người)
        for (int j = 0; j < populations[i] / 1000; ++j) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
