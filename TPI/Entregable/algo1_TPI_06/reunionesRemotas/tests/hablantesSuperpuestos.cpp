#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"

using namespace std;

TEST(hablantesSuperpuestosTEST, hablantesSuperpuestosValidos) {
    senial hablante1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    senial hablante2 = {2, 6, 3, 8, 6, 10, 2, 12, 10, -15};
    reunion reunion = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    ASSERT_TRUE(hablantesSuperpuestos(reunion, prof, freq, umbral));
}

TEST(hablantesSuperpuestosTEST, hablantesNoSuperpuestos) {
    senial hablante1 = {1, 2, -3, 4, 6, 0, -2, -1, 2, -1};
    senial hablante2 = {1, -1, -2, 2, 0, 1, 3, 12, 1, -1};
    reunion reunion = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    ASSERT_FALSE(hablantesSuperpuestos(reunion, prof, freq, umbral));
}

TEST(hablantesSuperpuestosTEST, hablantesNoSuperpuestos2) {
    senial hablante1 = {6, 6, 6, 6, 3, 2, 2, 5, 6, 6};
    senial hablante2 = {0, 0, 0, 0, 0, 2, 6, 0, 0, 0};
    reunion reunion = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    ASSERT_FALSE(hablantesSuperpuestos(reunion, prof, freq, umbral));
}

TEST(hablantesSuperpuestosTEST, hablantesNoSuperpuestos3) {
    senial hablante1 = {6, 6, 6, 6, 3, 6, 2, -2, 6, 6};
    senial hablante2 = {0, 0, 0, 0, 0, 2, 6, 0, 0, 0};
    reunion reunion = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    ASSERT_FALSE(hablantesSuperpuestos(reunion, prof, freq, umbral));
}