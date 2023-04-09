#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > matriz;

void funcion(matriz& campo, int x, int y) {
        for (int i = x; i < campo.size() ; ++i) {
                if (campo[i][y] != 0) {
                        for (int j = y; j < campo[0].size() ; ++j) {
                                if (campo[i][j] != 0) campo[i][j] = 0;
                                else {
                                        j = campo[0].size() ;
                                }
                        }
                }
                else i = campo.size() ;
        }
}

int main() {
        int f, c; // f = filas, c = columnas
        while (cin >> f >> c){
                matriz campo(f, vector<int>(c,0));
                for (int m = 0; m < f; ++m) {
                        for (int n = 0; n < c; ++n) {
                                cin >> campo[m][n];
                        }
                }
                int contador = 0;
                for (int i = 0; i < f; ++i) {
                        for (int j = 0; j < c; ++j) {
                                if (campo[i][j] != 0) {
                                        funcion(campo, i, j);
                                        ++contador;
                                }
                        }
                }
                cout << contador << endl;
        }
}
