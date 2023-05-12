#include <iostream>
#include "Parameters.hpp"


//
int main() {

    std::cout << xTableUserExt.byName.parametr1.convertVar(8) << std::endl;
    std::cout << xTableUserExt.byPosition[1].convertVar(2) << std::endl;
    std::cout << xTableUserExt.byName.parametr3.convertVar(5678) << std::endl;
    return 0;
}
