#ifndef REUNIONESREMOTAS_SOLUCION_H
#define REUNIONESREMOTAS_SOLUCION_H


#include "definiciones.h"

bool esSenial(vector<int> s, int prof, int freq);			//S
bool seEnojo(senial s, int umbral, int prof, int freq);			//V
bool esReunionValida(reunion r, int prof, int freq);			//S
void acelerar(reunion& r, int prof, int freq);				//C
void ralentizar(reunion &r, int prof, int freq);			//C
vector<hablante> tonosDeVozElevados(reunion r, int prof, int freq);	//N
void ordenar(reunion& r, int prof, int freq);				//N
vector<intervalo> silencios(senial s, int prof, int freq, int umbral);	//S
bool hablantesSuperpuestos(reunion r, int prof, int freq, int umbral);	//V
senial reconstruir(senial s, int prof, int freq);			//C
void filtradoMediana(senial& s, int R, int prof, int freq);		

#endif //REUNIONESREMOTAS_SOLUCION_H
