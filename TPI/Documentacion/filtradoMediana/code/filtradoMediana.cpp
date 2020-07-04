void filtradoMediana(senial &s, int R, int prof, int freq) {
    int largoDeW = (2 * R) + 1;
    vector<int> w(largoDeW, 0);

    int j = largoDeW - 1;
    while (j >= 0) {
        w[j] = s[j];
        j--;
    }

    int i = R;
    int fin = s.size() - R;
    while (i < fin) {
        if (i != R) {
            w[(i - R - 1) % largoDeW] = s[i + R];
        }
        s[i] = posicionROrdenada(w, R);
        i++;
    }
}