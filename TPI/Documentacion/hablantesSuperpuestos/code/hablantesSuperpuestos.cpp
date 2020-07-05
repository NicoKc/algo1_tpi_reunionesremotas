bool hablantesSuperpuestos(reunion r, int prof, int freq, int umbral) {
    bool resp = false;
    vector<bool> hablando(r[0].first.size(), false);
    int j = 0;
    while (j < r.size() && !resp) {
        int i = 0;
        int cont = 0;
        while (i < r[0].first.size() && !resp) {
            if (valorAbsoluto(r[j].first[i]) < umbral) {
                cont++;
            } else {
                if (cont > 0) {
                    if (cont < 2) {
                        resp = hablando[i - 1];
                        hablando[i - 1] = true;
                    }
                    cont = 0;
                }

                resp = resp || hablando[i];
                hablando[i] = true;
            }
            i++;
        }
        j++;
    }
    return resp;
}