#ifndef REUNIONESREMOTAS_SOLUCION_H
#define REUNIONESREMOTAS_SOLUCION_H


#include "definiciones.h"

bool esSenial(vector<int> s, int prof, int freq);
bool seEnojo(senial s, int umbral, int prof, int freq);
bool esReunionValida(reunion r, int prof, int freq);
void acelerar(reunion& r, int prof, int freq);
void ralentizar(reunion &r, int prof, int freq);
vector<hablante> tonosDeVozElevados(reunion r, int prof, int freq);
void ordenar(reunion& r, int prof, int freq);
vector<intervalo> silencios(senial s, int prof, int freq, int umbral);
bool hablantesSuperpuestos(reunion r, int prof, int freq, int umbral);
senial reconstruir(senial s, int prof, int freq);
void filtradoMediana(senial& s, int R, int prof, int freq);

#endif //REUNIONESREMOTAS_SOLUCION_H
