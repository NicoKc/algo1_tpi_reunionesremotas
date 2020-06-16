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
    // Implementacions
    return;
}

void ralentizar(reunion& r, int prof, int freq) {
    // Implementacions
    return;
}

int sumatoria(vector<int> s) {
    int suma = 0;

    int i = 0;
    while (i < s.size()) {
        suma += s[i];
        i++;
    }

    return suma;
}

float tono(senial s) {
    return abs(sumatoria(s)) / s.size();
}

vector<hablante> tonosDeVozElevados(reunion r, int freq, int prof) {
    vector<hablante> maximos{r[0].second};
    float tonoMaximo = tono(r[0].first);

    int i = 1;
    while (i < r.size()) {
        float tonoDelHablante = tono(r[i].first);

        if (tonoDelHablante > tonoMaximo) {
            maximos = {r[i].second};
        } else if (tonoDelHablante == tonoMaximo) {
            maximos.push_back(r[i].second);
        }
        i++;
    }

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

