void insert(vector<int> &w, int i) {
    int j = i;
    while (j > 0 && w[j] < w[j - 1]) {
        swap(w, j, j - 1);
        j--;
    }
}