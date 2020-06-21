#include <iostream>
#include "lib/gtest.h"
#include "src/solucion.h"


using namespace std;
int main(int argc, char **argv) {
    std::cout << "Implementando TPI!!" << std::endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
