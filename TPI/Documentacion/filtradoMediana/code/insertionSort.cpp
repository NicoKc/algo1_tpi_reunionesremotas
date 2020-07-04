void insertionSort(vector<int> &w) {
    int i = 0;
    while (i < w.size()) {
        insert(w, i);
        i++;
    }
}