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