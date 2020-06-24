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

TEST(seEnojoTEST, senialEnojada){
    senial s = {1,3,-3,4,6,0,-2,-8,9,-15,7,5,-4,4,8,-9,5,-14,7,5,-6,8,-5,5,-7,-7,4,5,-6,9};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    ASSERT_TRUE(seEnojo(s, umbral, prof, freq));
}


