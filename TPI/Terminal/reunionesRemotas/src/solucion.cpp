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

