#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(reconstruirTEST, reconstruirValidos){
    senial hablante1 = {1, 3, -3, 4, 6, 0, 0, -8, 9, -15};
    int prof = 8;
    int freq = 10;

    senial hablante1Reconstruido = {1, 3, -3, 4, 6, -1, -1, -8, 9, -15};

    senial hablanteObtenido = reconstruir(hablante1, prof, freq);

    ASSERT_HABLANTES_EQ(hablanteObtenido, hablante1Reconstruido);
}

TEST(reconstruirTEST, reconstruirValidosConPasajePorCero){
    senial hablante2 = {1, 3, 2, 3, -8, 0, 4, 0, 8, -15};
    int prof = 8;
    int freq = 10;

    senial hablante2Reconstruido = {1, 3, 2, 3, -8, 0, 4, 6, 8, -15};

    senial hablanteObtenido2 = reconstruir(hablante2, prof, freq);

    ASSERT_HABLANTES_EQ(hablanteObtenido2, hablante2Reconstruido);
}

TEST(reconstruirTEST, reconstruirValidosConTresCeros){
    senial hablante3 = {1, 3, 2, 3, -8, 0, 0, 0, 10, -15};
    int prof = 8;
    int freq = 10;

    senial hablante3Reconstruido = {1, 3, 2, 3, -8, 1, 1, 1, 10, -15};

    senial hablanteObtenido3 = reconstruir(hablante3, prof, freq);

    ASSERT_HABLANTES_EQ(hablanteObtenido3, hablante3Reconstruido);
}



