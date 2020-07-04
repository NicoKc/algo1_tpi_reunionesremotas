#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(filtradoMedianaTEST, filtradoMedianaValidos) {
    senial hablante = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};

    int prof = 8;
    int freq = 10;
    int R = 4;

    senial hablanteResultante = {1, 3, -3, 4, 1, 0, -2, -8, 9, -15};

    filtradoMediana(hablante, R, prof, freq);

    ASSERT_SENIAL_EQ(hablante, hablanteResultante);
}

TEST(filtradoMedianaTEST, filtradoMedianaValidos2) {
    senial hablante = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};

    int prof = 8;
    int freq = 10;
    int R = 2;

    senial hablanteResultante = {1, 3, 3, 3, 0, 0, 0, -2, 9, -15};

    filtradoMediana(hablante, R, prof, freq);

    ASSERT_EQ(hablante, hablanteResultante);

    ASSERT_SENIAL_EQ(hablante, hablanteResultante);
}

TEST(filtradoMedianaTEST, filtradoMedianaValidos2MasLargo) {
    senial hablante = {1, 3, -3, 4, 9, 6, 0, -2, -300, -8, 9, -15};

    int prof = 8;
    int freq = 10;
    int R = 2;

    senial hablanteResultante = {1, 3, 3, 4, 4, 4, 0, -2, -2, -8, 9, -15 };

    filtradoMediana(hablante, R, prof, freq);

    ASSERT_EQ(hablante, hablanteResultante);

    ASSERT_SENIAL_EQ(hablante, hablanteResultante);
}

TEST(filtradoMedianaTEST, filtradoMedianaValidosMuyGrandeConR2) {
    senial hablante = {1, 2, 3, 4,
                       5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, -29,
                       30, 31, 32, 33, 34, 35,
                       36, 37, 38, 39};

    int prof = 8;
    int freq = 10;
    int R = 2;

    senial hablanteResultante = {1, 2, 3, 4,
                                 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 26,
                                 27, 28,
                                 30, 31, 32, 33, 34, 35,
                                 36, 37, 38, 39};

    filtradoMediana(hablante, R, prof, freq);

    ASSERT_EQ(hablante, hablanteResultante);

    ASSERT_SENIAL_EQ(hablante, hablanteResultante);
}

TEST(filtradoMedianaTEST, filtradoMedianaValidosMuyGrandeConR4) {
    senial hablante = {1, 2, 3, 4,
                       5, 6, 7, 8, 9, 10, 11, 12, -13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
                       30, 31, 32, 33, 34, 35,
                       36, 37, 38, 39};

    int prof = 8;
    int freq = 10;
    int R = 4;

    senial hablanteResultante = {1, 2, 3, 4,
                                 5, 6, 7, 8, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
                                 28, 29,
                                 30, 31, 32, 33, 34, 35,
                                 36, 37, 38, 39};

    filtradoMediana(hablante, R, prof, freq);

    ASSERT_EQ(hablante, hablanteResultante);

    ASSERT_SENIAL_EQ(hablante, hablanteResultante);
}