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
