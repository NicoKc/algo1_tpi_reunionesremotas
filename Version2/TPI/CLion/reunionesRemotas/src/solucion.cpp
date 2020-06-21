#include "solucion.h"

// Ejercicios

//proc esSenial

bool profValida(int prof){
    return (prof == 8) || (prof == 16) || (prof == 32);
}

// ver cuando s = < >. REVISAR si cumple la especificación
bool enRango(senial s, int prof){
    bool res = false;
    int count= 0;
    int i= 0;
    int n= s.size();
    while ((i < n)){
        if((-2^(prof-1) <= s[i] <= 2^(prof-1) - 1)){
            count = count + 1;
        } else{

        }


        i++;
    }
    return (count == n);


}

bool frecValida(int freq){
    return (freq == 10);
}

bool duraMasDe(senial s, int freq, float seg){
    return (s.size() >= freq*seg);
}

bool esValida(senial s, int prof, int frec ){
    bool res = false;
    res = (frecValida(frec) && profValida(prof) && enRango(s, prof) && duraMasDe(s, frec, 1));
    return res;

}

bool esSenial(vector<int> s, int prof, int freq) {
    bool resp = false;
    resp = esValida(s,prof,freq);
    return resp;
}

//proc seEnojo?

bool superaUmbral(senial s, int umbral){

}

bool seEnojo(senial s, int umbral, int prof, int freq) {
    bool resp = false;
    // Implementacion
    resp=
    return resp;
}

//proc esReunionValida
bool hablantesDeReunionValidos(reunion r, int prof, int freq){
    int i = 0;
    int j = 0;
    int reps= 0;

// chequeo de todos los i
    while(i < r.size()) {
// chequeo de un solo i
        while (j < r.size()) {
            if ((r[i] == r[j]) && (i != j)) {
                reps = reps + 1;

            }
            j++;

        }

        i++;
    }

    return (reps == 0);
}


// 0 = first?
bool senialesValidas(reunion r, int prof, int freq){
    int i = 0;
    int count = 0;
    while(i < r.size()){
        if(esValida((r[i]).first, prof, freq)){
            count = count + 1;
        }
        i++;
    }

    return (count == r.size());

}
// <= o <???
// hay que optimizarlo mas?
bool esMatriz (vector< pair<senial,int>> &r){
    int i = 1;
    while (i < r.size() && (r[0]).first.size() == (r[i]).first.size()){
        i++;
    }


}

return (i == r.size());
}

bool reunionValida(reunion r, int prof, int freq ){
    return (r.size() > 0 ) && (esMatriz(r)) && (senialesValidas(r, prof, freq)) &&
           (hablantesDeReunionValidos(r, prof, freq));

}

bool esReunionValida(reunion r, int prof, int freq) {
    bool resp = false;
    resp = reunionValida(r, prof, freq);
    return resp;
}

// proc acelerar
void acelerar(reunion& r, int prof, int freq) {
    // Implementacions
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

bool umbralValido(int umbral){
    return (umbral > 0);
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

