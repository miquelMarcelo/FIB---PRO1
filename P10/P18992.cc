#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector<char> > Tablero;

void imprimir_tablero (Tablero& tab1, int negras, int blancas){
    int tam = tab1.size();
    for (int i = 0; i < tam; ++i){
        for (int j = 0; j < tam; ++j){
            cout <<tab1[i][j];
        }
        cout <<endl;
    }
    cout <<negras<<":"<<blancas<<endl;
}

void convertir (Tablero& tab1, int i, int j, int dir_i, int dir_j, char c, int& negras, int& blancas){
    int limite = tab1.size();
    bool valido = false;
    bool puntos = false;
    int i_tab = i;
    int j_tab = j;

    i += dir_i;
    j += dir_j;

    while (i < limite and j < limite and i > -1 and j > -1 and !valido and !puntos){
        if (tab1[i][j] == '.') puntos = true;
        else if (tab1[i][j] == c) valido = true;
        else {
            i += dir_i;
            j += dir_j;
        }
    }

    if (valido){
        i_tab += dir_i;
        j_tab += dir_j;
        while (i_tab < limite and j_tab < limite and i > -1 and j > -1 and tab1[i_tab][j_tab] != c){
            tab1[i_tab][j_tab] = c;
            if (c == 'B'){ ++blancas; --negras;}
            else {++negras; --blancas;}
            i_tab += dir_i;
            j_tab += dir_j;
        }
    }
}

int main(){
    int n;
    cin >>n;

    Tablero tab1 (n,vector<char>(n,'.'));
    tab1[(n/2)-1][(n/2)-1] = 'B';
    tab1[(n/2)-1][(n/2)] = 'N';
    tab1[(n/2)][(n/2)-1] = 'N';
    tab1[(n/2)][(n/2)] = 'B';

    int blancas, negras;
    blancas = negras = 2;

    imprimir_tablero(tab1, negras ,blancas);
    cout <<endl;
    char c;
    while (cin >>c){

        int i,j;
        cin >>i>>j;
        tab1[i-1][j-1] = c;

        if (c == 'B'){ ++blancas;}
        else {++negras;}

        convertir (tab1,i-1,j-1,-1,0,c,negras,blancas);
        convertir (tab1,i-1,j-1,-1,1,c,negras,blancas);
        convertir (tab1,i-1,j-1,0,1,c,negras,blancas);
        convertir (tab1,i-1,j-1,1,1,c,negras,blancas);
        convertir (tab1,i-1,j-1,1,0,c,negras,blancas);
        convertir (tab1,i-1,j-1,1,-1,c,negras,blancas);
        convertir (tab1,i-1,j-1,0,-1,c,negras,blancas);
        convertir (tab1,i-1,j-1,-1,-1,c,negras,blancas);
        imprimir_tablero(tab1, negras ,blancas);
        cout <<endl;
    }
}
