void insert(reunion &r, int i) {
    int j = i;
    while (j > 0 && tono(r[j].first) > tono(r[j - 1].first)) {
        swap(r, j, j - 1);
        j--;
    }
}