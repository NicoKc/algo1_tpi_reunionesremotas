#include "solucion.h"

// Ejercicios

bool esSenial(vector<int> s, int prof, int freq) {
    bool resp = false;
    // Implementacion
    return resp;
}

bool seEnojo(senial s, int umbral, int prof, int freq) {
    bool resp = false;
    // Implementacion
    return resp;
}

bool esReunionValida(reunion r, int prof, int freq) {
    bool resp = false;
    // Implementacion
    return resp;
}


void acelerar(reunion& r, int prof, int freq) {
    reunion rV=r;
    for(int i=0; i<rV.size(); i++){
        int a=0;
        for(int j=1; j<rV[i].first.size();j=j+2){
            r[i].first[(j-1)/2]=rV[i].first[j];
            a=(j+1)/2;
        }
        for(int q=0; q<rV[i].first.size()-a; q++){
            r[i].first.pop_back();
        }
        r[i].second=rV[i].second;
    }
    return;
}

void ralentizar(reunion& r, int prof, int freq) {
    // Implementacions
    return;
}

vector<hablante> tonosDeVozElevados(reunion r, int freq, int prof) {
    vector<hablante> maximos;
    // Implementacion
    return maximos;
}

void ordenar(reunion& r, int freq, int prof) {
    // Implementacion
    return;
}

vector<intervalo > silencios(senial s, int prof, int freq, int umbral) {
    vector<pair<int,int> > intervalos;
    // Implementacion
    return intervalos;
}


bool hablantesSuperpuestos(reunion r, int prof, int freq, int umbral) {
    bool resp = false;
    // Implementacion
    return resp;
}

senial reconstruir(senial s, int prof, int freq) {
    senial senalReconstruida;
    // Implementacion
    return senalReconstruida;
}

void filtradoMediana(senial& s, int R, int prof, int freq){
    // Implementacion
    return;
}

