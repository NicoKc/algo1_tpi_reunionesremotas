#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(seEnojoTEST, senialMenorADosSegundos){
    senial s = {1,3,-3,4,6,0,-2,-8,9,-15,7};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    ASSERT_FALSE(seEnojo(s, umbral, prof, freq));
}


