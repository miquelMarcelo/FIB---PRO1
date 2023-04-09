#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > M(n,vector<int>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> M[i][j];
        }
    }
    string consulta;
    int x,y;
    while(cin >> consulta){
        if (consulta == "fila"){
            cin >> x;
            cout << "fila " << x << ":";
            x--;
            for (int j=0;j<m;j++){
                cout << " " << M[x][j];
            }
        }else if (consulta == "columna"){
            cin >> x;
            cout << "columna " << x << ":";
            x--;
            for (int i=0;i<n;i++){
                cout << " "<< M[i][x];
            }
        }else{
            cin >> x >> y;
            cout << "element " << x << " " << y << ": " << M[x-1][y-1];
        }
        cout << endl;
    }
}
