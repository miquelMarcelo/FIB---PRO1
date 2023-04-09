#include <iostream>
using namespace std;

bool parell (int n){
    if (n%2==0)return true;
    else return false;
}
int main(){
    int x, contador=0;
    bool trobat=false;
    while (cin >> x and not trobat){
            trobat = parell (x);
            contador++;
    }
    cout << contador << endl;
}
