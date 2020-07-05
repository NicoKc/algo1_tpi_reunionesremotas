#include "../src/solucion.h"
#include "../src/auxiliares.h"
#include "../lib/gtest.h"


using namespace std;

TEST(ralentizarTEST, ralentizacionValida) {
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

TEST(ralentizarTEST, ralentizacionValida2) {
    senial hablante1 = {1, 3, -3, 4, 6, 0, -2, -8, 9, -15, 9};
    senial hablante2 = {1, 8, 9, 10, 2, 3, 7, 24, 98, 9, -1};
    reunion reunionOriginal = {make_pair(hablante1, 0), make_pair(hablante2, 1)};
    int prof = 8;
    int freq = 10;

    senial hablante1Ralentizado = {1, 2, 3, 0, -3, 0, 4, 5, 6, 3, 0, -1, -2, -5, -8, 0, 9, -3, -15, -3, 9};
    senial hablante2Ralentizado = {1, 4, 8, 8, 9, 9, 10, 6, 2, 2, 3, 5, 7, 15, 24, 61, 98, 53, 9, 4, -1};
    reunion reunionRalentizada = {make_pair(hablante1Ralentizado, 0), make_pair(hablante2Ralentizado, 1)};

    ralentizar(reunionOriginal, prof, freq);

    ASSERT_EQ(hablante1Ralentizado, reunionOriginal[0].first);
    ASSERT_EQ(hablante2Ralentizado, reunionOriginal[1].first);

    ASSERT_EQ(0, reunionRalentizada[0].second);
    ASSERT_EQ(1, reunionRalentizada[1].second);

    ASSERT_REUNION_EQ(reunionOriginal, reunionRalentizada);
}
