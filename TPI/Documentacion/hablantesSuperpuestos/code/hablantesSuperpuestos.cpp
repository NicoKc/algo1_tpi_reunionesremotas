bool hablantesSuperpuestos(reunion r, int prof, int freq, int umbral) {
    bool resp = false;
    vector<int> hablando(r[0].first.size()); 
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
