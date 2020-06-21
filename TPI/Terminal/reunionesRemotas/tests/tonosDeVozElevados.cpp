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

