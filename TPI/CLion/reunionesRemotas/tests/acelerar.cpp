#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(acelerarTEST, aceleracionValida){
    senial hablante1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15, 7, 1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    senial hablante2 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15, 7, 1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    reunion reunionOriginal = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;

    senial hablante1Acelerado = {3, 4, 0, -8, -15, 1, -3, 6, -2, 9};
    senial hablante2Acelerado = {3, 4, 0, -8, -15, 1, -3, 6, -2, 9};
    reunion reunionAcelerada = {make_pair(hablante1Acelerado, 0), make_pair(hablante2Acelerado, 1)};

    acelerar(reunionOriginal, prof, freq);

    ASSERT_REUNION_EQ(reunionOriginal, reunionAcelerada);
}


