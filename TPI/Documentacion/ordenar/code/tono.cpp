float tono(senial s){
    float sumatoria = 0;
    for(int i=0; i < s.size(); i++){
        sumatoria = sumatoria + abs(s[i]);
    }
    return sumatoria / s.size();
}
