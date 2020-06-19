void insertionSort(reunion &r) {
    int i = 0;
    while (i < r.size()) {
        insert(r, i);
        i++;
    }
}
