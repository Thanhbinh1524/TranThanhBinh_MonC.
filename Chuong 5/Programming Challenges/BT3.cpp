#include <iostream>

int main() {
    const double taoTangMucNuoc = 1.5; // Tốc độ tăng mực nước (mm/năm)

    std::cout << "Năm\tTăng mực nước (mm)" << std::endl;
    
    for (int nam = 1; nam <= 25; ++nam) {
        double tangMucNuoc = nam * taoTangMucNuoc;
        std::cout << nam << "\t" << tangMucNuoc << std::endl;
    }

    return 0;
}
