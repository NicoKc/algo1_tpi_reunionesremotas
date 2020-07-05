#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(esSenialTEST, frecuenciaValida) {
    senial s = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15, 7};
    int prof = 8;
    int freq = 10;

    ASSERT_TRUE(esSenial(s, prof, freq));
}

TEST(esSenialTEST, frecuenciaInvalidaPorFrecuencia) {
    senial s = {1, 3, -3, 4, 6, 0, -2, -8, 9};
    int prof = 8;
    int freq = 10;

    ASSERT_FALSE(esSenial(s, prof, freq));
}

TEST(esSenialTEST, frecuenciaInvalidaPorRango) {
    senial s1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -500, 7};
    int prof = 8;
    int freq = 10;

    senial s2 = {1, 3, -3, 4, 6, 0, -2, -8, 9, 500, 7};

    ASSERT_FALSE(esSenial(s1, prof, freq));
    ASSERT_FALSE(esSenial(s2, prof, freq));
}

TEST(esSenialTEST, frecuenciaInvalidaPorProfundidad) {
    senial s = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15, 7};
    int prof = 5;
    int freq = 10;

    ASSERT_FALSE(esSenial(s, prof, freq));
}