#include <iostream>
#include <vector>
#include <string>
using namespace std;

const string VERD = "verd";
const string GROC = "groc";
const string VERMELL = "vermell";

struct Enviament {
        string dni;
        string exer;
        int temps;
        string res;
};

struct Exercici {
        string exer;
        int num;
};

struct Resultats {
        Exercici envverds;
        Exercici alverds;
        Exercici alverms;
        Exercici alin;
        Exercici maxtemp;
};

typedef vector<Enviament> Historia;

void llegeix_env(Enviament&e) {
        cin >> e.dni >> e.exer >> e.temps >> e.res;
}

void llegeix_hist(Historia&h, int i) {
        Enviament e;
        llegeix_env(e);
        h[i] = e;
}
bool es_mes_petit(const Enviament&a, const Enviament&b) {
        if (a.exer == b.exer) return a.dni < b.dni;
        return a.exer < b.exer;
}

void fusiona(Historia&v, int e, int m, int d) {
        int n = d - e + 1;
        Historia aux(n);
        int i = e;
        int j = m + 1;
        int k = 0;
        while (i <= m and j <= d) {
                if (es_mes_petit(v[i], v[j])) {
                        aux[k] = v[i];
                        ++i;
                }
                else {
                        aux[k] = v[j];
                        ++j;
                }
                ++k;
        }

        while (i <= m) {
                aux[k] = v[i];
                ++i;
                ++k;
        }

        while (j <= d) {
                aux[k] = v[j];
                ++j;
                ++k;
        }

        for (k = 0; k < n; ++k) v[k + e] = aux[k];
}

void ordena_per_fusio(Historia&v, int e, int d) {
        if (e < d) {
                int m = (e + d)/2;
                ordena_per_fusio(v, e, m);
                ordena_per_fusio(v, m + 1, d);
                fusiona(v, e, m, d);
        }
}

Resultats calcula_resultats(const Historia&v) {
        int i = 0;
        Exercici maxtemp, envverds, alverds, alverms, alin;
        maxtemp.num = envverds.num = alverds.num = alverms.num = alin.num = 0;
        while (i < v.size()) {
                string exer = v[i].exer;
                int auxenvverds, auxalin, auxalverds, auxalverms;
                auxenvverds = auxalin = auxalverds = auxalverms = 0;
                while (i < v.size() and v[i].exer == exer) {
                        string alum = v[i].dni;
                        bool hihaverd, hihagroc, hihavermell;
                        hihaverd = hihagroc = hihavermell = false;
                        while (i < v.size() and v[i].exer == exer and v[i].dni == alum) {
                                if (v[i].res == GROC) hihagroc = true;
                                if (v[i].res == VERMELL) hihavermell = true;
                                if (v[i].res == VERD) {
                                        ++auxenvverds;
                                        hihaverd = true;
                                }
                                if (v[i].temps > maxtemp.num) {
                                        maxtemp.exer = exer;
                                        maxtemp.num = v[i].temps;
                                }
                                ++i;
                        }
                        if (hihaverd) ++auxalverds;
                        if (hihavermell and not hihaverd and not hihagroc) ++auxalverms;
                        ++auxalin;
                }
                if (auxalverds > alverds.num) {
                        alverds.num = auxalverds;
                        alverds.exer = exer;
                }
                if (auxalverms > alverms.num) {
                        alverms.num = auxalverms;
                        alverms.exer = exer;
                }
                if (auxalin > alin.num) {
                        alin.num = auxalin;
                        alin.exer = exer;
                }
                if (auxenvverds > envverds.num) {
                        envverds.num = auxenvverds;
                        envverds.exer = exer;
                }
        }
        Resultats r;
        r.envverds = envverds;
        r.alverds = alverds;
        r.alverms = alverms;
        r.alin = alin;
        r.maxtemp = maxtemp;
        return r;
}

int main() {
        int n;
        cin >> n;
        Historia h(n);
        for (int i = 0; i < n; ++i) llegeix_hist(h, i);

        ordena_per_fusio(h, 0, h.size() - 1);
        Resultats r = calcula_resultats(h);

        cout << "exercici amb mes enviaments verds:     ";
        if (r.envverds.num != 0) cout << r.envverds.exer << " (" << r.envverds.num
                                      << ')' << endl;
        else cout << '-' << endl;

        cout << "exercici amb mes alumnes verds:        ";
        if (r.alverds.num != 0) cout << r.alverds.exer << " (" << r.alverds.num
                                     << ')' << endl;
        else cout << '-' << endl;

        cout << "exercici amb mes alumnes vermells:     ";
        if (r.alverms.num != 0) cout << r.alverms.exer << " (" << r.alverms.num
                                     << ')' << endl;
        else cout << '-' << endl;

        cout << "exercici que mes alumnes han intentat: ";
        if (r.alin.num != 0) cout << r.alin.exer << " (" << r.alin.num
                                  << ')' << endl;
        else cout << '-' << endl;

        cout << "exercici de l'ultim enviament:         ";
        if (r.maxtemp.num != 0) cout << r.maxtemp.exer << endl;
        else cout << '-' << endl;
}
