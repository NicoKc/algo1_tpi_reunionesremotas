void acelerar(reunion &r, int prof, int freq) {
    reunion rV = r;
    for (int i = 0; i < rV.size(); i++) {
        int a = 0;
        for (int j = 1; j < rV[i].first.size(); j = j + 2) {
            r[i].first[(j - 1) / 2] = rV[i].first[j];
            a = (j + 1) / 2;
        }
        for (int q = 0; q < rV[i].first.size() - a; q++) {
            r[i].first.pop_back();
        }
        r[i].second = rV[i].second;
    }
}