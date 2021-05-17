#include <iostream>
#include "Cfraction.h"

int main() {
    Cfraction cfraction(3, 2);
    cfraction(1, 3);
    cfraction /= 3;
    std::cout << (std::string)cfraction << " " << cfraction << std::endl;
    if (cfraction == Cfraction(1, 2))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    return 0;
}
