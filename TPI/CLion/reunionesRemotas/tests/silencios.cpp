#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(silenciosTEST, silenciosValidos) {
    senial hablante = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    vector<intervalo> intervalos = {make_pair(5, 6)};

    ASSERT_INTERVALOS_EQ(silencios(hablante, prof, freq, umbral), intervalos);
}

TEST(silenciosTEST, silenciosValidos2) {
    senial hablante = {1, 0, -2, -1, 6, 0, -2, 1, 9, -15};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    vector<intervalo> intervalos = {make_pair(0, 3), make_pair(5, 7)};

    vector<intervalo> resultado = silencios(hablante, prof, freq, umbral);

    ASSERT_EQ(intervalos, resultado);

    ASSERT_INTERVALOS_EQ(silencios(hablante, prof, freq, umbral), intervalos);
}

TEST(silenciosTEST, todaLaSenialEsSilencio) {
    senial hablante = {1, 0, -2, -1, 2, 0, -2, 1, -1, 2};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    vector<intervalo> intervalos = {make_pair(0, hablante.size() - 1)};

    vector<intervalo> resultado = silencios(hablante, prof, freq, umbral);

    ASSERT_EQ(intervalos, resultado);

    ASSERT_INTERVALOS_EQ(silencios(hablante, prof, freq, umbral), intervalos);
}

TEST(silenciosTEST, noHaySilencios) {
    senial hablante = {3, 6, -9, 0, 20, 32, -3, 3, -3, 3};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    vector<intervalo> intervalos(0);

    vector<intervalo> resultado = silencios(hablante, prof, freq, umbral);

    ASSERT_EQ(intervalos, resultado);

    ASSERT_INTERVALOS_EQ(silencios(hablante, prof, freq, umbral), intervalos);
}

TEST(silenciosTEST, noHaySilencios2) {
    senial hablante = {0, 3, 0, 3, 0, 3, 0, 3, 0, 3};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    vector<intervalo> intervalos(0);

    vector<intervalo> resultado = silencios(hablante, prof, freq, umbral);

    ASSERT_EQ(intervalos, resultado);

    ASSERT_INTERVALOS_EQ(silencios(hablante, prof, freq, umbral), intervalos);
}

TEST(silenciosTEST, noHaySilencios3) {
    senial hablante = {3, 0, 3, 0, 3, 0, 3, 0, 3, 0};
    int prof = 8;
    int freq = 10;
    int umbral = 3;

    vector<intervalo> intervalos(0);

    vector<intervalo> resultado = silencios(hablante, prof, freq, umbral);

    ASSERT_EQ(intervalos, resultado);

    ASSERT_INTERVALOS_EQ(silencios(hablante, prof, freq, umbral), intervalos);
}