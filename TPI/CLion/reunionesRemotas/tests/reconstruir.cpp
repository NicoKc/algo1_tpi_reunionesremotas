#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(reconstruirTEST, reconstruirValidos){
    senial hablante1 = {1, 3, -3, 0, 6, 0, 0, -8, 9, -15, 0, -1, 0, 8};
    int prof = 8;
    int freq = 10;

    senial hablante1Reconstruido = {1, 3, -3, 0, 6, -1, -1, -8, 9, -15};

    senial hablanteObtenido = reconstruir(hablante1, prof, freq);

    ASSERT_HABLANTES_EQ(hablanteObtenido, hablante1Reconstruido);
}

