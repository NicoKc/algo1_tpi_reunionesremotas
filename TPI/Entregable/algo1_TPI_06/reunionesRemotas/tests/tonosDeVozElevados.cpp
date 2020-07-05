#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(tonosDeVozElevadosTEST, tonosDeVozElevadosValido){
    senial hablante1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    senial hablante2 = {2, 6, 3, 8, 6, 10, 2, 12, 10, -15};
    reunion reunion = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;

    ASSERT_HABLANTES_EQ(tonosDeVozElevados(reunion, prof, freq), {1});
}


TEST(tonosDeVozElevadosTEST, tonosDeVozElevadosConHablantesConElMismoTono) {
    senial hablante1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    senial hablante2 = {0, -2, -8, 9, -15, 1, 3, -3, 4, 6};
    reunion reunion = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;

    ASSERT_HABLANTES_EQ(tonosDeVozElevados(reunion, prof, freq), {0, 1});
}


TEST(tonosDeVozElevadosTEST, tonosDeVozElevadosConSolo2HablantesConElMismoTono) {
    senial hablante1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    senial hablante2 = {0, -2, -8, 9, -15, -27, 3, -3, 4, 6};
    senial hablante3 = {0, -2, -8, 9, -15, 1, 3, -3, 4, 6};
    reunion reunion = {make_pair(hablante1, 0), make_pair(hablante2, 1), make_pair(hablante3, 3)};
    int prof = 8;
    int freq = 10;

    ASSERT_HABLANTES_EQ(tonosDeVozElevados(reunion, prof, freq), {1, 3});
}