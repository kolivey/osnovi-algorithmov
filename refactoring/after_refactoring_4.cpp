#include <iostream>
#include <cmath>



int main(int argc, char* argv[])
{
    double angle;

    std::cout << "Введите угол" << std::endl;
    std::cin >> angle;

    double sinAngle = std::sin(2 * angle);
    double cosAngle = std::cos(2 * angle);

    if  (cosAngle != 1){
        double sinPlus = 1 + sinAngle;
        double cosMinus = 1 - cosAngle;

        double sin1 = sinPlus / cosMinus;

        std::cout << "F(x1)=" << sin1 << std::endl;
    }
    else {
        std::cout << "Неверный ввод для F(x1) "<< std::endl;
        double tgAngle = std::tan(angle);
        if  (tgAngle != 1){
            double tgPow = std::pow(tgAngle,2);
            double tgPlus = 1 +  tgPow;
            double tgMinus = 1 - tgPow;

            double sin2 = tgPlus / tgMinus;

            std::cout << "F(x2)=" << sin2 << std::endl;
        }
    }
    
    return 0;
}
