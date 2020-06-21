#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(esSenialTEST, frecuenciaValida){
    senial s = {1,3,-3,4,6,0,-2,-8,9,-15,7};
    int prof = 8;
    int freq = 10;

    ASSERT_TRUE(esSenial(s, prof, freq));
}


