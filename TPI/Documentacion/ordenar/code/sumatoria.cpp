int sumatoria(vector<int> s) {
    int suma = 0;

    int i = 0;
    while (i < s.size()) {
        suma += s[i];
        i++;
    }

    return suma;
}