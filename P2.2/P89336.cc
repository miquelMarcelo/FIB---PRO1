#include <iostream>
using namespace std;

void gira(int &n){
    string nom;
    if (cin >> nom){
            n++;
        gira(n);
        if (n<=0) cout << nom << endl;
        n=n-2;
    }
}
int main(){
    int n=0;
    gira(n);
}
