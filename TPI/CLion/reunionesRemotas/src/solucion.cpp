#include "solucion.h"
#include "auxiliares.h"
#include <iostream>

// Ejercicios

//proc esSenial

bool profValida(int prof){
    return (prof == 8) || (prof == 16) || (prof == 32);
}

//
bool enRango(senial s, int prof){
    bool resp = true;
    int i= 0;
    while (i < s.size() && resp){
        resp = (s[i] >= - (pow(2,(prof-1)))) && (s[i] <= (pow(2,(prof-1))-1));
        i++;
    }
    return resp;
}

bool frecValida(int freq){
    return (freq == 10);
}

bool duraMasDe(senial s, int freq, float seg){
    return (s.size() >= freq*seg);
}

bool esValida(senial s, int prof, int frec ){
        return (frecValida(frec) && profValida(prof) && enRango(s, prof) && duraMasDe(s, frec, 1));
}

bool esSenial(vector<int> s, int prof, int freq) {
    return esValida(s,prof,freq);
}

//proc seEnojo?

int valorAbsoluto(int &n){
    if(n<0){
        n = n * (-1);
    }
    return n;
}

float tono(senial s){
    float sumatoria = 0;
    for(int i=0; i < s.size(); i++){
        sumatoria = sumatoria + valorAbsoluto(s[i]);
    }
    return sumatoria / s.size();
}

bool seEnojo(senial s, int umbral, int prof, int freq) {
    bool resp = false;
    int min = 2;
    if(!duraMasDe(s,freq,min)){
        return resp;
    } else{
        int i = 0;
        while( i < (s.size() - (min*freq-1)) && !resp){
            int j=i+(min*freq);
            while(j<=s.size() && !resp){
                senial subSenial (s.begin()+i,s.begin()+j);
                resp = (tono(subSenial) > umbral);
                j++;
            }
            i++;
        }
        return resp;
    }
}

//proc esReunionValida
bool hablantesDeReunionValidos(reunion r, int prof, int freq){
    bool resp = true;
    int i = 0;
    while(i < r.size() && resp) {
        if(r[i].second < r.size() && r[i].second >=0){
            int j = i+1;
            while (j < r.size() && resp) {
                if(r[i].second == r[j].second){
                    resp = false;
                }
                j++;
            }
        }else{
            resp = false;
        }
        i++;
    }
    return resp;
}

bool senialesValidas(reunion r, int prof, int freq){
    int i = 0;
    while(i < r.size() && esValida((r[i]).first, prof, freq)){
        i++;
    }
    return (i == r.size());
}

bool esMatriz (vector< pair<senial,int> > &r){
    int i = 1;
    while (i < r.size() && r[0].first.size() == r[i].first.size()){
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

void swap(reunion &r, int i, int j) {
    pair<senial, hablante> aux = r[i];
    r[i] = r[j];
    r[j] = aux;
}

void insert(reunion &r, int i) {
    int j = i;
    while (j > 0 && tono(r[j].first) > tono(r[j - 1].first)) {
        swap(r, j, j - 1);
        j--;
    }
}

void insertionSort(reunion &r) {
    int i = 0;
    while (i < r.size()) {
        insert(r, i);
        i++;
    }
}

void ordenar(reunion &r, int freq, int prof) {
    insertionSort(r);
}

vector<intervalo > silencios(senial s, int prof, int freq, int umbral) {
    vector<pair<int,int> > intervalos;
    int i=0;
    while(i < (s.size() - 1)){
        if(abs(s[i]) < umbral ){
            int j = i + 1;
            while(j < s.size() && (abs(s[j]) < umbral)){
                j++;
            }
            if(j > (i + 1)){
                intervalos.push_back(make_pair(i,(j - 1)));
            }
            i = j + 1;
        }
        else{
            i++;
        }
    }
    return intervalos;
}

bool hablantesSuperpuestos(reunion r, int prof, int freq, int umbral) {
    bool resp = false;
    vector<int> hablando(r[0].first.size()); // vector de ceros del tamanio de la senial
    int j = 0;
    while(j < r.size() && !resp){
        int i = 0;
        while( i < r[0].first.size()-1 && !resp){
            if(((abs(r[j].first[i])) >= umbral) || ((abs(r[j].first[i])) < umbral) && ((abs(r[j].first[i+1])) >= umbral)) {
                if(hablando[i] == 1){
                    resp=true;
                }else{
                    hablando[i] = 1;
                }
                i++;
            }else{
                i++;
            }
        }
        j++;
    }
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

void swap(vector<int> &w, int i, int j) {
    int aux = w[i];
    w[i] = w[j];
    w[j] = aux;
}

void insert(vector<int> &w, int i) {
    int j = i;
    while (j > 0 && w[j] < w[j - 1]) {
        swap(w, j, j - 1);
        j--;
    }
}

vector<int> insertionSort(vector<int> w) {
    vector<int> res = w;

    int i = 0;
    while (i < w.size()) {
        insert(res, i);
        i++;
    }

    return res;
}

void filtradoMediana(senial &s, int R, int prof, int freq) {
    vector<int> w((2 * R) + 1, 0);
    vector<int> wOrdenada((2 * R) + 1);

    int j = 2 * R;
    while (j >= 0) {
        w[j] = s[j];
        j--;
    }

    int i = R;
    int fin = s.size() - R;
    while (i < fin) {
        if (i != R) {
            w[i - R - 1] = s[i + R];
        }
        wOrdenada = insertionSort(w);
        s[i] = wOrdenada[R];
        i++;
    }
}

