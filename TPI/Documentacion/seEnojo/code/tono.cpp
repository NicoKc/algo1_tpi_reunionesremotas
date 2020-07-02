float tono(senial s){
    float sumatoria = 0;
    for(int i=0; i < s.size(); i++){
        sumatoria = sumatoria + valorAbsoluto(s[i]);
    }
    return sumatoria / s.size();
}
