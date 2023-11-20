#include <iostream>

int main() {
    const double caloMoiPhut = 3.6; // Tốc độ đốt cháy calo (calo/phút)

    std::cout << "Thời gian (phút)\tLượng calo đốt cháy" << std::endl;
    
    for (int thoiGian = 5; thoiGian <= 30; thoiGian += 5) {
        double luongCalo = thoiGian * caloMoiPhut;
        std::cout << thoiGian << "\t\t" << luongCalo << std::endl;
    }

    return 0;
}
