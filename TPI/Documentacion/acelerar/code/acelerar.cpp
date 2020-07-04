void acelerar(reunion &r, int prof, int freq) {
    reunion rV = r;
    for (int i = 0; i < rV.size(); i++) {
        int j = 1;
        while (j < rV[i].first.size()) {
            r[i].first[(j - 1) / 2] = rV[i].first[j];
            j = j + 2;
        }

        int a = j / 2;
        for (int q = 0; q < rV[i].first.size() - a; q++) {
            r[i].first.pop_back();
        }
    }
}