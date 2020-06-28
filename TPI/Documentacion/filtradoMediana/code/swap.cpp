void swap(vector<int> &w, int i, int j) {
    int aux = w[i];
    w[i] = w[j];
    w[j] = aux;
}