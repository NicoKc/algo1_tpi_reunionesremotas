#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(ralentizarTEST, ralentizacionValida){
    senial hablante1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    senial hablante2 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15};
    reunion reunionOriginal = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;

    senial hablante1Acelerado = {1, 2, 3, 0, -3, 0, 4, 5, 6, 3, 0, -1, -2, -5, -8, 0, 9, -3, -15};
    senial hablante2Acelerado = {1, 2, 3, 0, -3, 0, 4, 5, 6, 3, 0, -1, -2, -5, -8, 0, 9, -3, -15};
    reunion reunionRalentizada = {make_pair(hablante1Acelerado, 0), make_pair(hablante2Acelerado, 1)};

    ralentizar(reunionOriginal, prof, freq);

    ASSERT_REUNION_EQ(reunionOriginal, reunionRalentizada);
}


