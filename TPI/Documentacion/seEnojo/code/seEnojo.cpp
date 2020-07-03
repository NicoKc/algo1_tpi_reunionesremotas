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
