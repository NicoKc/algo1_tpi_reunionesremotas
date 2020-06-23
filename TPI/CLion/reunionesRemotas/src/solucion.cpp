#include "solucion.h"
#include "auxiliares.h"

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

/*
bool superaUmbral(senial s, int umbral){
    bool resp = false;
    resp = tono(s) > umbral;
    return resp;
}
*/

/*
bool umbralValido(int umbral){
    umbral > 0;
}
*/


bool seEnojo(senial s, int umbral, int prof, int freq) {
    bool resp = false;
    // Implementacion

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
bool esMatriz (vector< pair<senial,int> > &r){
    int i = 1;
    while (i < r.size() && (r[0]).first.size() == (r[i]).first.size()){
        i++;
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
    reunion rV=r;
    reunion rN(r.size());
    for(int i=0;i<r.size();i++){
            senial sN(2*(r[1].first.size())-1);
            for(int j=0;j<sN.size();j++){
                if(j % 2==0){
                    sN[j]=r[i].first[j/2];
                }
                else{
                    sN[j]=(r[i].first[(j+1)/2]+r[i].first[(j-1)/2])/2;
                }
            }
            rN[i].first=sN;
            rN[i].second=r[i].second;
    }
    r=rN;
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

int noNuloMasCercanoAIzquierda(senial s, int i){
    //supongo que i está en rango
    int res=0;
    if(s[i-1]!=0){
        res=s[i-1];
    }
    else{
        res=noNuloMasCercanoAIzquierda(s, i-1);
    }
    //se que no se va a colgar porque cuando s[0]!=0
    return res;
}

int noNuloMasCercanoADerecha(senial s, int i){
    //supongo que i está en rango y que s[i]=0
    int res=1;
    if(s[i+1]!=0){
        res=s[i+1];
    }
    else{
        res=noNuloMasCercanoADerecha(s, i+1);
    }
    //se que no se va a colgar porque cuando s[s.size()-1]!=0
    return res;
}

int promedio(int a, int b){
    int p=(a+b)/2;
    return p;
}

senial reconstruir(senial s, int prof, int freq) {
    senial sN(s.size());
    for(int i=0;i<s.size();i++){
        if(s[i]!=0){
            sN[i]=s[i];
        } 
        else{
            if(s[i-1]*s[i+1]<0){
                sN[i]=s[i];
            }
            else{
                sN[i]=promedio(noNuloMasCercanoAIzquierda(s,i), noNuloMasCercanoADerecha(s,i));
            }
        }
    }
    return sN;
}

void filtradoMediana(senial& s, int R, int prof, int freq){
    // Implementacion
    return;
}

