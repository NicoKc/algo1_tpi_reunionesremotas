vector<int> insertionSort(vector<int> w) {
    vector<int> res = w;

    int i = 0;
    while (i < w.size()) {
        insert(res, i);
        i++;
    }

    return res;
}