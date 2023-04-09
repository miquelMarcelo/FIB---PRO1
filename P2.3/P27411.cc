#include <iostream>

using namespace std;

int main(){
    int x,n;
    cin >> x;
    int contador=0;
    bool trobat =false;
    int m=0;
    while (cin >> n and n != -1){
       if (not trobat){
       contador++;
       trobat = contador ==x;
        m=n;
            }
        }
        if (trobat) cout << "A la posicio " << x << " hi ha un " << m  << "."<<endl;
        else cout  << "Posicio incorrecta." << endl;
}
